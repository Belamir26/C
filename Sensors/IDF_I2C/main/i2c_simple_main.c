
#include <stdio.h>
#include "esp_log.h"
#include "driver/i2c.h"
#include "driver/i2c_master.h"

static const char *TAG = "i2c-simple-example";

#define I2C_MASTER_SCL_IO           5      /*!< GPIO number used for I2C master clock */
#define I2C_MASTER_SDA_IO           6      /*!< GPIO number used for I2C master data  */
#define I2C_MASTER_NUM              0                          /*!< I2C master i2c port number, the number of i2c peripheral interfaces available will depend on the chip */
#define I2C_MASTER_FREQ_HZ          400000                     /*!< I2C master clock frequency */
#define I2C_MASTER_TX_BUF_DISABLE   0                          /*!< I2C master doesn't need buffer */
#define I2C_MASTER_RX_BUF_DISABLE   0                          /*!< I2C master doesn't need buffer */
#define I2C_MASTER_TIMEOUT_MS       1000

#define SENSOR_ADDR                 0x48        /*!< Slave address of the MPU9250 sensor */
#define READ_ADDR                   0x00        /*!< Register addresses of the "who am I" register */


//read
static esp_err_t mpu9250_register_read(uint8_t reg_addr, uint8_t *data, size_t len)
{
    return i2c_master_write_read_device(I2C_MASTER_NUM, SENSOR_ADDR, &reg_addr, 1, data, len, I2C_MASTER_TIMEOUT_MS / portTICK_PERIOD_MS);
}

//Initi master
static esp_err_t i2c_master_init(void)
{
    int i2c_master_port = I2C_MASTER_NUM;

    i2c_config_t conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = I2C_MASTER_SDA_IO,
        .scl_io_num = I2C_MASTER_SCL_IO,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master.clk_speed = I2C_MASTER_FREQ_HZ,
    };

    i2c_param_config(i2c_master_port, &conf);

    return i2c_driver_install(i2c_master_port, conf.mode, I2C_MASTER_RX_BUF_DISABLE, I2C_MASTER_TX_BUF_DISABLE, 0);
}

void app_main(void)
{
    uint8_t data[2];
    ESP_ERROR_CHECK(i2c_master_init());
    ESP_LOGI(TAG, "I2C initialized successfully");
    uint32_t vector[5];
    uint8_t contador;
    float prom;
    while(1){
        ESP_ERROR_CHECK(mpu9250_register_read(READ_ADDR, data, 2));
        data[0]=data[0]& 0b01111111;  // Regsiter de - +
        uint16_t temp=0;
        temp= data[0] <<8;
        temp = temp | data[1];
        temp= temp >>5;
        float temppp = (float) temp* 0.125;
        vector[contador]=temppp;
        
        vTaskDelay(100/ portTICK_PERIOD_MS);
        contador ++;
        if(contador==6){
            contador=0;
            //tirar el suma
            for(uint8_t i=0;i<5;i++){
                prom+= vector[i];
            }
            prom /=5;
            ESP_LOGI(TAG, "Muestras Tomadas: 5");
            ESP_LOGI(TAG, "Data = %.2f", prom);
            prom=0;

        }
    }
}

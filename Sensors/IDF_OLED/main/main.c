#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#include "ssd1306.h"
#include "font8x8_basic.h"


#define tag "SSD1306"

#define  CONFIG_SDA_GPIO	5
#define  CONFIG_SCL_GPIO	4
#define  CONFIG_RESET_GPIO	33


uint8_t batman[] = {
		0b11111111, 0b11111111, 0b11111111, 0b11111111,
		0b11111111, 0b10011111, 0b11111001, 0b11111111,
		0b11111110, 0b00111110, 0b01111100, 0b01111111,
		0b11111000, 0b00111100, 0b00111100, 0b00011111,
		0b11110000, 0b00011100, 0b00111000, 0b00001111,
		0b11110000, 0b00000000, 0b00000000, 0b00001111,
		0b11100000, 0b00000000, 0b00000000, 0b00000111,
		0b11100000, 0b00000000, 0b00000000, 0b00000111,
		0b11110000, 0b00000000, 0b00000000, 0b00001111,
		0b11110000, 0b11000100, 0b00100011, 0b00001111,
		0b11111001, 0b11111110, 0b01111111, 0b10011111,
		0b11111100, 0b11111110, 0b01111111, 0b00111111,
		0b11111111, 0b11111111, 0b11111111, 0b11111111
};


void app_main(void)
{
	SSD1306_t dev;
	int center, top, bottom;
	char lineChar[20];

#if CONFIG_I2C_INTERFACE
	ESP_LOGI(tag, "INTERFACE is i2c");
	ESP_LOGI(tag, "CONFIG_SDA_GPIO=%d",CONFIG_SDA_GPIO);
	ESP_LOGI(tag, "CONFIG_SCL_GPIO=%d",CONFIG_SCL_GPIO);
	ESP_LOGI(tag, "CONFIG_RESET_GPIO=%d",CONFIG_RESET_GPIO);
	i2c_master_init(&dev, CONFIG_SDA_GPIO, CONFIG_SCL_GPIO, CONFIG_RESET_GPIO);
#endif // CONFIG_I2C_INTERFACE


#if CONFIG_FLIP
	dev._flip = true;
	ESP_LOGW(tag, "Flip upside down");
#endif


#if CONFIG_SSD1306_128x32
	ESP_LOGI(tag, "Panel is 128x32");
	ssd1306_init(&dev, 128, 32);
#endif // CONFIG_SSD1306_128x32


	for(;;){
		ssd1306_clear_screen(&dev, false);
		ssd1306_contrast(&dev, 0xff);
		ssd1306_display_text_x3(&dev, 0, "PAUL!", 5, false);
		vTaskDelay(1000 / portTICK_PERIOD_MS);
				ESP_LOGI(tag, "Paul!");

		ssd1306_clear_screen(&dev, false);
		ssd1306_contrast(&dev, 0xff);
		ssd1306_display_text_x3(&dev, 0, "ES", 2, false);
		vTaskDelay(1000 / portTICK_PERIOD_MS);
		ssd1306_clear_screen(&dev, false);

		ssd1306_display_text(&dev, 1, "BATMAN", 6, false);

		int bitmapWidth = 4*8;
		int width = ssd1306_get_width(&dev);
		int xpos = width / 2; // center of width
		xpos = xpos - bitmapWidth/2; 
		int ypos = 16;
		ESP_LOGD(tag, "width=%d xpos=%d", width, xpos);
		ssd1306_bitmaps(&dev, xpos, ypos, batman, 32, 13, false);
		vTaskDelay(3000 / portTICK_PERIOD_MS);

		for(int i=0;i<128;i++) {
			ssd1306_wrap_arround(&dev, SCROLL_RIGHT, 2, 3, 0);
		}

		vTaskDelay(1000 / portTICK_PERIOD_MS);
		ssd1306_clear_screen(&dev, false);

		ssd1306_display_text(&dev, 0, "LAMIR", 5, false);
		for(int i=0;i<128;i++) {
			ssd1306_wrap_arround(&dev, SCROLL_RIGHT, 0, 7, 0);
		}
		ssd1306_clear_screen(&dev, false);
		ssd1306_display_text(&dev, 0, "LAMIR", 5, false);
		for(int i=0;i<128;i++) {
			ssd1306_wrap_arround(&dev, SCROLL_LEFT, 0, 7, 0);
		}
		ssd1306_clear_screen(&dev, false);
		ssd1306_display_text(&dev, 0, "LAMIR", 5, false);
		for(int i=0;i<128;i++) {
			ssd1306_wrap_arround(&dev, SCROLL_UP, 1, 2, 0);
		}
		ssd1306_clear_screen(&dev, false);
		ssd1306_display_text(&dev, 0, "LAMIR", 5, false);
		for(int i=0;i<128;i++) {
			ssd1306_wrap_arround(&dev, SCROLL_DOWN, 1, 2, 0);
		}
		vTaskDelay(2000 / portTICK_PERIOD_MS);
		


		// Fade Out
		ssd1306_fadeout(&dev);
		vTaskDelay(500 / portTICK_PERIOD_MS);

	}

  	
	

}
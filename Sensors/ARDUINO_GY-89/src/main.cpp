/* EJEMPLO DE ACCELEROMETRO CON LSM303*/
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>  //Version nueva?


#define LSM303_ADDRESS_ACCEL          0X1D

Adafruit_LSM303_Accel_Unified accell = Adafruit_LSM303_Accel_Unified(54321);

void displaySensorDetails(void)
{
  sensor_t sensor;
  accell.getSensor(&sensor);
  Serial.println("------------------------------------");
  Serial.print  ("Sensor:       "); Serial.println(sensor.name);
  Serial.print  ("Driver Ver:   "); Serial.println(sensor.version);
  Serial.print  ("Unique ID:    "); Serial.println(sensor.sensor_id);
  Serial.print  ("Max Value:    "); Serial.print(sensor.max_value); Serial.println(" m/s^2");
  Serial.print  ("Min Value:    "); Serial.print(sensor.min_value); Serial.println(" m/s^2");
  Serial.print  ("Resolution:   "); Serial.print(sensor.resolution); Serial.println(" m/s^2");
  Serial.println("------------------------------------");
  Serial.println("");
  delay(500);
}



void setup() {
    Wire.begin();
    Serial.begin(115200);
    Serial.println("Accelerometer Test"); Serial.println("");

    /* Initialise the sensor */
    if(!accell.begin())
    {
      /* There was a problem detecting the ADXL345 ... check your connections */
      Serial.println("Ooops, no LSM303 detected ... Check your wiring!");
      while(1);
    }

  /* Display some basic information on this sensor */
  displaySensorDetails();

}

void loop(void)
{
  /* Get a new sensor event */
  sensors_event_t event;
  accell.getEvent(&event);

  // /* Display the results (acceleration is measured in m/s^2) */
  // Serial.print("X: "); Serial.print(event.acceleration.x); Serial.print("  ");
  // Serial.print("Y: "); Serial.print(event.acceleration.y); Serial.print("  ");
  // Serial.print("Z: "); Serial.print(event.acceleration.z); Serial.print("  ");Serial.println("m/s^2 ");

  /* Note: You can also get the raw (non unified values) for */
  /* the last data sample as follows. The .getEvent call populates */
  /* the raw values used below. */
  Serial.print(accell.raw.x); Serial.print(",");
  Serial.print(accell.raw.y); Serial.print(",");
  Serial.print(accell.raw.z); Serial.println("");

  /* Delay before the next sample */
  delay(100);
}


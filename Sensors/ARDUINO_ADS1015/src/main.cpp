#include <Arduino.h>
#include <Wire.h>
#include <ADS1X15.h>


ADS1115 SEN1(ADS1015_ADDRESS);
ADS1115 SEN2(0x49);
uint16_t val1;
uint16_t val2;
uint16_t val3;
uint16_t val4;
uint16_t val5;
uint16_t val6;
uint16_t val7;
uint16_t val8;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  SEN1.begin();
  SEN1.setGain(0);
  SEN2.begin();
  SEN2.setGain(0);
}

void loop() {
  val1= SEN1.readADC(0);
  val2= SEN1.readADC(1);
  val3= SEN1.readADC(2);
  val4= SEN1.readADC(3);

  val5= SEN2.readADC(0);
  val6= SEN2.readADC(1);
  val7= SEN2.readADC(2);
  val8= SEN2.readADC(3);

  //voltaje conversor
  float f = SEN1.toVoltage(1);
  float f2 = SEN2.toVoltage(1);


  Serial.print(val1 * f, 3);  
  Serial.print(',');
  Serial.print(val2 * f, 3);  
  Serial.print(',');
  Serial.print(val3 * f, 3);  
  Serial.print(',');
  Serial.print(val4 * f, 3); 
  Serial.print(',');
  Serial.print(val5 * f2, 3);  
  Serial.print(',');
  Serial.print(val6 * f2, 3);  
  Serial.print(',');
  Serial.print(val7 * f2, 3);  
  Serial.print(',');
  Serial.println(val8 * f2, 3);


  delay(5);




}

/*
* X- and Y_register readout example using the ADNS5050 library.
* In this example a Raspberry Pi Pico was used. If you want to use another microcontroller, cahnge the pin definitions according to your needs.
* Autor: RyzerPhenix
* Date: 29.01.2024
* Version: 1.0
* ©2024 by Ryzer Industries
*/


#include "adns5050.h"

//Define Pins of the ADNS5050 Sensor
#define SDIO_PIN 12
#define SCLK_PIN 13
#define NCS_PIN 14
#define NRESET_PIN 15

//Create Sensor Object
ADNS5050 mouse(SDIO_PIN, SCLK_PIN, NCS_PIN, NRESET_PIN);

void setup() {
  //Initialize serial communication
  Serial.begin(9600);
  //Initialize sensor
  mouse.begin();

  //Reset Sensor
  mouse.reset();
  delay(1000);

  //Print Sensor information for validating function
  Serial.print("Product ID: ");
  Serial.println(mouse.read(PRODUCT_ID));
  Serial.print("Product ID2: ");
  Serial.println(mouse.read(PRODUCTID2));
  Serial.print("Revision ID: ");
  Serial.println(mouse.read(REVISION_ID));
}

void loop() {
  //Resync the sensor communication
  mouse.sync();
  delay(1000);

  //Read the X- and Y-values of the DELTA_X (0x03) and DELTA_Y (0x04) Registers
  int deltaX = mouse.read(DELTA_X_REG);
  int deltaY = mouse.read(DELTA_Y_REG);
  
  //Print X- and Y-values to the serial console
  Serial.print("Delta X: ");
  Serial.print(deltaX);
  Serial.print(", Delta Y: ");
  Serial.println(deltaY);
}

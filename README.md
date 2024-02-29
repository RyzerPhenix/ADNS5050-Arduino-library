# ADNS5050-Arduino-library
A library to use the ADNS5050 optical mouse sensor from Avago with the Arduino IDE.
## Commands
- **ADNS5050 [sensorname](SDIO_PIN, SCLK_PIN, NCS_PIN, NRESET_PIN)**  
  Create the sensor object. replace [sensorname] with a name how you want to call your sensor. Replace SDIO_PIN, SCLK_PIN, NCS_PIN and NRESET_PIN with int values of the corresponding pins.
- **[sensorname].begin()**  
  Initialize the sensor object. Replace [sensorname] with the name you chose in the objectcreation for your sensor.
- **[sensorname].reset()**  
  Reset the sensor chip.
- **[sensorname].sync()**  
  Reinitialize the chip and its communication.
- **[sensorname].read([register])**  
  Read out register values. It returns an integer value. Replace [sensorname] with the name you chose in the objectcreation for your sensor. Replace register with the register HEX value or with one of the following predefinitions:
  - PRODUCT_ID = 0x00
  - PRODUCTID2 = 0x3e
  - REVISION_ID = 0x01
  - DELTA_X_REG = 0x03
  - DELTA_Y_REG = 0x04
  - SQUAL_REG = 0x05
  - MAXIMUM_PIXEL_REG = 0x08
  - MINIMUM_PIXEL_REG = 0x0a
  - PIXEL_SUM_REG = 0x09
  - PIXEL_DATA_REG = 0x0b
  - SHUTTER_UPPER_REG = 0x06
  - SHUTTER_LOWER_REG = 0x07
  - MOUSE_CONTROL = 0x0D
- **[sensorname].write([register], [data])**  
  Write a value to a register. Replace [sensorname] with the name you chose in the objectcreation for your sensor. Replace register with the register HEX value or with one of the predefinitions. Replace data with the value you want to   write to the register.
**NOTE: reffer to the ADNS5050 Datasheet for read/write operations.**

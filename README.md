# ADNS5050-Arduino-library
A library to use the ADNS5050 optical mouse sensor from Avago with the Arduino IDE.
## Commands
- **ADNS5050 [sensorname](SDIO_PIN, SCLK_PIN, NCS_PIN, NRESET_PIN)**
  Create the sensor object. replace [sensorname] with a name how you want to call your sensor. Replace SDIO_PIN, SCLK_PIN, NCS_PIN and NRESET_PIN with int values of the corresponding pins.
- **[sensorname].begin()**
  Initialize the sensor object. Replace [sensorname] with the name you chose in the objectcreation for your sensor.
- **[sensorname].read([register])**
  Read out register values. Replace [sensorname] with the name you chose in the objectcreation for your sensor. Change register with the register HEX value or with one of the following predefinitions:
  - PRODUCT_ID &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x00
  - PRODUCTID2 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x3e
  - REVISION_ID &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x01
  - DELTA_X_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x03
  - DELTA_Y_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x04
  - SQUAL_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x05
  - MAXIMUM_PIXEL_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x08
  - MINIMUM_PIXEL_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x0a
  - PIXEL_SUM_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x09
  - PIXEL_DATA_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x0b
  - SHUTTER_UPPER_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x06
  - SHUTTER_LOWER_REG &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x07
  - MOUSE_CONTROL &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0x0D

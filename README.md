# OneByOne 0.8" 7Segment
A seven segment display backpack, for chainable 2 pin driving.
pins:

1. VCC  : 2 - 5 volt
2. GND  : ground
3. clock:  up to 100mhz pulse
4. data : is pulled down

The segments have a current limiting resistor of 150 ohms. So they are bright and can be powered by 5 volts.

You can use the standard Arduino shiftOut function to enable the segments but for 16mhz microcontrollers I suggest to use the hardware SPI functions.
the segment bits are:

![labeled display](https://joostmarkerink.nl/projects/content/segments.png)

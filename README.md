# OneByOne_7Segment_0.8
A seven segment display backpack, for chainable 2 pin driving.
pins:

1. VCC  : 2 - 5 volt
2. GND  : ground
3. clock:  up to 100mhz pulse
4. data : is pulled down

You can use the standard Arduino shiftOut function to enable the segments but for 16mhz microcontrollers I suggest to use the hardware SPI functions.
the segment bits are:

 0. G
 1. F
 2. A
 3. B
 4. DP
 5. C
 6. D
 7. E

![labeled display](https://upload.wikimedia.org/wikipedia/commons/e/ed/7_Segment_Display_with_Labeled_Segments.svg)

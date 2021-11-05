# 60_24 

![60_24](Add Image)

A GH60 compatible 60 and matching 5x4 numpad connected via serial.

Serial Comms:
  - Pin `D0`, VCC, GND to serial USB-C connector.
Handedness:
 - 60%: Pin `E6` wired to VCC via 10k resistor
 - Numpad: Pin `E6` wired to GND via 10k resistor
Matrix:
 - Rows 1-5: `F1, F0, F7, F6, F5`
 - 60% Columns 1-14: `F4, D5, D3, D2, D1, B7, C7, C6, B6, B5, B4, D7, D6, D4`
 - Pad Columns 1-4: `F4, D5, D3, D2`
Extra Pin: 
 - VOG header with pin `B0`

To build:
`qmk compile -kb 60_24/rev1 -km default`

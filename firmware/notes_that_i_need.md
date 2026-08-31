## I/O Pins
Here are the I/O pins I am using.
* LED on Pin 7 (port P3.1, PWM-capable as PWM2)
* SPI on MOSI/MISO (ports P1.5 and P1.6)

## Todo

* Figure out how to control pin 7 to turn the LED on or off. Bonus would be getting PWM to work
* Figure out how to send and receive SPI data
* Learn more about USB
* more

## Registers I think I will need
From CH552 datasheet Section "5. Special Function Register (SFR)":
All the SPI0 registers
SPI0_STAT
SPI0_DATA 
SPI0_CTRL
SPI0_CK_SE
SPI0_S_PRE
SPI0_SETUP

The P3 registers (for the LED)
P3
P3_DIR_PU
P3_MOD_OC

The system setting registers (?)

The USB registers (hopefully not all 28 of them)

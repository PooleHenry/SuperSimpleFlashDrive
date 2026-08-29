# SuperSimpleFlashDrive
Designing a tiny capacity (16 MB!) flash drive, using a WCH CH552 microcontroller and a Winbond W25Q128 NOR Flash memory chip. Open-source! :D
<img width="2160" height="750" alt="flashdrive_boardCAD" src="https://github.com/user-attachments/assets/e4fba496-2d7e-456a-b235-f2be0758c65b" />

## What is this?
I want to try creating a USB flash drive myself, from scratch. This will give me a chance to learn a lot more about USB devices!

## ICs used

CH552 is a low cost microcontroller (currently about 40 cents in low quantities). It has a built-in USB peripheral, 16K of ROM, and 1K of RAM. [Datasheet](https://cdn-learn.adafruit.com/assets/assets/000/129/847/original/CH552DS1.PDF)

W25Q128 is a NOR flash memory chip with a serial interface. It stores 128 megabits of data, or 16 megabytes. The cost is about $1 in low quantities. [Datasheet](https://www.lcsc.com/datasheet/C97521.pdf)

## Firmware
I have not yet written any firmware.

## Schematic


## Acknowledgements
* I am using the [Routed Gothic](https://github.com/dse/routed-gothic) font by Darren Embry for the PCB
* I am using EasyEDA for the schematic and PCB design

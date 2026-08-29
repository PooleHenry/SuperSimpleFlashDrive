# SuperSimpleFlashDrive
Designing a tiny capacity (16 MB!) flash drive, using a WCH CH552 microcontroller and a Winbond W25Q128 NOR Flash memory chip. This project is open-source. :smiley:
<img width="1080" height="375" alt="flashdrive_boardCAD" src="https://github.com/user-attachments/assets/e4fba496-2d7e-456a-b235-f2be0758c65b" />

## What is this?
I want to try creating a USB flash drive myself, from scratch. This will give me a chance to learn a lot more about USB devices!

## ICs used

CH552 is a low cost microcontroller (currently about 40 cents in low quantities). It has a built-in USB peripheral, 16K of ROM, and 1K of RAM. [Datasheet](https://cdn-learn.adafruit.com/assets/assets/000/129/847/original/CH552DS1.PDF)

W25Q128 is a NOR flash memory chip with a serial interface. It stores 128 megabits of data, or 16 megabytes. The cost is about $1 in low quantities. [Datasheet](https://www.mouser.lt/datasheet/2/949/w25q128fv_rev.m_05132016_kms-1489795.pdf)

I chose the SOP version of the CH552 (CH552**G**) for ease of soldering. I chose a 3-volt SOIC version of the memory chip:  W25Q128**FVS**IG. Note that there's also a 1.8 volt version that won't work with this board.

## Firmware
I have not yet written any firmware. I'll need to make the CH552 emulate a [USB Mass Storage](https://en.wikipedia.org/wiki/USB_mass_storage_device_class) device. It will interface with the flash memory via standard SPI (MOSI/MISO/CS). For development, I plan to one of the (pid.codes)[https://pid.codes/] Test PIDs.

## Schematic
Here is the current schematic:

<img width="500" height="355" alt="flashdrive_schematic" src="https://github.com/user-attachments/assets/5dfcf262-532b-4683-83ef-b6aaf7c34cb6"/>

## Acknowledgements
* I am using the [Routed Gothic](https://github.com/dse/routed-gothic) font by Darren Embry for the PCB
* I am using EasyEDA for the schematic and PCB design

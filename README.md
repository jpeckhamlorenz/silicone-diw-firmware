# silicone-diw-firmware

Firmware for silicone direct ink writing with the prismatic gantry printer. This project is transitioning the firmware from Marlin to Klipper, which will allow easier integration of variable bead nozzle technology with the 2S3D machine.

## :gear: Firmware Settings

This part is the settings information for the hardware and software firmware used in this project.

### Hardware

| Item | Name (with Link) | Note |
| ---- | ---- | ---- |
| main board | [RAMBo 1.4](https://ultimachine.com/products/rambo-1-4) | belongs to [Arduino AVR](https://www.arduino.cc/) platform, with ATmega MCU |
| motor drivers | [A4988](https://www.handsontec.com/dataspecs/module/A4988.pdf) | added via breakout boards |
| XY stepper | [NEMA 23](https://www.lamtechnologies.com/Product.aspx?lng=EN&idp=stpmtrn23) | |
| Z stepper | [NEMA 34](https://www.lamtechnologies.com/Product.aspx?lng=EN&idp=stpmtrn34) | |
| extrusion motor (cheap) | [Pioneer Progressive Cavity Pump PTC 2-SD01](https://m.pioneer-elec.com/pd.jsp?mid=306&pid=32)[^pioneer] | may also be referred as Pioneer pumps and is made in China |
| extrusion motor (expensive) | [ViscoTec](https://www.viscotec.com/products/3d-print-heads/) 2-component print head vipro-HEAD 3/3 | may also be referred as ViscoTec pumps and is made in Germany |
| z-probe | [BLTouch](https://www.antclabs.com/bltouch) z-probe | |
| silicone material | [DOWSIL 121 Structural Glazing Sealant](https://www.dow.com/en-us/pdp.dowsil-121-structural-glazing-sealant.04116349h.html#overview) | usually referred to as Dow 121, with "121" meaning "1-to-1" ratio |

[^pioneer]: A Chinese website is used as spec due to it being a Chinese-made product. Please use browser translator if necessary. Alternatively, you can view a thesis mentioning this pump: <https://www.sciencedirect.com/science/article/pii/S0255270123002234>.

Some additional notes on the hardware:

- **Only 1 type of extrusion motor**, either cheap or expensive, will be installed on the printer.

### Marlin

All the code and configuration files for Marlin firmware are in the **[`firmware v12`](./firmware%20v12/)** folder, which is based on **Marlin 2.0.9.1** with some customization for our printer and silicone material.

For usage, after cloning the repo or downloading the [`firmware v12`](./firmware%20v12/) folder, **upload [`Marlin.ino`](./firmware%20v12/Marlin/Marlin.ino) to the main board via Arduino IDE** (this will automatically solve dependencies and build necessary files).

> According to [James](https://github.com/jpeckhamlorenz), direct flashing via Arduino IDE was workable back in 2022, but **support for modern Arduino IDE and modern Marlin is not guaranteed**.

### Klipper

:hourglass_flowing_sand: We are still figuring out the configuration of Klipper. Version and dependencies info as well as usage will be updated once the configuration is finalized.

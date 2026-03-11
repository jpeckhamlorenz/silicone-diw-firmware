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

---

## :computer: Notes for Contributors

The following content is for potential contributors or developers of the project, including branch specifications, collaboration conventions, etc.

### Branch Specification

- `main`: Default branch for **verified versions only**
  - :x: ***Do not commit directly to `main`** unless you are fully aware of the consequences*
  - :white_check_mark: Instead, use **pull requests** to merge changes to `main`
- **Development branches**: Branches for new features, optimizations, refactors and other code changes
  - `dev/Marlin`: Potential edits to existing Marlin firmware
  - `dev/Klipper`: Development of Klipper firmware
  - `dev/G-Code_VSCode_Config`: Development of necessary settings for VScode G-Code IntelliSense extensions. Details will be given in [`.vscode`](./.vscode) folder.
- **Test branches**: Branches used for testing (like writing testcases, etc.) for corresponding development branches
  - `test/Marlin`: Potential tests for potential edits on `dev/Marlin`
  - `test/Klipper`: Tests for edits on `dev/Klipper`
- **Temporary branches**: Branches created temporarily for purposes like experiments, aggressive trials, etc. They may be deleted afterwards
  - These branches take the form of **`temp/<branch name>`**, and since they are temporary they won't be described one by one
  - *:exclamation: When in doubt, create a temporary branch and commit on that branch. Once verified, merge to the originally target branch*

### Commit Message

For details please refer to <https://gist.github.com/qoomon/5dfcdf8eec66a051ecd85625518cfd13>. However, we don't need the full commit message convention in this project, and we only recommend **`<type>: <description>`** as the desired format.

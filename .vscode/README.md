# Note about VSCode Settings

This `README` file documents the purposes for adding relevant VSCode settings in this folder.

## G-Code Extension Settings

The key `"gcode.definitions"` includes all the G code definitions for [<img src="https://user-images.githubusercontent.com/29161635/93551441-de870a00-f93b-11ea-82a3-48c360d2f732.png" alt="G-Code extension icon" height="15em"> G-Code](https://github.com/scottmwyant/vscode-gcode) extension. However, before introducing this key and its value block, the reason why this extension is chosen for G code intelliSense is shown below.

### Explanation on G Code Extensions

Having an intelliSense extension is obviously a great help when reading and writing G code. By hovering the mouse cursor onto the G code commands, explanations, usages and other notes can appear in a pop-up mini window for your own reference.

There are several VSCode extensions available for G code highlighting and intelliSense, as have been shown in the following table:

| **Extension** | [<img src="https://github.com/appliedengdesign/vscode-gcode-syntax/raw/master/images/logo.png" alt="G-Code Syntax extension icon" height="15em"> G-Code Syntax](https://github.com/appliedengdesign/vscode-gcode-syntax) | [<img src="https://novy.gallerycdn.vsassets.io/extensions/novy/vsc-gcode/0.0.4/1680600375915/Microsoft.VisualStudio.Services.Icons.Default" alt="G-code for VSC extension icon" height="15em"> G-code for VSC](https://github.com/NovySoft/vsc-gcode) | [<img src="https://user-images.githubusercontent.com/29161635/93551441-de870a00-f93b-11ea-82a3-48c360d2f732.png" alt="G-Code extension icon" height="15em"> G-Code](https://github.com/scottmwyant/vscode-gcode) |
| ------------- | ------------- | ------------- | ------------- |
| **3D Printing Support** | :grey_exclamation: partial, general support | :heavy_check_mark: full, desired for Marlin | :x: no built-in support |
| **CNC Support** | :grey_exclamation: partial, general support | :x: no support | :x: no built-in support |
| **Customization** | :exclamation: no easy way to customize | :exclamation: no easy way to customize | :heavy_check_mark: easy customization |

> **Note:** This table is based on testing in March, 2026. If things change later, feel free to open issues to specify the changes.

Since Klipper and Marlin G code have some minor differences, [<img src="https://user-images.githubusercontent.com/29161635/93551441-de870a00-f93b-11ea-82a3-48c360d2f732.png" alt="G-Code extension icon" height="15em"> G-Code](https://github.com/scottmwyant/vscode-gcode) is finally chosen due to its **customization flexibility** through `"gcode.definitions"`. The main purpose of this directory, as well as the `dev/G-Code_VSCode_Config` branch, is also to track changes to the modification of this customized setting of G code dictionary.

Admittedly, customization from scratch is a lot of work. As a result, the official repo for [<img src="https://user-images.githubusercontent.com/29161635/93551441-de870a00-f93b-11ea-82a3-48c360d2f732.png" alt="G-Code extension icon" height="15em"> G-Code](https://github.com/scottmwyant/vscode-gcode) has provided with a default version of `"gcode.definitions"`, shown in <https://github.com/scottmwyant/vscode-gcode/pull/4#issuecomment-2423739851>.

The [`settings.json`](./settings.json) file will be continually updated when more terms are looked up in official documentation.

### Notes on Maintaining `"gcode.definitions"`

`"gcode.definitions"` is a huge dictionary JSON block with G code commands as keys, and explanation as values. Value blocks support partial Markdown syntax like code blocks, etc.

One thing to note is that for switching to a new line, please use 2 newline characters, i.e. `\n\n`, otherwise it won't be activated.

> Note that in dictionary display mode (`G-Code: Show the dictionary`), Markdown rendering and newline features are all disabled, but they can be enabled in pop-up mini window upon cursor hover.

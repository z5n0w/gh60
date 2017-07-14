my keyboard layout:

Layer 1:
    ![Layer 1](https://github.com/z5n0w/gh60/raw/master/L1.png)

Layer 2:
    ![Layer 2](https://github.com/z5n0w/gh60/raw/master/L2.png)

firmware:

    firmware.hex from tkg.press

dfu-programmer commands to flash firmware & keymap:

    dfu-programmer atmega32u4 erase
    
    dfu-programmer atmega32u4 flash firmware.hex
    
    dfu-programmer atmega32u4 flash-eeprom keymap.eep
    
    dfu-programmer atmega32u4 reset

useful-urls:

    http://www.keyboard-layout-editor.com
    
    http://tkg.press

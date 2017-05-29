#!/bin/bash
TARGET=atmega32u4
dfu-programmer $TARGET erase
dfu-programmer $TARGET flash firmware.hex
dfu-programmer $TARGET flash-eeprom keymap.eep
dfu-programmer $TARGET reset

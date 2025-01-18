# artpad

![artpad](https://imgur.com/a/epjAAAE)

This is the Artpad, a macro pad created created to be compatible with the artsey.io keyboard layout. It currently has firmware that uses it as a macro pad, but in the future, I intend to convert it to use the artsey layout.
The features of this macro pad include an expansion port with easy access to the gpio of the Seeed Xiao RP2040 so that with only a small change to the firmware, a new module can be added to the board to extend its functionality. This can include things like extra keys, rotary encoders, or even oled screens or leds.

* Keyboard Maintainer: [Koji Ino](https://github.com/Person20020)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make artpad:default

Make the vial keymap:

    make artpad:default

Flashing example for this keyboard:

    make artpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (the top) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the controller
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

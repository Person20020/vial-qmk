// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │SFT│CTL│PLY│
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x3(
        KC_LSFT,    KC_LCTL,    KC_MEDIA_PLAY_PAUSE
    )
};

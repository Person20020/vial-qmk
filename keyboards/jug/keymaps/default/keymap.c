// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _COLEMAK = 0,
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬───┬───┬───┬───┬───┐
     * │ TAB │ Q │ W │ F │ P │ G │
     * ├─────┼───┼───┼───┼───┼───┤
     * │ CTL │ A │ R │ S │ T │ D │
     * ├─────┼───┼───┼───┼───┼───┤
     * │SHFT │ Z │ X │ C │ V │ B │
     * └─────┴───┴─┬─┴───┼───┴┬──└─┬─────┬─────┐
     *             │LOWER│LGUI│LALT│ SPC │     │
     *             └─────┴────┴────┴─────┴─────┘
     */
    
    [_COLEMAK] = LAYOUT(
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,                                                   KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_MINS,
        KC_LCTL,    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,                                                   KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                                                   KC_K,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                                            LOWER,      KC_LGUI,    KC_LALT,   KC_SPC,  _______,    _______,    KC_ENT,     KC_BSPC,    KC_RGUI,    RAISE
    ),
    [_QWERTY] = LAYOUT(
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,
        KC_LCTL,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                                                   KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                                            LOWER,      KC_LGUI,    KC_LALT,   KC_SPC,  _______,    _______,    KC_ENT,     KC_BSPC,    KC_RGUI,    RAISE
    ),
    [_LOWER] = LAYOUT(
        _______,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,                                                KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    _______,
        _______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                                   KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,
        _______,    _______,    _______,    _______,    _______,    KC_LCBR,                                                KC_RCBR,     _______,    _______,    _______,    _______,    _______,
                                            _______,    _______,    _______,   _______,     _______,    _______,_______,    _______,    _______,    _______ 
    ),
    [_RAISE] = LAYOUT(
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,                                                  KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        _______,    KC_MUTE,    KC_VOLD,    KC_MPLY,    KC_VOLU,    _______,                                                _______,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   _______,
        _______,    _______,    _______,    _______,    _______,    _______,                                                _______,    _______,    _______,    _______,    _______,    _______,
                                            _______,    _______,    _______,   _______,     _______,    _______,_______,    _______,    _______,    _______ 
    ),
    [_ADJUST] = LAYOUT(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                                                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                                                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                                                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                            _______,    _______,    _______,   _______,     _______,    _______,_______,    _______,    _______,    _______ 
    ),
};

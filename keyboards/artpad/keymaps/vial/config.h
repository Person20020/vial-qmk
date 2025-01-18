// Copyright 2024 Koji Ino (@Person20020)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* VIAL UID for */
#define VIAL_KEYBOARD_UID {0xD2, 0xA8, 0x3B, 0xCA, 0xA1, 0xE5, 0x4A, 0xBA}
/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define VIAL_COMBO_ENTRIES 45

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

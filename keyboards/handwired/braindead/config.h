#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Hexwire
#define PRODUCT         Magicforce 61
#define DESCRIPTION     Handwired Magicforce 61

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B3, B2, B4, B5, B6 }
#define MATRIX_COL_PINS { B1, B0, E7, E6, D0, D1, D2, D3, D4, D5, D6, D7, E0, E1, C1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

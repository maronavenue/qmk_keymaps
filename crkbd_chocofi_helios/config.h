/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

// #define MASTER_LEFT
#define MASTER_RIGHT

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef KEYBOARD_crkbd
/* #define DEBOOUNCE 9 */
#define LAYOUT_36( \
  a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, \
  b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, \
  c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, \
  d1, d2, d3, d4, d5, d6 \
) \
  LAYOUT_split_3x6_3( \
    ___, a1,  a2,  a3, a4, a5, a6, a7, a8, a9,  a10, ___, \
    ___, b1,  b2,  b3, b4, b5, b6, b7, b8, b9,  b10, ___, \
    ___, c1,  c2,  c3, c4, c5, c6, c7, c8, c9,  c10, ___, \
    d1, d2, d3, d4, d5, d6 \
  )
#define LAYOUT_46( \
  a1, a2, a3, a4, a5, aA,  aB,  a6, a7, a8, a9, a10, \
  b1, b2, b3, b4, b5, bA,  bB,  b6, b7, b8, b9, b10, \
  c1, c2, c3, c4, c5, cA,  cB,  c6, c7, c8, c9, c10, \
  dA, dB, d1, d2, d3, /**/ /**/ d4, d5, d6, dC, dD \
) \
  LAYOUT_split_3x6_3( \
    ___, a1,  a2,  a3, a4, a5, a6, a7, a8, a9,  a10, ___, \
    ___, b1,  b2,  b3, b4, b5, b6, b7, b8, b9,  b10, ___, \
    ___, c1,  c2,  c3, c4, c5, c6, c7, c8, c9,  c10, ___, \
    d1, d2, d3, d4, d5, d6 \
  )
// #define EE_HANDS
#endif

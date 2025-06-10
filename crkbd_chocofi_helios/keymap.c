/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

// Keycode aliases

#define x__Q    LCTL_T(KC_Q)       /* ctrl(hold) or q(tap) */
#define x__ENT  LCTL_T(KC_ENT)     /* ctrl(hold) or enter(tap) */
#define _v_     KC_TRNS
#define ___     KC_NO
#define x__LMB  KC_MS_BTN1         /* Left mouse button */
#define x__RMB  KC_MS_BTN2         /* Right mouse button */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_36(
    x__Q, KC_W, KC_F,    KC_P,     KC_B,    /**/ KC_J,   KC_L,     KC_U,    KC_Y,    KC_BSPC,
    KC_A, KC_R, KC_S,    KC_T,     KC_G,    /**/ KC_M,   KC_N,     KC_E,    KC_I,    KC_O,
    KC_Z, KC_X, KC_C,    KC_D,     KC_V,    /**/ KC_K,   KC_H,     KC_COMM, KC_DOT,  x__ENT,
    /**/  /**/  KC_LGUI, MO(1), KC_LSFT,    /**/ KC_SPC, MO(2),    KC_LALT  /**/     /**/
  ),

    [1] = LAYOUT_36(
    KC_QUOT, KC_DQUO, KC_CIRC, KC_QUES, KC_GRV,   /**/ KC_LBRC, KC_LT,    KC_EQL,  KC_GT,   KC_RBRC,
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,  /**/ KC_LCBR, KC_LPRN,  KC_COLN, KC_RPRN, KC_RCBR,
    KC_BSLS, KC_TILD, KC_PIPE, KC_SCLN, KC_AMPR,  /**/ KC_SLSH, KC_ASTR,  KC_MINS, KC_PLUS, KC_UNDS,
    /**/     /**/     _v_,     _v_,     KC_LSFT,  /**/ _v_,     MO(3),    _v_      /**/     /**/
  ),

    [2] = LAYOUT_36(
    KC_LCTL, KC_RGUI, S(KC_TAB), KC_TAB,   KC_RALT, /**/ KC_COMM, KC_HOME, KC_UP,   KC_END,  KC_DEL,
    KC_1,    KC_2,    KC_3,      KC_4,     KC_5,    /**/ KC_DOT,  KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,
    KC_6,    KC_7,    KC_8,      KC_9,     KC_0,    /**/ KC_ESC,  KC_PGUP, KC_PGDN, KC_ESC,  KC_LCTL,
    /**/     /**/     _v_,       _v_,      _v_,     /**/ _v_,     KC_ENT,  _v_      /**/     /**/
  ),
    
    [3] = LAYOUT_36(
    KC_F11, KC_F12, KC_PSCR, KC_MPLY, KC_MNXT, /**/ KC_WH_U, x__LMB,  KC_MS_U, x__RMB,  KC_BRIU,
    KC_F1,  KC_F2,  KC_F3,   KC_F4,   KC_F5,   /**/ KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BRID,
    KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,  /**/ ___,     KC_VOLD, KC_VOLU, ___,     _v_,
    /**/    /**/    _v_,     x__LMB,  _v_,     /**/ _v_,     _v_,     ___      /**/     /**/
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif


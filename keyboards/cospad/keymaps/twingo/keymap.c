#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layers {
  _BL = 0,
  _FL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap _BL: (Base Layer) Default Layer
 * ,-------------------.
 * |Esc | NL | FN | BS |
 * |----|----|----|----|
 * |F13 | /  | *  | -  |
 * |----|----|----|----|
 * | 7  | 8  | 9  | +  |
 * |----|----|----|----|
 * | 4  | 5  | 6  |TAB |
 * |----|----|----|----|
 * | 1  | 2  | 3  |    |
 * |----|----|----| En |
 * |   0     | .  |    |
 * `-------------------'
 */
  [_BL] = LAYOUT_numpad_6x4(
    KC_ESC,   KC_NLCK,  MO(_FL),   KC_BSPC, \
    KC_F13,   KC_PSLS,  KC_PAST,   KC_PMNS, \
    KC_P7,    KC_P8,    KC_P9,     KC_PPLS, \
    KC_P4,    KC_P5,    KC_P6,     KC_TAB, \
    KC_P1,    KC_P2,    KC_P3,              \
    KC_P0,              KC_PDOT,   KC_PENT
  ),

/* Keymap _FL: Function Layer
 * ,-------------------.
 * |RGBT|    |    |    |
 * |----|----|----|----|
 * |RGBM|RGBP|BTOG|    |
 * |----|----|----|----|
 * |HUD |HUI |BON |    |
 * |----|----|----|----|
 * |SAD |SAI |BOFF|    |
 * |----|----|----|----|
 * |VAD |VAS |BSTP|    |
 * |----|----|----|    |
 * |         |RST |    |
 * `-------------------'
 */
  [_FL] = LAYOUT_numpad_6x4(
    RGB_TOG,  _______,  _______,   _______, \
    RGB_MOD,  RGB_M_P,  BL_TOGG,   _______, \
    RGB_HUD,  RGB_HUI,  BL_ON,              \
    RGB_SAD,  RGB_SAI,  BL_OFF,    _______, \
    RGB_VAD,  RGB_VAI,  BL_STEP,            \
    _______,            RESET,     _______
  ),
};

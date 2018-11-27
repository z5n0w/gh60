#include QMK_KEYBOARD_H
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // 0: Base Layer
  LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_NO,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSLS,   \
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,    \
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLASH, KC_UP,    KC_RSFT,  KC_NO,      \
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          F(0),    KC_LEFT,  KC_DOWN,  KC_RIGHT,KC_RCTL), 

  // 1: Function Layer
  LAYOUT(
      KC_GRAVE,KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,   KC_NO,    \
      KC_NO,KC_BTN1,KC_MS_U, KC_BTN2, KC_NO,KC_NO ,KC_NO ,KC_NO,  KC_WH_U, KC_NO,   KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PREV_TRACK,  KC_MEDIA_NEXT_TRACK, KC_INSERT,    \
      KC_NO,  KC_MS_L, KC_MS_D, KC_MS_R,  KC_NO,  KC_NO,  KC_NO, KC_WH_L, KC_WH_D, KC_WH_L,  KC_VOLD, KC_VOLU,  KC_NO,  KC_ENT,    \
      KC_NO,  KC_NO,   KC_NO,   KC_NO,    BL_TOGG,   BL_DEC,   BL_INC,  MAGIC_TOGGLE_NKRO, KC_NO,    KC_PSCR, KC_SLCK, KC_BRK,  KC_PGUP,    KC_NO ,  KC_NO,   \
      MAGIC_UNNO_GUI,  MAGIC_NO_GUI,   KC_NO,                          KC_SPC,                          F(0),    KC_HOME,  KC_PGDOWN,  KC_END,  KC_MENU),

};

// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

// Loop
void matrix_scan_user(void) {
  // Empty
};

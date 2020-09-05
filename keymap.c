#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    LT(3,KC_GRAVE), KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_ESCAPE,                                      KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TT(1),                                          TT(1),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,
    LT(1,KC_CAPSLOCK),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TT(2),                                          TT(2),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    LGUI(KC_LCTRL), TT(3),          KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        KC_RGUI,        TT(3),          KC_LBRACKET,    KC_RBRACKET,    KC_BSLASH,
                                                                                                    KC_PGUP,        KC_PGDOWN,      KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_HOME,        KC_UP,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_END,         KC_DOWN,        KC_BSPACE,      KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NUMLOCK,     KC_KP_EQUAL,    KC_KP_SLASH,    KC_KP_ASTERISK, KC_BSPACE,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_ENTER,
    KC_LSHIFT,      KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EQUAL,       KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        KC_KP_0,        KC_TRANSPARENT, KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_L,           KC_QUOTE,       KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_P,           KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_SCOLON,      KC_TRANSPARENT, KC_ENTER,       KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F4),    KC_TRANSPARENT, LALT(LGUI(KC_ESCAPE)),                                KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BSPACE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_ENTER,
    KC_LSHIFT,      KC_TRANSPARENT, LCTL(LGUI(KC_H)),LGUI(KC_H),     LGUI(KC_M),     LGUI(KC_N),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, WEBUSB_PAIR,    KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_RIGHT)
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_BSPACE,
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_INSERT,      KC_HOME,        KC_PGUP,        KC_TRANSPARENT, KC_ENTER,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      KC_END,         KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RGB_MOD,        KC_TRANSPARENT, RGB_TOG,        RGB_SLD,
                                                                                                                    KC_TRANSPARENT, RGB_SPI,
                                                                                    RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, RGB_SPD,        RGB_HUD,        RGB_HUI
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {15,255,255}, {15,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {15,255,255}, {15,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255}, {15,255,255} },

    [2] = { {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {0,0,255}, {89,255,182}, {89,255,182}, {89,255,182}, {0,0,255}, {0,0,255}, {0,0,255}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {0,0,255}, {89,255,182}, {89,255,182}, {89,255,182}, {0,0,255}, {0,0,255}, {0,0,255}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182}, {89,255,182} },

    [3] = { {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255}, {173,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

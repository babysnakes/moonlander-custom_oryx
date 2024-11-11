#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

#include "features/achordion.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ORYX_SL_TRIGG,
  HSV_0_165_203,
  HSV_74_255_206,
  HSV_152_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  MAC_MISSION_CONTROL,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_AUDIO_VOL_UP,KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TT(8),                                          KC_AUDIO_VOL_DOWN,KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,           TT(9),                                                                          KC_MEDIA_PLAY_PAUSE,KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    OSM(MOD_LSFT),  MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_RSFT),  
    ORYX_SL_TRIGG,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TT(2),                                                                                                          TD(DANCE_0),    KC_TRANSPARENT, KC_TRANSPARENT, DM_PLY1,        DM_PLY2,        MO(15),         
    LT(3,KC_ENTER), LT(10,KC_TAB),  KC_LEFT_CTRL,                   KC_LEFT_ALT,    MT(MOD_LSFT, KC_BSPC),LT(4,KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TD(DANCE_1),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(11,KC_TAB),  KC_TRANSPARENT,                 KC_TRANSPARENT, KC_BSPC,        LT(5,KC_SPACE)
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_TRANSPARENT, KC_AMPR,        KC_HASH,        KC_ASTR,        KC_LPRN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RPRN,        KC_4,           KC_5,           KC_6,           KC_PERC,        KC_PIPE,        
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_CIRC,        KC_DLR,         KC_LBRC,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_RBRC,        KC_1,           KC_2,           KC_3,           KC_COLN,        KC_DQUO,        
    KC_TRANSPARENT, KC_PLUS,        KC_EQUAL,       KC_UNDS,        KC_MINUS,       KC_LCBR,                                        KC_RCBR,        KC_0,           KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    LGUI(KC_EQUAL), KC_F1,          KC_F2,          KC_F3,          TD(DANCE_2),    KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         LGUI(KC_L),     
    LGUI(KC_MINUS), LGUI(KC_GRAVE), ST_MACRO_0,     KC_TRANSPARENT, KC_APPLICATION, LGUI(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_INSERT,      
    LGUI(KC_ESCAPE),LALT(KC_LEFT),  LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_D),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(LCTL(LSFT(KC_GRAVE))),KC_PSCR,        
    KC_TRANSPARENT, TD(DANCE_3),    KC_TRANSPARENT, LCTL(KC_BSPC),  LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),                                ST_MACRO_1,     LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, 
    CW_TOGG,        KC_CAPS,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         MAC_LOCK,       
    KC_TRANSPARENT, LGUI(LSFT(KC_V)),KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     MAC_MISSION_CONTROL,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_INSERT,      
    KC_TRANSPARENT, LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(LGUI(LCTL(KC_M))),LGUI(LSFT(KC_3)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_BSPC),  LCTL(KC_LEFT),  LCTL(KC_RIGHT),                                 ST_MACRO_7,     LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LALT(KC_TAB),   KC_TRANSPARENT, LGUI(LSFT(KC_4)),
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, LSFT(KC_7),     LALT(LSFT(KC_2)),LALT(KC_3),     KC_TRANSPARENT, KC_TRANSPARENT, 
    CW_TOGG,        KC_CAPS,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    KC_Y,           KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_F3,          
    KC_B,           KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_END,         KC_HOME,        TD(DANCE_4),                                                                                                    KC_F9,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_PAGE_UP,     
    KC_SPACE,       KC_LEFT_ALT,    KC_TAB,                         TO(0),          KC_BSPC,        KC_ENTER
  ),
  [7] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_END,                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_LEFT_GUI,    KC_F5,                                                                                                          KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_PAGE_UP,     
    KC_SPACE,       KC_TAB,         KC_F9,                          TO(0),          KC_TRANSPARENT, KC_ENTER
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,                                KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK,                                                                                                    KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN3,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, LALT(LGUI(LCTL(KC_1))),LALT(LGUI(LCTL(KC_2))),LALT(LGUI(LCTL(KC_3))),LALT(LGUI(LCTL(KC_4))),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_0))),KC_TRANSPARENT, 
    LGUI(LSFT(KC_GRAVE)),KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_UP))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_LEFT))),LALT(LGUI(LCTL(KC_DOWN))),LALT(LGUI(LCTL(KC_RIGHT))),LGUI(KC_PAGE_UP),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_8,     ST_MACRO_9,     KC_TRANSPARENT, LGUI(KC_PGDN),  KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_E)),LALT(LCTL(KC_ENTER)),LALT(LCTL(KC_T)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_BSPC)),LALT(LCTL(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, TG(14),                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(13,KC_SPACE),LT(14,KC_TAB),  MT(MOD_LCTL, KC_ENTER),                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_moonlander(
    KC_MINUS,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Y,           TD(DANCE_5),    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_P),     KC_DELETE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_S),     KC_TRANSPARENT, LCTL(LSFT(KC_F)),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_Y),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [14] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_DOT,         KC_0,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [15] = LAYOUT_moonlander(
    KC_PAUSE,       KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_SCRL,        KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(1),          TO(6),          TO(7),          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(12),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, HSV_0_165_203,  HSV_74_255_206, HSV_152_255_255,KC_NO,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, DM_RSTP,        DM_REC1,        DM_REC2,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_A:
            return g_tapping_term + 42;
        case MT(MOD_LALT, KC_S):
            return g_tapping_term + 20;
        case MT(MOD_LCTL, KC_D):
            return g_tapping_term + 15;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term + 15;
        case LT(3,KC_ENTER):
            return g_tapping_term -25;
        case LT(10,KC_TAB):
            return g_tapping_term -15;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term + 15;
        case MT(MOD_RCTL, KC_K):
            return g_tapping_term + 15;
        case MT(MOD_RALT, KC_L):
            return g_tapping_term + 20;
        case MT(MOD_RGUI, KC_SCLN):
            return g_tapping_term + 35;
        case TD(DANCE_0):
            return g_tapping_term + 20;
        case LT(4,KC_SPACE):
            return g_tapping_term + 15;
        case TD(DANCE_4):
            return g_tapping_term + 100;
        case TD(DANCE_5):
            return g_tapping_term + 100;
        case LCTL(KC_P):
            return g_tapping_term + 150;
        case LCTL(KC_Z):
            return g_tapping_term + 50;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226} },

    [1] = { {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231} },

    [2] = { {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {0,245,245}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234} },

    [3] = { {0,0,0}, {159,238,135}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {159,238,135}, {159,238,135}, {0,0,0}, {0,0,0}, {159,238,135}, {159,238,135}, {159,238,135}, {0,0,0}, {0,0,0}, {31,223,255}, {31,223,255}, {159,238,135}, {0,0,0}, {0,0,0}, {31,223,255}, {31,223,255}, {159,238,135}, {0,0,0}, {0,0,0}, {50,106,208}, {50,106,208}, {50,106,208}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,238,135}, {159,238,135}, {0,0,0}, {0,0,0}, {0,0,0}, {159,238,135}, {159,238,135}, {31,139,255}, {0,0,0}, {139,157,255}, {139,157,255}, {139,157,255}, {31,139,255}, {0,0,0}, {139,157,255}, {139,157,255}, {139,157,255}, {31,139,255}, {0,0,0}, {139,157,255}, {139,157,255}, {139,157,255}, {139,157,255}, {0,0,0}, {0,0,0}, {50,106,208}, {50,106,208}, {50,106,208}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,106,208}, {0,106,208}, {0,106,208}, {0,0,0}, {0,245,245}, {31,139,255}, {215,218,204}, {31,223,255}, {152,255,255}, {0,0,0}, {31,139,255}, {215,218,204}, {31,223,255}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {0,0,0}, {77,222,255}, {0,0,0}, {31,223,255}, {215,218,204}, {0,0,0}, {31,223,255}, {0,0,0}, {31,139,255}, {31,139,255}, {31,223,255}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {25,218,204}, {25,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {22,253,152}, {22,253,152}, {0,0,0}, {31,139,255}, {159,238,135}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {74,237,134}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {159,238,135}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {159,238,135}, {159,238,135}, {152,255,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {31,139,255}, {215,218,204}, {31,223,255}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {0,0,0}, {77,222,255}, {0,0,0}, {31,139,255}, {215,218,204}, {0,0,0}, {31,223,255}, {0,0,0}, {31,139,255}, {31,139,255}, {31,223,255}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {25,218,204}, {25,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,222,255}, {77,222,255}, {0,0,0}, {31,139,255}, {0,0,0}, {22,253,152}, {0,0,0}, {0,0,0}, {31,139,255}, {159,238,135}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {74,237,134}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {0,0,0}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {159,238,135}, {159,238,135}, {152,255,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {10,237,255}, {0,0,0}, {10,237,255}, {0,0,0}, {0,0,0}, {168,220,255}, {168,220,255}, {168,220,255}, {0,0,0}, {0,0,0}, {10,237,255}, {98,246,255}, {10,237,255}, {0,0,0}, {0,0,0}, {98,246,255}, {98,246,255}, {10,237,255}, {74,237,134}, {0,0,0}, {10,237,255}, {98,246,255}, {10,237,255}, {74,237,134}, {0,0,0}, {10,237,255}, {10,237,255}, {10,237,255}, {0,0,0}, {10,237,255}, {10,237,255}, {0,0,0}, {168,220,255}, {168,220,255}, {215,218,204}, {0,245,245}, {31,223,255}, {31,223,255}, {0,0,0}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,246,255}, {0,0,0}, {0,0,0}, {0,0,0}, {98,246,255}, {98,246,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,246,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {37,249,237}, {37,249,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {215,218,204} },

    [7] = { {159,238,135}, {144,223,234}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,237,134}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {139,255,255}, {139,255,255}, {139,255,255}, {37,249,237}, {37,249,237}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {245,220,170}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {74,237,134}, {74,237,134}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {199,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {199,218,204}, {199,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {199,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {37,249,237}, {0,0,0}, {0,245,245}, {159,238,135}, {159,238,135}, {0,0,0}, {0,106,208}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {119,218,204}, {10,237,255}, {37,249,237}, {0,0,0}, {119,218,204}, {119,218,204}, {10,237,255}, {37,249,237}, {0,0,0}, {0,0,0}, {119,218,204}, {10,237,255}, {37,249,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {37,249,237}, {0,0,0}, {0,0,0}, {159,238,135}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {215,218,204}, {0,0,0}, {0,0,0}, {0,245,245}, {0,106,208}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,106,208}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,106,208}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,106,208}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,106,208}, {0,0,0}, {74,237,134}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {31,223,255}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,245,245}, {0,82,231}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {144,223,234}, {0,0,0}, {0,0,0}, {31,223,255}, {0,245,245}, {0,82,231}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {0,245,245}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255}, {27,157,255} },

    [13] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {10,237,255}, {0,0,0}, {77,222,255}, {0,0,0}, {31,139,255}, {77,222,255}, {77,222,255}, {77,222,255}, {0,0,0}, {31,139,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {77,222,255}, {0,0,0}, {0,0,0}, {31,139,255}, {77,222,255}, {0,0,0}, {0,0,0}, {0,0,0}, {27,160,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [14] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {144,223,234}, {144,223,234}, {27,160,255}, {0,0,0}, {144,223,234}, {144,223,234}, {144,223,234}, {27,160,255}, {0,0,0}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [15] = { {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {31,139,255}, {31,139,255}, {31,139,255}, {0,165,203}, {31,139,255}, {31,139,255}, {31,139,255}, {31,139,255}, {74,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {31,139,255}, {0,0,0}, {72,143,78}, {144,223,234}, {0,0,0}, {31,139,255}, {0,0,0}, {72,143,78}, {144,223,234}, {0,0,0}, {31,223,255}, {0,0,0}, {72,143,78}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 13:
      set_layer_color(13);
      break;
    case 14:
      set_layer_color(14);
      break;
    case 15:
      set_layer_color(15);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // Custom Qmk
  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_C)) SS_DELAY(100) SS_LGUI(SS_TAP(X_GRAVE)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LEFT_SHIFT) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_TAB) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE) ));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)) SS_DELAY(100) SS_LGUI(SS_TAP(X_PAGE_UP)) SS_DELAY(100) SS_LGUI(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_RIGHT)) SS_DELAY(100) SS_LGUI(SS_TAP(X_PAGE_UP)) SS_DELAY(100) SS_LGUI(SS_TAP(X_LEFT)));
    }
    break;
    case ORYX_SL_TRIGG:
      if (record->event.pressed) {
        wait_ms(10);
        trigger_smart_layer();
      }
      break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_165_203:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,165,203);
        }
        return false;
    case HSV_74_255_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(74,255,206);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_SPACE));
        tap_code16(LALT(KC_SPACE));
        tap_code16(LALT(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_SPACE));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(KC_SPACE)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LALT(KC_SPACE)); register_code16(LALT(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_SPACE)); register_code16(LALT(KC_SPACE));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_SPACE));
        tap_code16(LGUI(KC_SPACE));
        tap_code16(LGUI(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_SPACE));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_SPACE)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_SPACE)); register_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_SPACE)); register_code16(LGUI(KC_SPACE));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_DELETE)); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_DELETE)); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_U)); break;
        case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_U)); break;
        case DOUBLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};

// Custom Qmk
void matrix_scan_user(void) {
  achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Override - Remove thumbs from achordion (seems that top thumb is already excluded)
  if (tap_hold_record->event.key.row % (MATRIX_ROWS / 2) == 5) { return true; }

  return achordion_opposite_hands(tap_hold_record, other_record);
}

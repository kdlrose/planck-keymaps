#include QMK_KEYBOARD_H
#include "keymap_russian.h"

enum planck_layers { _QWERTY, _LOWER, _RAISE, _RUSKI, _UTF, _SIDER, _VIM, _NUMPAD, _ADJUST };

enum planck_keycodes { QWERTY = SAFE_RANGE };

#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define RUSKI   TG(_RUSKI)  
#define OPT_UTF MO(_UTF) 
#define SID     MO(_SIDER)
#define VIM     MO(_VIM)
#define PAD     MO(_NUMPAD)
#define ADJUST  MO(_ADJUST)
#define ALT_GUI RALT(KC_RGUI)
#define GUI_SFT RGUI(KC_RSFT)
#define CTL_ALT RCTL(KC_RALT)
#define DASHES  UP(EN_DASH,EM_DASH)
#define SUN     UM(LEO)
#define MOON    UM(CANCER)
#define MERCURY UP(GEMINI,VIRGO)
#define VENUS   UP(TAURUS,LIBRA)
#define MARS    UP(ARIES,SCORPIO)
#define JUPITER UP(SAGITTARIUS,PISCES)
#define SATURN  UP(CAPRICORN,AQUARIUS)
#define HARD    UP(SQUARE,OPPOSITE)
#define EASY    UP(SEXTILE,TRINE)
#define NODES   UP(S_NODE,N_NODE)

enum unicode_names { 
    AE, AG, HG, CU, FE, SN, PB, UNS, NPN, PLT,
    ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES,
    CJT, SEXTILE, SQUARE, TRINE, OPPOSITE, N_NODE, S_NODE,
    EN_DASH, EM_DASH,
    YO_LOW, YO_CAP
};

const uint32_t PROGMEM unicode_map[] = {
    [AE]            = 0x2609,   // ☉
    [AG]            = 0x263D,   // ☽
    [HG]            = 0x263F,   // ☿
    [CU]            = 0x2640,   // ♀
    [FE]            = 0x2642,   // ♂
    [SN]            = 0x2643,   // ♃
    [PB]            = 0x2644,   // ♄
    [UNS]           = 0x2645,   // ♅
    [NPN]           = 0x2646,   // ♆
    [PLT]           = 0x2647,   // ♇
    [ARIES]         = 0x2648,   // ♈︎
    [TAURUS]        = 0x2649,   // ♉︎
    [GEMINI]        = 0x264A,   // ♊︎
    [CANCER]        = 0x264B,   // ♋︎
    [LEO]           = 0x264C,   // ♌︎
    [VIRGO]         = 0x264D,   // ♍︎
    [LIBRA]         = 0x264E,   // ♎︎
    [SCORPIO]       = 0x264F,   // ♏︎
    [SAGITTARIUS]   = 0x2650,   // ♐︎
    [CAPRICORN]     = 0x2651,   // ♑︎
    [AQUARIUS]      = 0x2652,   // ♒︎
    [PISCES]        = 0x2653,   // ♓︎
    [CJT]           = 0x260C,   // ☌
    [SEXTILE]       = 0x26B9,   // ⚹
    [SQUARE]        = 0x25A1,   // □
    [TRINE]         = 0x25B3,   // △
    [OPPOSITE]      = 0x260D,   // ☍
    [N_NODE]        = 0x260A,   // ☊
    [S_NODE]        = 0x260B,   // ☋
    [EN_DASH]       = 0x2013,   // –
    [EM_DASH]       = 0x2014,   // —
    [YO_LOW]        = 0x0451,   // ё
    [YO_CAP]        = 0x0401    // Ё
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_grid(
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_ENT,
        PAD,    KC_LCTL,KC_LGUI,KC_LALT,LOWER,  VIM,    KC_SPC, RAISE,  ALT_GUI,GUI_SFT,CTL_ALT,RUSKI
    ),
    [_LOWER] = LAYOUT_planck_grid(
        KC_TILD,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        KC_CAPS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,
        _______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,ADJUST, SID,    KC_VOLD,KC_VOLU,_______
    ),
    [_RAISE] = LAYOUT_planck_grid(
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   _______,
        KC_DEL, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,KC_BSLS,
        _______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,_______,_______,_______,_______,
        _______,_______,_______,OPT_UTF,ADJUST, _______,_______,_______,_______,_______,_______,_______
    ),
    [_RUSKI] = LAYOUT_planck_grid(
        RU_SHTI,RU_TSE, RU_U,   RU_KA,  TD(YEYO),RU_EN, RU_GHE, RU_SHA, RU_SHCH,RU_ZE,  RU_HA,  _______,
        _______,RU_EF,  RU_YERU,RU_VE,  RU_A,   RU_PE,  RU_ER,  RU_O,   RU_EL,  RU_DE,  RU_ZHE, RU_E,
        _______,RU_YA,  RU_CHE, RU_ES,  RU_EM,  RU_I,   RU_TE,  RU_SOFT,RU_BE,  RU_YU,  RU_DOT, _______,
        _______,_______,_______,_______,LOWER,  _______,_______,RAISE,  _______,_______,_______,RUSKI
    ),
    [_UTF] = LAYOUT_planck_grid(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,       
        _______,_______,_______,_______,_______,_______,_______,DASHES, _______,_______,_______,_______,      
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______       
    ),
    [_SIDER] = LAYOUT_planck_grid(
        _______,_______,SATURN, JUPITER,SUN,    _______,_______,MOON,   VENUS,  MARS,   UM(PLT),_______,
        _______,_______,UM(PB), UM(SN), UM(AE), UM(HG), MERCURY,UM(AG), UM(CU), UM(FE), _______,_______, 
        _______,_______,UM(UNS),UM(NPN),_______,_______,_______,NODES,  EASY,   HARD,   UM(CJT),_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______       
    ),
    [_VIM] = LAYOUT_planck_grid(
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        KC_ESC, _______,_______,_______,KC_PGDN,KC_HOME,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,_______,_______,
        _______,_______,_______,_______,_______,KC_PGUP,KC_END, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
    ),
    [_NUMPAD] = LAYOUT_planck_grid(
        _______,_______,KC_UP,  _______,_______,_______,_______,_______,KC_7,   KC_8,   KC_9,   KC_SLSH,
        _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,_______,_______,KC_4,   KC_5,   KC_6,   KC_ASTR,
        _______,_______,_______,_______,_______,_______,_______,_______,KC_1,   KC_2,   KC_3,   KC_MINS,
        _______,_______,_______,_______,_______,_______,_______,_______,KC_DOT, KC_0,   KC_ENT, KC_PLUS 
    ),
    [_ADJUST] = LAYOUT_planck_grid(
        XXXXXXX,QK_BOOT,DB_TOGG,XXXXXXX,RGB_TOG,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD,XXXXXXX,
        EE_CLR, XXXXXXX,MU_NEXT,AU_ON,  AU_OFF, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,AU_NEXT,AU_PREV,MU_ON,  MU_OFF, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
    )
};

// Tap Dance declarations
enum {
    YEYO
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions [] = {
    // Tap once for Е, tap twice for Ё
    [YEYO] = ACTION_TAP_DANCE_DOUBLE(RU_IE, RU_YO)
}

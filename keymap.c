#include QMK_KEYBOARD_H

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
#define RU_A    UP(LOW_A,CAP_A)
#define RU_BE   UP(LOW_BE,CAP_BE)
#define RU_VE   UP(LOW_VE,CAP_VE)
#define RU_GHE  UP(LOW_GHE,CAP_GHE)
#define RU_DE   UP(LOW_DE,CAP_DE)
#define RU_IE   UP(LOW_IE,CAP_IE)
#define RU_ZHE  UP(LOW_ZHE,CAP_ZHE)
#define RU_ZE   UP(LOW_ZE,CAP_ZE)
#define RU_I    UP(LOW_I,CAP_I)
#define RU_SHTI UP(LOW_SHORT_I,CAP_SHORT_I)
#define RU_KA   UP(LOW_KA,CAP_KA)
#define RU_EL   UP(LOW_EL,CAP_EL)
#define RU_EM   UP(LOW_EM,CAP_EM)
#define RU_EN   UP(LOW_EN,CAP_EN)
#define RU_O    UP(LOW_O,CAP_O)
#define RU_PE   UP(LOW_PE,CAP_PE)
#define RU_ER   UP(LOW_ER,CAP_ER)
#define RU_ES   UP(LOW_ES,CAP_ES)
#define RU_TE   UP(LOW_TE,CAP_TE)
#define RU_U    UP(LOW_U,CAP_U)
#define RU_EF   UP(LOW_EF,CAP_EF)
#define RU_HA   UP(LOW_HA,CAP_HA)
#define RU_TSE  UP(LOW_TSE,CAP_TSE)
#define RU_CHE  UP(LOW_CHE,CAP_CHE)
#define RU_SHA  UP(LOW_SHA,CAP_SHA)
#define RU_SHCH UP(LOW_SHCHA,CAP_SHCHA)
#define RU_HARD UP(LOW_HARD,CAP_HARD)
#define RU_YERU UP(LOW_YERU,CAP_YERU)
#define RU_SOFT UP(LOW_SOFT,CAP_SOFT)
#define RU_E    UP(LOW_E,CAP_E)
#define RU_YU   UP(LOW_YU,CAP_YU)
#define RU_YA   UP(LOW_YA,CAP_YA)
#define RU_YO   UP(LOW_IO,CAP_IO)

enum unicode_names { 
    AE, AG, HG, CU, FE, SN, PB, UNS, NPN, PLT,
    ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES,
    CJT, SEXTILE, SQUARE, TRINE, OPPOSITE, N_NODE, S_NODE,
    EN_DASH, EM_DASH,
    CAP_A, LOW_A, CAP_BE, LOW_BE, CAP_VE, LOW_VE, CAP_GHE, LOW_GHE, CAP_DE, LOW_DE, CAP_IE, LOW_IE, CAP_ZHE, LOW_ZHE, CAP_ZE, LOW_ZE, CAP_I, LOW_I, CAP_SHORT_I, LOW_SHORT_I, CAP_KA, LOW_KA, CAP_EL, LOW_EL, CAP_EM, LOW_EM, CAP_EN, LOW_EN, CAP_O, LOW_O, CAP_PE, LOW_PE, CAP_ER, LOW_ER, CAP_ES, LOW_ES, CAP_TE, LOW_TE, CAP_U, LOW_U, CAP_EF, LOW_EF, CAP_HA, LOW_HA, CAP_TSE, LOW_TSE, CAP_CHE, LOW_CHE, CAP_SHA, LOW_SHA, CAP_SHCHA, LOW_SHCHA, CAP_HARD, LOW_HARD, CAP_YERU, LOW_YERU, CAP_SOFT, LOW_SOFT, CAP_E, LOW_E, CAP_YU, LOW_YU, CAP_YA, LOW_YA, CAP_IO, LOW_IO
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
    [CAP_A]         = 0x0410,   // А
    [CAP_BE]        = 0x0411,   // Б
    [CAP_VE]        = 0x0412,   // В
    [CAP_GHE]       = 0x0413,   // Г
    [CAP_DE]        = 0x0414,   // Д
    [CAP_IE]        = 0x0415,   // Е
    [CAP_ZHE]       = 0x0416,   // Ж
    [CAP_ZE]        = 0x0417,   // З
    [CAP_I]         = 0x0418,   // И
    [CAP_SHORT_I]   = 0x0419,   // Й
    [CAP_KA]        = 0x041A,   // К
    [CAP_EL]        = 0x041B,   // Л
    [CAP_EM]        = 0x041C,   // М
    [CAP_EN]        = 0x041D,   // Н
    [CAP_O]         = 0x041E,   // О
    [CAP_PE]        = 0x041F,   // П
    [CAP_ER]        = 0x0420,   // Р
    [CAP_ES]        = 0x0421,   // С
    [CAP_TE]        = 0x0422,   // Т
    [CAP_U]         = 0x0423,   // У
    [CAP_EF]        = 0x0424,   // Ф
    [CAP_HA]        = 0x0425,   // Х
    [CAP_TSE]       = 0x0426,   // Ц
    [CAP_CHE]       = 0x0427,   // Ч
    [CAP_SHA]       = 0x0428,   // Ш
    [CAP_SHCHA]     = 0x0429,   // Щ
    [CAP_HARD]      = 0x042A,   // Ъ
    [CAP_YERU]      = 0x042B,   // Ы
    [CAP_SOFT]      = 0x042C,   // Ь
    [CAP_E]         = 0x042D,   // Э
    [CAP_YU]        = 0x042E,   // Ю
    [CAP_YA]        = 0x042F,   // Я
    [CAP_IO]        = 0x0401,   // Ё
    [LOW_A]         = 0x0430,   // а
    [LOW_BE]        = 0x0431,   // б
    [LOW_VE]        = 0x0432,   // в
    [LOW_GHE]       = 0x0433,   // г
    [LOW_DE]        = 0x0434,   // д
    [LOW_IE]        = 0x0435,   // е
    [LOW_ZHE]       = 0x0436,   // ж
    [LOW_ZE]        = 0x0437,   // з
    [LOW_I]         = 0x0438,   // и
    [LOW_SHORT_I]   = 0x0439,   // й
    [LOW_KA]        = 0x043A,   // к
    [LOW_EL]        = 0x043B,   // л
    [LOW_EM]        = 0x043C,   // м
    [LOW_EN]        = 0x043D,   // н
    [LOW_O]         = 0x043E,   // о
    [LOW_PE]        = 0x043F,   // п
    [LOW_ER]        = 0x0440,   // р
    [LOW_ES]        = 0x0441,   // с
    [LOW_TE]        = 0x0442,   // т
    [LOW_U]         = 0x0443,   // у
    [LOW_EF]        = 0x0444,   // ф
    [LOW_HA]        = 0x0445,   // х
    [LOW_TSE]       = 0x0446,   // ц
    [LOW_CHE]       = 0x0447,   // ч
    [LOW_SHA]       = 0x0448,   // ш
    [LOW_SHCHA]     = 0x0449,   // щ
    [LOW_HARD]      = 0x044A,   // ъ
    [LOW_YERU]      = 0x044B,   // ы
    [LOW_SOFT]      = 0x044C,   // ь
    [LOW_E]         = 0x044D,   // э
    [LOW_YU]        = 0x044E,   // ю
    [LOW_YA]        = 0x044F,   // я
    [LOW_IO]        = 0x0451    // ё
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_grid(
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_ENT,
        PAD,    KC_LCTL,KC_LGUI,KC_LALT,LOWER,  VIM,    KC_SPC, RAISE,  ALT_GUI,GUI_SFT,CTL_ALT,KC_CAPS
    ),
    [_LOWER] = LAYOUT_planck_grid(
        KC_TILD,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        RUSKI,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,
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
        RU_SHTI,RU_TSE, RU_U,   RU_KA,  RU_IE,  RU_EN, RU_GHE, RU_SHA,  RU_SHCH,RU_ZE,  RU_HA,  _______,
        _______,RU_EF,  RU_YERU,RU_VE,  RU_A,   RU_PE,  RU_ER,  RU_O,   RU_EL,  RU_DE,  RU_ZHE, RU_E,
        _______,RU_YA,  RU_CHE, RU_ES,  RU_EM,  RU_I,   RU_TE,  RU_SOFT,RU_BE,  RU_YU,  KC_DOT, _______,
        _______,_______,_______,_______,LOWER,  _______,_______,RAISE,  _______,_______,_______,_______
    ),
    [_UTF] = LAYOUT_planck_grid(
        _______,_______,_______,_______,RU_YO,  _______,_______,_______,_______,_______,_______,_______,       
        _______,_______,_______,_______,_______,_______,_______,DASHES, _______,_______,_______,_______,      
        _______,_______,_______,_______,_______,_______,_______,RU_HARD,_______,_______,_______,_______,      
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
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
#define RU_A    UP(A_LOWER,A_UPPER)
#define RU_BE   UP(BE_LOWER,BE_UPPER)
#define RU_VE   UP(VE_LOWER,VE_UPPER)
#define RU_GHE  UP(GHE_LOWER,GHE_UPPER)
#define RU_DE   UP(DE_LOWER,DE_UPPER)
#define RU_IE   UP(IE_LOWER,IE_UPPER)
#define RU_ZHE  UP(ZHE_LOWER,ZHE_UPPER)
#define RU_ZE   UP(ZE_LOWER,ZE_UPPER)
#define RU_I    UP(I_LOWER,I_UPPER)
#define RU_SHTI UP(SHORT_I_LOWER,SHORT_I_UPPER)
#define RU_KA   UP(KA_LOWER,KA_UPPER)
#define RU_EL   UP(EL_LOWER,EL_UPPER)
#define RU_EM   UP(EM_LOWER,EM_UPPER)
#define RU_EN   UP(EN_LOWER,EN_UPPER)
#define RU_O    UP(O_LOWER,O_UPPER)
#define RU_PE   UP(PE_LOWER,PE_UPPER)
#define RU_ER   UP(ER_LOWER,ER_UPPER)
#define RU_ES   UP(ES_LOWER,ES_UPPER)
#define RU_TE   UP(TE_LOWER,TE_UPPER)
#define RU_U    UP(U_LOWER,U_UPPER)
#define RU_EF   UP(EF_LOWER,EF_UPPER)
#define RU_HA   UP(HA_LOWER,HA_UPPER)
#define RU_TSE  UP(TSE_LOWER,TSE_UPPER)
#define RU_CHE  UP(CHE_LOWER,CHE_UPPER)
#define RU_SHA  UP(SHA_LOWER,SHA_UPPER)
#define RU_SHCH UP(SHCHA_LOWER,SHCHA_UPPER)
#define RU_HARD UP(HARD_LOWER,HARD_UPPER)
#define RU_YERU UP(YERU_LOWER,YERU_UPPER)
#define RU_SOFT UP(SOFT_LOWER,SOFT_UPPER)
#define RU_E    UP(E_LOWER,E_UPPER)
#define RU_YU   UP(YU_LOWER,YU_UPPER)
#define RU_YA   UP(YA_LOWER,YA_UPPER)
#define RU_YO   UP(IO_LOWER,IO_UPPER)

enum unicode_names { 
    AE, AG, HG, CU, FE, SN, PB, UNS, NPN, PLT,
    ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES,
    CJT, SEXTILE, SQUARE, TRINE, OPPOSITE, N_NODE, S_NODE,
    EN_DASH, EM_DASH,
    A_UPPER, A_LOWER, BE_UPPER, BE_LOWER, VE_UPPER, VE_LOWER, GHE_UPPER, GHE_LOWER, DE_UPPER, DE_LOWER, IE_UPPER, IE_LOWER, ZHE_UPPER, ZHE_LOWER, ZE_UPPER, ZE_LOWER, I_UPPER, I_LOWER, SHORT_I_UPPER, SHORT_I_LOWER, KA_UPPER, KA_LOWER, EL_UPPER, EL_LOWER, EM_UPPER, EM_LOWER, EN_UPPER, EN_LOWER, O_UPPER, O_LOWER, PE_UPPER, PE_LOWER, ER_UPPER, ER_LOWER, ES_UPPER, ES_LOWER, TE_UPPER, TE_LOWER, U_UPPER, U_LOWER, EF_UPPER, EF_LOWER, HA_UPPER, HA_LOWER, TSE_UPPER, TSE_LOWER, CHE_UPPER, CHE_LOWER, SHA_UPPER, SHA_LOWER, SHCHA_UPPER, SHCHA_LOWER, HARD_UPPER, HARD_LOWER, YERU_UPPER, YERU_LOWER, SOFT_UPPER, SOFT_LOWER, E_UPPER, E_LOWER, YU_UPPER, YU_LOWER, YA_UPPER, YA_LOWER, IO_UPPER, IO_LOWER
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
    [A_UPPER]       = 0x0410,   // А
    [BE_UPPER]      = 0x0411,   // Б
    [VE_UPPER]      = 0x0412,   // В
    [GHE_UPPER]     = 0x0413,   // Г
    [DE_UPPER]      = 0x0414,   // Д
    [IE_UPPER]      = 0x0415,   // Е
    [ZHE_UPPER]     = 0x0416,   // Ж
    [ZE_UPPER]      = 0x0417,   // З
    [I_UPPER]       = 0x0418,   // И
    [SHORT_I_UPPER] = 0x0419,   // Й
    [KA_UPPER]      = 0x041A,   // К
    [EL_UPPER]      = 0x041B,   // Л
    [EM_UPPER]      = 0x041C,   // М
    [EN_UPPER]      = 0x041D,   // Н
    [O_UPPER]       = 0x041E,   // О
    [PE_UPPER]      = 0x041F,   // П
    [ER_UPPER]      = 0x0420,   // Р
    [ES_UPPER]      = 0x0421,   // С
    [TE_UPPER]      = 0x0422,   // Т
    [U_UPPER]       = 0x0423,   // У
    [EF_UPPER]      = 0x0424,   // Ф
    [HA_UPPER]      = 0x0425,   // Х
    [TSE_UPPER]     = 0x0426,   // Ц
    [CHE_UPPER]     = 0x0427,   // Ч
    [SHA_UPPER]     = 0x0428,   // Ш
    [SHCHA_UPPER]   = 0x0429,   // Щ
    [HARD_UPPER]    = 0x042A,   // Ъ
    [YERU_UPPER]    = 0x042B,   // Ы
    [SOFT_UPPER]    = 0x042C,   // Ь
    [E_UPPER]       = 0x042D,   // Э
    [YU_UPPER]      = 0x042E,   // Ю
    [YA_UPPER]      = 0x042F,   // Я
    [IO_UPPER]      = 0x0401,   // Ё
    [A_LOWER]       = 0x0430,   // а
    [BE_LOWER]      = 0x0431,   // б
    [VE_LOWER]      = 0x0432,   // в
    [GHE_LOWER]     = 0x0433,   // г
    [DE_LOWER]      = 0x0434,   // д
    [IE_LOWER]      = 0x0435,   // е
    [ZHE_LOWER]     = 0x0436,   // ж
    [ZE_LOWER]      = 0x0437,   // з
    [I_LOWER]       = 0x0438,   // и
    [SHORT_I_LOWER] = 0x0439,   // й
    [KA_LOWER]      = 0x043A,   // к
    [EL_LOWER]      = 0x043B,   // л
    [EM_LOWER]      = 0x043C,   // м
    [EN_LOWER]      = 0x043D,   // н
    [O_LOWER]       = 0x043E,   // о
    [PE_LOWER]      = 0x043F,   // п
    [ER_LOWER]      = 0x0440,   // р
    [ES_LOWER]      = 0x0441,   // с
    [TE_LOWER]      = 0x0442,   // т
    [U_LOWER]       = 0x0443,   // у
    [EF_LOWER]      = 0x0444,   // ф
    [HA_LOWER]      = 0x0445,   // х
    [TSE_LOWER]     = 0x0446,   // ц
    [CHE_LOWER]     = 0x0447,   // ч
    [SHA_LOWER]     = 0x0448,   // ш
    [SHCHA_LOWER]   = 0x0449,   // щ
    [HARD_LOWER]    = 0x044A,   // ъ
    [YERU_LOWER]    = 0x044B,   // ы
    [SOFT_LOWER]    = 0x044C,   // ь
    [E_LOWER]       = 0x044D,   // э
    [YU_LOWER]      = 0x044E,   // ю
    [YA_LOWER]      = 0x044F,   // я
    [IO_LOWER]      = 0x0451    // ё
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_grid(
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_ENT,
        PAD,    KC_LCTL,KC_LGUI,KC_LALT,LOWER,  VIM,    KC_SPC, RAISE,  ALT_GUI,GUI_SFT,CTL_ALT,KC_PSCR
    ),
    [_LOWER] = LAYOUT_planck_grid(
        KC_TILD,KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        RUSKI,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,
        _______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,ADJUST, SID,    KC_VOLD,KC_VOLU,KC_MUTE
    ),
    [_RAISE] = LAYOUT_planck_grid(
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL,
        KC_CAPS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,KC_BSLS,
        _______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,_______,_______,_______,_______,
        KC_MPRV,KC_MPLY,KC_MNXT,OPT_UTF,ADJUST, _______,_______,_______,_______,_______,_______,_______
    ),
    [_RUSKI] = LAYOUT_planck_grid(
        RU_SHTI,RU_TSE, RU_U,   RU_KA,  RU_IE,  RU_EN,  RU_GHE, RU_SHA, RU_SHCH,RU_ZE,  RU_HA,  _______,
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
        _______,_______,KC_UP,  _______,_______,_______,_______,_______,KC_P7,  KC_P8,  KC_P9,  KC_PSLS,
        _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,_______,_______,KC_P4,  KC_P5,  KC_P6,  KC_PAST,
        _______,_______,_______,_______,_______,_______,_______,_______,KC_P1,  KC_P2,  KC_P3,  KC_PMNS,
        _______,_______,_______,_______,_______,_______,_______,_______,KC_PDOT,KC_P0,  KC_PENT,KC_PPLS 
    ),
    [_ADJUST] = LAYOUT_planck_grid(
        XXXXXXX,QK_BOOT,DB_TOGG,XXXXXXX,RGB_TOG,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD,XXXXXXX,
        EE_CLR, XXXXXXX,MU_NEXT,AU_ON,  AU_OFF, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,AU_NEXT,AU_PREV,MU_ON,  MU_OFF, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
    )
};

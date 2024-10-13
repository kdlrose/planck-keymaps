#include QMK_KEYBOARD_H

enum unicode_names {
    A_CAP, A_LOW, BE_CAP, BE_LOW, VE_CAP, VE_LOW, GHE_CAP, GHE_LOW, DE_CAP, DE_LOW, IE_CAP, IE_LOW, ZHE_CAP, ZHE_LOW, ZE_CAP, ZE_LOW, I_CAP, I_LOW, SHORT_I_CAP, SHORT_I_LOW, KA_CAP, KA_LOW, EL_CAP, EL_LOW, EM_CAP, EM_LOW, EN_CAP, EN_LOW, O_CAP, O_LOW, PE_CAP, PE_LOW, ER_CAP, ER_LOW, ES_CAP, ES_LOW, TE_CAP, TE_LOW, U_CAP, U_LOW, EF_CAP, EF_LOW, HA_CAP, HA_LOW, TSE_CAP, TSE_LOW, CHE_CAP, CHE_LOW, SHA_CAP, SHA_LOW, SHCHA_CAP, SHCHA_LOW, HARD_CAP, HARD_LOW, YERU_CAP, YERU_LOW, SOFT_CAP, SOFT_LOW, E_CAP, E_LOW, YU_CAP, YU_LOW, YA_CAP, YA_LOW, IO_CAP, IO_LOW
};

const uint32_t PROGMEM unicode_map[] = {
    A_CAP       = 0x0410,
    BE_CAP      = 0x0411,
    VE_CAP      = 0x0412,
    GHE_CAP     = 0x0413,
    DE_CAP      = 0x0414,
    IE_CAP      = 0x0415,
    ZHE_CAP     = 0x0416,
    ZE_CAP      = 0x0417,
    I_CAP       = 0x0418,
    SHORT_I_CAP = 0x0419,
    KA_CAP      = 0x041A,
    EL_CAP      = 0x041B,
    EM_CAP      = 0x041C,
    EN_CAP      = 0x041D,
    O_CAP       = 0x041E,
    PE_CAP      = 0x041F,
    ER_CAP      = 0x0420,
    ES_CAP      = 0x0421,
    TE_CAP      = 0x0422,
    U_CAP       = 0x0423,
    EF_CAP      = 0x0424,
    HA_CAP      = 0x0425,
    TSE_CAP     = 0x0426,
    CHE_CAP     = 0x0427,
    SHA_CAP     = 0x0428,
    SHCHA_CAP   = 0x0429,
    HARD_CAP    = 0x042A,
    YERU_CAP    = 0x042B,
    SOFT_CAP    = 0x042C,
    E_CAP       = 0x042D,
    YU_CAP      = 0x042E,
    YA_CAP      = 0x042F,
    IO_CAP      = 0x0401,
    A_LOW       = 0x0430,
    BE_LOW      = 0x0431,
    VE_LOW      = 0x0432,
    GHE_LOW     = 0x0433,
    DE_LOW      = 0x0434,
    IE_LOW      = 0x0435,
    ZHE_LOW     = 0x0436,
    ZE_LOW      = 0x0437,
    I_LOW       = 0x0438,
    SHORT_I_LOW = 0x0439,
    KA_LOW      = 0x043A,
    EL_LOW      = 0x043B,
    EM_LOW      = 0x043C,
    EN_LOW      = 0x043D,
    O_LOW       = 0x043E,
    PE_LOW      = 0x043F,
    ER_LOW      = 0x0440,
    ES_LOW      = 0x0441,
    TE_LOW      = 0x0442,
    U_LOW       = 0x0443,
    EF_LOW      = 0x0444,
    HA_LOW      = 0x0445,
    TSE_LOW     = 0x0446,
    CHE_LOW     = 0x0447,
    SHA_LOW     = 0x0448,
    SHCHA_LOW   = 0x0449,
    HARD_LOW    = 0x044A,
    YERU_LOW    = 0x044B,
    SOFT_LOW    = 0x044C,
    E_LOW       = 0x044D,
    YU_LOW      = 0x044E,
    YA_LOW      = 0x044F,
    IO_LOW      = 0x0451
};

#define RU_A UP(A_LOW,A_CAP)
#define RU_BE UP(BE_LOW,BE_CAP)
#define RU_VE UP(VE_LOW,VE_CAP)
#define RU_GHE UP(GHE_LOW,GHE_CAP)
#define RU_DE UP(DE_LOW,DE_CAP)
#define RU_IE UP(IE_LOW,IE_CAP)


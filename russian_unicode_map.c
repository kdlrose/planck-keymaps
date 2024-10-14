#include QMK_KEYBOARD_H

enum unicode_names {
    A_CAP, A_LOW, BE_CAP, BE_LOW, VE_CAP, VE_LOW, GHE_CAP, GHE_LOW, DE_CAP, DE_LOW, IE_CAP, IE_LOW, ZHE_CAP, ZHE_LOW, ZE_CAP, ZE_LOW, I_CAP, I_LOW, SHORT_I_CAP, SHORT_I_LOW, KA_CAP, KA_LOW, EL_CAP, EL_LOW, EM_CAP, EM_LOW, EN_CAP, EN_LOW, O_CAP, O_LOW, PE_CAP, PE_LOW, ER_CAP, ER_LOW, ES_CAP, ES_LOW, TE_CAP, TE_LOW, U_CAP, U_LOW, EF_CAP, EF_LOW, HA_CAP, HA_LOW, TSE_CAP, TSE_LOW, CHE_CAP, CHE_LOW, SHA_CAP, SHA_LOW, SHCHA_CAP, SHCHA_LOW, HARD_CAP, HARD_LOW, YERU_CAP, YERU_LOW, SOFT_CAP, SOFT_LOW, E_CAP, E_LOW, YU_CAP, YU_LOW, YA_CAP, YA_LOW, IO_CAP, IO_LOW
};

const uint32_t PROGMEM unicode_map[] = {
    [A_CAP]         = 0x0410,   // А
    [BE_CAP]        = 0x0411,   // Б
    [VE_CAP]        = 0x0412,   // В
    [GHE_CAP]       = 0x0413,   // Г
    [DE_CAP]        = 0x0414,   // Д
    [IE_CAP]        = 0x0415,   // Е
    [ZHE_CAP]       = 0x0416,   // Ж
    [ZE_CAP]        = 0x0417,   // З
    [I_CAP]         = 0x0418,   // И
    [SHORT_I_CAP]   = 0x0419,   // Й
    [KA_CAP]        = 0x041A,   // К
    [EL_CAP]        = 0x041B,   // Л
    [EM_CAP]        = 0x041C,   // М
    [EN_CAP]        = 0x041D,   // Н
    [O_CAP]         = 0x041E,   // О
    [PE_CAP]        = 0x041F,   // П
    [ER_CAP]        = 0x0420,   // Р
    [ES_CAP]        = 0x0421,   // С
    [TE_CAP]        = 0x0422,   // Т
    [U_CAP]         = 0x0423,   // У
    [EF_CAP]        = 0x0424,   // Ф
    [HA_CAP]        = 0x0425,   // Х
    [TSE_CAP]       = 0x0426,   // Ц
    [CHE_CAP]       = 0x0427,   // Ч
    [SHA_CAP]       = 0x0428,   // Ш
    [SHCHA_CAP]     = 0x0429,   // Щ
    [HARD_CAP]      = 0x042A,   // Ъ
    [YERU_CAP]      = 0x042B,   // Ы
    [SOFT_CAP]      = 0x042C,   // Ь
    [E_CAP]         = 0x042D,   // Э
    [YU_CAP]        = 0x042E,   // Ю
    [YA_CAP]        = 0x042F,   // Я
    [IO_CAP]        = 0x0401,   // Ё
    [A_LOW]         = 0x0430,   // а
    [BE_LOW]        = 0x0431,   // б
    [VE_LOW]        = 0x0432,   // в
    [GHE_LOW]       = 0x0433,   // г
    [DE_LOW]        = 0x0434,   // д
    [IE_LOW]        = 0x0435,   // е
    [ZHE_LOW]       = 0x0436,   // ж
    [ZE_LOW]        = 0x0437,   // з
    [I_LOW]         = 0x0438,   // и
    [SHORT_I_LOW]   = 0x0439,   // й
    [KA_LOW]        = 0x043A,   // к
    [EL_LOW]        = 0x043B,   // л
    [EM_LOW]        = 0x043C,   // м
    [EN_LOW]        = 0x043D,   // н
    [O_LOW]         = 0x043E,   // о
    [PE_LOW]        = 0x043F,   // п
    [ER_LOW]        = 0x0440,   // р
    [ES_LOW]        = 0x0441,   // с
    [TE_LOW]        = 0x0442,   // т
    [U_LOW]         = 0x0443,   // у
    [EF_LOW]        = 0x0444,   // ф
    [HA_LOW]        = 0x0445,   // х
    [TSE_LOW]       = 0x0446,   // ц
    [CHE_LOW]       = 0x0447,   // ч
    [SHA_LOW]       = 0x0448,   // ш
    [SHCHA_LOW]     = 0x0449,   // щ
    [HARD_LOW]      = 0x044A,   // ъ
    [YERU_LOW]      = 0x044B,   // ы
    [SOFT_LOW]      = 0x044C,   // ь
    [E_LOW]         = 0x044D,   // э
    [YU_LOW]        = 0x044E,   // ю
    [YA_LOW]        = 0x044F,   // я
    [IO_LOW]        = 0x0451    // ё
};

#define RU_A UP(A_LOW,A_CAP)
#define RU_BE UP(BE_LOW,BE_CAP)
#define RU_VE UP(VE_LOW,VE_CAP)
#define RU_GHE UP(GHE_LOW,GHE_CAP)
#define RU_DE UP(DE_LOW,DE_CAP)
#define RU_IE UP(IE_LOW,IE_CAP)
#define RU_ZHE UP(ZHE_LOW,ZHE_CAP)
#define RU_ZE UP(ZE_LOW,ZE_CAP)
#define RU_I UP(I_LOW,I_CAP)
#define RU_SHTI UP(SHTI_LOW,SHTI_CAP)
#define RU_KA UP(KA_LOW,KA_CAP)
#define RU_EL UP(EL_LOW,EL_CAP)
#define RU_EM UP(EM_LOW,EM_CAP)
#define RU_EN UP(EN_LOW,EN_CAP)
#define RU_O UP(O_LOW,O_CAP)
#define RU_PE UP(PE_LOW,PE_CAP)
#define RU_ER UP(ER_LOW,ER_CAP)
#define RU_ES UP(ES_LOW,ES_CAP)
#define RU_TE UP(TE_LOW,TE_CAP)
#define RU_U UP(U_LOW,U_CAP)
#define RU_EF UP(EF_LOW,EF_CAP)
#define RU_HA UP(HA_LOW,HA_CAP)
#define RU_TSE UP(TSE_LOW,TSE_CAP)
#define RU_CHE UP(CHE_LOW,CHE_CAP)
#define RU_SHA UP(SHA_LOW,SHA_CAP)
#define RU_SHCH UP(SHCHA_LOW,SHCHA_CAP)
#define RU_HARD UP(HARD_LOW,HARD_CAP)
#define RU_YERU UP(YERU_LOW,YERU_CAP)
#define RU_SOFT UP(SOFT_LOW,SOFT_CAP)
#define RU_E UP(E_LOW,E_CAP)
#define RU_YU (YU_LOW,YU_CAP)
#define RU_YA (YA_LOW,YA_CAP)
#define RU_YO (IO_LOW,IO_CAP)

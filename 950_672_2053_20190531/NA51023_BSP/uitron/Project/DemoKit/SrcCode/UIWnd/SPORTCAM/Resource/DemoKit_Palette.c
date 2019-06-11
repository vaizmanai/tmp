/*//////////////////////////////////////////////////////////////////////////////

 ---------- Document Info ---------------

        Author : Anonymous
       Created : 15:18:20, Mar 22 2013
 Last modified : 15:18:20, Mar 22 2013
   Making tool : UI Designer Studio
   File format : C language source file

 ----------- Object Info ----------------

         Class : PALETTE TABLE
          Name : DemoKit_Palette

*///////////////////////////////////////////////////////////////////////////////

//#define COLOR 0x00CrCbYY //RR GG BB
#define COLOR_DEMOKIT_PALETTE_00 0x00969235 //55 1F 57
#define COLOR_DEMOKIT_PALETTE_01 0x00808000 //00 00 00
#define COLOR_DEMOKIT_PALETTE_02 0x008080FF //FF FF FF
#define COLOR_DEMOKIT_PALETTE_03 0x00FF554E //FF 00 00
#define COLOR_DEMOKIT_PALETTE_04 0x00142A93 //00 FF 00
#define COLOR_DEMOKIT_PALETTE_05 0x0000AAB0 //00 FF FF
#define COLOR_DEMOKIT_PALETTE_06 0x009400E2 //FF FF 00
#define COLOR_DEMOKIT_PALETTE_07 0x008A4071 //80 80 00
#define COLOR_DEMOKIT_PALETTE_08 0x00808080 //80 80 80
#define COLOR_DEMOKIT_PALETTE_09 0x008080C0 //C0 C0 C0
#define COLOR_DEMOKIT_PALETTE_0A 0x00C06A27 //80 00 00
#define COLOR_DEMOKIT_PALETTE_0B 0x00B5AA35 //80 00 80
#define COLOR_DEMOKIT_PALETTE_0C 0x00EAD46A //FF 00 FF
#define COLOR_DEMOKIT_PALETTE_0D 0x004A5549 //00 80 00
#define COLOR_DEMOKIT_PALETTE_0E 0x006BFF1C //00 00 FF
#define COLOR_DEMOKIT_PALETTE_0F 0x0075C00E //00 00 80
#define COLOR_DEMOKIT_PALETTE_10 0x00409558 //00 80 80
#define COLOR_DEMOKIT_PALETTE_11 0x0098406E //91 73 00
#define COLOR_DEMOKIT_PALETTE_12 COLOR_DEMOKIT_PALETTE_FC//0x007F8058 //57 59 59
#define COLOR_DEMOKIT_PALETTE_13 0x00377F96 //33 CC 99
#define COLOR_DEMOKIT_PALETTE_14 0x00984593 //B7 96 2C
#define COLOR_DEMOKIT_PALETTE_15 0x009945A3 //C8 A6 3C
#define COLOR_DEMOKIT_PALETTE_16 0x008080AC //AC AC AC
#define COLOR_DEMOKIT_PALETTE_17 0x009A44B8 //DE BA 50
#define COLOR_DEMOKIT_PALETTE_18 0x009B43C1 //E9 C3 58
#define COLOR_DEMOKIT_PALETTE_19 0x009B42CC //F4 CE 61
#define COLOR_DEMOKIT_PALETTE_1A 0x009644E0 //FF E5 77
#define COLOR_DEMOKIT_PALETTE_1B 0x008B47EE //FF FA 8B
#define COLOR_DEMOKIT_PALETTE_1C 0x00C5A08B //EC 4E C5
#define COLOR_DEMOKIT_PALETTE_1D 0x00ADA4A1 //E2 74 E2
#define COLOR_DEMOKIT_PALETTE_1E 0x009390C3 //E0 B0 E2
#define COLOR_DEMOKIT_PALETTE_1F 0x00A76DB5 //ED 9F 95
#define COLOR_DEMOKIT_PALETTE_20 0x00418C55 //00 80 6E
#define COLOR_DEMOKIT_PALETTE_21 0x00408B56 //00 82 6F
#define COLOR_DEMOKIT_PALETTE_22 0x003F8C58 //00 84 71
#define COLOR_DEMOKIT_PALETTE_23 0x003E8C59 //00 86 72
#define COLOR_DEMOKIT_PALETTE_24 0x003D8C5B //00 88 74
#define COLOR_DEMOKIT_PALETTE_25 0x003C8C5C //00 8A 75
#define COLOR_DEMOKIT_PALETTE_26 0x003B8C5D //00 8C 77
#define COLOR_DEMOKIT_PALETTE_27 0x003A8C5F //00 8E 78
#define COLOR_DEMOKIT_PALETTE_28 0x00398D60 //00 90 7A
#define COLOR_DEMOKIT_PALETTE_29 0x00388C61 //00 92 7B
#define COLOR_DEMOKIT_PALETTE_2A 0x00378C63 //00 94 7D
#define COLOR_DEMOKIT_PALETTE_2B 0x00368D64 //00 96 7E
#define COLOR_DEMOKIT_PALETTE_2C 0x00358D66 //00 98 80
#define COLOR_DEMOKIT_PALETTE_2D 0x00358C67 //00 9A 81
#define COLOR_DEMOKIT_PALETTE_2E 0x00348D68 //00 9C 83
#define COLOR_DEMOKIT_PALETTE_2F 0x00338D6A //00 9E 84
#define COLOR_DEMOKIT_PALETTE_30 0x00328D6B //00 A0 86
#define COLOR_DEMOKIT_PALETTE_31 0x00318D6C //00 A2 87
#define COLOR_DEMOKIT_PALETTE_32 0x00308D6D //00 A4 89
#define COLOR_DEMOKIT_PALETTE_33 0x002F8D6E //00 A6 8A
#define COLOR_DEMOKIT_PALETTE_34 0x002E8E70 //00 A8 8C
#define COLOR_DEMOKIT_PALETTE_35 0x002D8D71 //00 AA 8D
#define COLOR_DEMOKIT_PALETTE_36 0x002C8D72 //00 AC 8F
#define COLOR_DEMOKIT_PALETTE_37 0x002B8E74 //00 AE 90
#define COLOR_DEMOKIT_PALETTE_38 0x002A8E75 //00 B0 92
#define COLOR_DEMOKIT_PALETTE_39 0x00298D77 //00 B2 93
#define COLOR_DEMOKIT_PALETTE_3A 0x00288E78 //00 B4 95
#define COLOR_DEMOKIT_PALETTE_3B 0x00278E79 //00 B6 96
#define COLOR_DEMOKIT_PALETTE_3C 0x00268E7B //00 B8 98
#define COLOR_DEMOKIT_PALETTE_3D 0x00258E7C //00 BA 99
#define COLOR_DEMOKIT_PALETTE_3E 0x00248E7D //00 BC 9B
#define COLOR_DEMOKIT_PALETTE_3F 0x00238E7F //00 BE 9C
#define COLOR_DEMOKIT_PALETTE_40 0x00228F80 //00 C0 9E
#define COLOR_DEMOKIT_PALETTE_41 0x00218E82 //00 C2 9F
#define COLOR_DEMOKIT_PALETTE_42 0x00208E83 //00 C4 A1
#define COLOR_DEMOKIT_PALETTE_43 0x001F8F83 //00 C6 A2
#define COLOR_DEMOKIT_PALETTE_44 0x001E8F85 //00 C8 A4
#define COLOR_DEMOKIT_PALETTE_45 0x001E8E86 //00 CA A5
#define COLOR_DEMOKIT_PALETTE_46 0x001D8F88 //00 CC A7
#define COLOR_DEMOKIT_PALETTE_47 0x001C8F89 //00 CE A8
#define COLOR_DEMOKIT_PALETTE_48 0x001B8F8A //00 D0 AA
#define COLOR_DEMOKIT_PALETTE_49 0x001A8F8C //00 D2 AB
#define COLOR_DEMOKIT_PALETTE_4A 0x00198F8D //00 D4 AD
#define COLOR_DEMOKIT_PALETTE_4B 0x00188F8E //00 D6 AE
#define COLOR_DEMOKIT_PALETTE_4C 0x00179090 //00 D8 B0
#define COLOR_DEMOKIT_PALETTE_4D 0x00168F91 //00 DA B1
#define COLOR_DEMOKIT_PALETTE_4E 0x00158F93 //00 DC B3
#define COLOR_DEMOKIT_PALETTE_4F 0x00149094 //00 DE B4
#define COLOR_DEMOKIT_PALETTE_50 0x00139095 //00 E0 B6
#define COLOR_DEMOKIT_PALETTE_51 0x00128F97 //00 E2 B7
#define COLOR_DEMOKIT_PALETTE_52 0x00119098 //00 E4 B9
#define COLOR_DEMOKIT_PALETTE_53 0x0010909A //00 E6 BA
#define COLOR_DEMOKIT_PALETTE_54 0x000F909B //00 E8 BC
#define COLOR_DEMOKIT_PALETTE_55 0x000E909B //00 EA BD
#define COLOR_DEMOKIT_PALETTE_56 0x000D909D //00 EC BF
#define COLOR_DEMOKIT_PALETTE_57 0x000C909E //00 EE C0
#define COLOR_DEMOKIT_PALETTE_58 0x000B919F //00 F0 C2
#define COLOR_DEMOKIT_PALETTE_59 0x000A90A1 //00 F2 C3
#define COLOR_DEMOKIT_PALETTE_5A 0x000990A2 //00 F4 C5
#define COLOR_DEMOKIT_PALETTE_5B 0x000891A4 //00 F6 C6
#define COLOR_DEMOKIT_PALETTE_5C 0x000791A5 //00 F8 C8
#define COLOR_DEMOKIT_PALETTE_5D 0x000790A6 //00 FA C9
#define COLOR_DEMOKIT_PALETTE_5E 0x000691A8 //00 FC CB
#define COLOR_DEMOKIT_PALETTE_5F 0x000591A9 //00 FE CC
#define COLOR_DEMOKIT_PALETTE_60 0x00EE4766 //FF 29 00
#define COLOR_DEMOKIT_PALETTE_61 0x00ED4766 //FF 2A 00
#define COLOR_DEMOKIT_PALETTE_62 0x00EC4668 //FF 2C 00
#define COLOR_DEMOKIT_PALETTE_63 0x00EB4568 //FF 2E 00
#define COLOR_DEMOKIT_PALETTE_64 0x00EA4569 //FF 30 00
#define COLOR_DEMOKIT_PALETTE_65 0x00EA436B //FF 33 00
#define COLOR_DEMOKIT_PALETTE_66 0x00E9436C //FF 34 00
#define COLOR_DEMOKIT_PALETTE_67 0x00E9436C //FF 35 00
#define COLOR_DEMOKIT_PALETTE_68 0x00E7426E //FF 38 00
#define COLOR_DEMOKIT_PALETTE_69 0x00E6416F //FF 3A 00
#define COLOR_DEMOKIT_PALETTE_6A 0x00E54171 //FF 3C 00
#define COLOR_DEMOKIT_PALETTE_6B 0x00E54071 //FF 3E 00
#define COLOR_DEMOKIT_PALETTE_6C 0x00E43F72 //FF 40 00
#define COLOR_DEMOKIT_PALETTE_6D 0x00E33F74 //FF 42 00
#define COLOR_DEMOKIT_PALETTE_6E 0x00E23D76 //FF 45 00
#define COLOR_DEMOKIT_PALETTE_6F 0x00E13D76 //FF 47 00
#define COLOR_DEMOKIT_PALETTE_70 0x00E03C78 //FF 49 00
#define COLOR_DEMOKIT_PALETTE_71 0x00E03B79 //FF 4B 00
#define COLOR_DEMOKIT_PALETTE_72 0x00DF3B7A //FF 4C 00
#define COLOR_DEMOKIT_PALETTE_73 0x00DE3B7B //FF 4E 00
#define COLOR_DEMOKIT_PALETTE_74 0x00DD3A7C //FF 50 00
#define COLOR_DEMOKIT_PALETTE_75 0x00DC397D //FF 52 00
#define COLOR_DEMOKIT_PALETTE_76 0x00DB387F //FF 55 00
#define COLOR_DEMOKIT_PALETTE_77 0x00DB3780 //FF 57 00
#define COLOR_DEMOKIT_PALETTE_78 0x00DA3781 //FF 58 00
#define COLOR_DEMOKIT_PALETTE_79 0x00D93781 //FF 5A 00
#define COLOR_DEMOKIT_PALETTE_7A 0x00D83683 //FF 5C 00
#define COLOR_DEMOKIT_PALETTE_7B 0x00D73585 //FF 5F 00
#define COLOR_DEMOKIT_PALETTE_7C 0x00D63486 //FF 61 00
#define COLOR_DEMOKIT_PALETTE_7D 0x00D53387 //FF 64 00
#define COLOR_DEMOKIT_PALETTE_7E 0x00D43289 //FF 67 00
#define COLOR_DEMOKIT_PALETTE_7F 0x00D3318B //FF 69 00
#define COLOR_DEMOKIT_PALETTE_80 0x00808050 //50 50 50
#define COLOR_DEMOKIT_PALETTE_81 0x00808052 //52 52 52
#define COLOR_DEMOKIT_PALETTE_82 0x00808054 //54 54 54
#define COLOR_DEMOKIT_PALETTE_83 0x00808056 //56 56 56
#define COLOR_DEMOKIT_PALETTE_84 0x00808058 //58 58 58
#define COLOR_DEMOKIT_PALETTE_85 0x0080805A //5A 5A 5A
#define COLOR_DEMOKIT_PALETTE_86 0x0080805C //5C 5C 5C
#define COLOR_DEMOKIT_PALETTE_87 0x0080805E //5E 5E 5E
#define COLOR_DEMOKIT_PALETTE_88 0x00808060 //60 60 60
#define COLOR_DEMOKIT_PALETTE_89 0x00808062 //62 62 62
#define COLOR_DEMOKIT_PALETTE_8A 0x00808064 //64 64 64
#define COLOR_DEMOKIT_PALETTE_8B 0x00808066 //66 66 66
#define COLOR_DEMOKIT_PALETTE_8C 0x00808068 //68 68 68
#define COLOR_DEMOKIT_PALETTE_8D 0x0080806A //6A 6A 6A
#define COLOR_DEMOKIT_PALETTE_8E 0x0080806C //6C 6C 6C
#define COLOR_DEMOKIT_PALETTE_8F 0x0080806E //6E 6E 6E
#define COLOR_DEMOKIT_PALETTE_90 0x00808070 //70 70 70
#define COLOR_DEMOKIT_PALETTE_91 0x00808072 //72 72 72
#define COLOR_DEMOKIT_PALETTE_92 0x00808074 //74 74 74
#define COLOR_DEMOKIT_PALETTE_93 0x00808076 //76 76 76
#define COLOR_DEMOKIT_PALETTE_94 0x00808078 //78 78 78
#define COLOR_DEMOKIT_PALETTE_95 0x0080807A //7A 7A 7A
#define COLOR_DEMOKIT_PALETTE_96 0x0080807C //7C 7C 7C
#define COLOR_DEMOKIT_PALETTE_97 0x0080807E //7E 7E 7E
#define COLOR_DEMOKIT_PALETTE_98 0x00808080 //80 80 80
#define COLOR_DEMOKIT_PALETTE_99 0x00808082 //82 82 82
#define COLOR_DEMOKIT_PALETTE_9A 0x00808084 //84 84 84
#define COLOR_DEMOKIT_PALETTE_9B 0x00808086 //86 86 86
#define COLOR_DEMOKIT_PALETTE_9C 0x00808088 //88 88 88
#define COLOR_DEMOKIT_PALETTE_9D 0x0080808A //8A 8A 8A
#define COLOR_DEMOKIT_PALETTE_9E 0x0080808C //8C 8C 8C
#define COLOR_DEMOKIT_PALETTE_9F 0x0080808E //8E 8E 8E
#define COLOR_DEMOKIT_PALETTE_A0 0x00887C27 //34 24 23
#define COLOR_DEMOKIT_PALETTE_A1 0x0094792F //4B 23 23
#define COLOR_DEMOKIT_PALETTE_A2 0x00A27438 //68 24 24
#define COLOR_DEMOKIT_PALETTE_A3 0x00B16F42 //86 24 24
#define COLOR_DEMOKIT_PALETTE_A4 0x00BF6A4C //A4 25 25
#define COLOR_DEMOKIT_PALETTE_A5 0x00CE6555 //C1 25 25
#define COLOR_DEMOKIT_PALETTE_A6 0x00D9615C //D8 25 25
#define COLOR_DEMOKIT_PALETTE_A7 0x00E25F61 //E9 25 25
#define COLOR_DEMOKIT_PALETTE_A8 0x00DA616D //EA 36 36
#define COLOR_DEMOKIT_PALETTE_A9 0x00CE657F //EB 4F 4F
#define COLOR_DEMOKIT_PALETTE_AA 0x00CE657F //EB 4F 4F
#define COLOR_DEMOKIT_PALETTE_AB 0x00B16FA9 //ED 8B 8B
#define COLOR_DEMOKIT_PALETTE_AC 0x00A174BE //EE AA AB
#define COLOR_DEMOKIT_PALETTE_AD 0x009378D3 //EF C8 C7
#define COLOR_DEMOKIT_PALETTE_AE 0x009479D4 //F0 C8 C8
#define COLOR_DEMOKIT_PALETTE_AF 0x00887DE4 //F0 E0 E0
#define COLOR_DEMOKIT_PALETTE_B0 0x00777F2D //22 34 2D
#define COLOR_DEMOKIT_PALETTE_B1 0x006B7F3C //21 4C 3C
#define COLOR_DEMOKIT_PALETTE_B2 0x005D7E4E //20 69 4D
#define COLOR_DEMOKIT_PALETTE_B3 0x004E7C62 //1F 88 5F
#define COLOR_DEMOKIT_PALETTE_B4 0x003F7C74 //1D A6 71
#define COLOR_DEMOKIT_PALETTE_B5 0x00317C87 //1C C3 83
#define COLOR_DEMOKIT_PALETTE_B6 0x00267B96 //1B DB 91
#define COLOR_DEMOKIT_PALETTE_B7 0x001D7AA1 //1A EC 9B
#define COLOR_DEMOKIT_PALETTE_B8 0x00267AAA //31 EE A5
#define COLOR_DEMOKIT_PALETTE_B9 0x00357BB7 //51 F1 B3
#define COLOR_DEMOKIT_PALETTE_BA 0x00457CC7 //78 F4 C4
#define COLOR_DEMOKIT_PALETTE_BB 0x00577DD8 //A1 F7 D6
#define COLOR_DEMOKIT_PALETTE_BC 0x00687EE7 //C8 FA E7
#define COLOR_DEMOKIT_PALETTE_BD 0x00677EE7 //C7 FB E7
#define COLOR_DEMOKIT_PALETTE_BE 0x00757FF5 //E8 FD F5
#define COLOR_DEMOKIT_PALETTE_BF 0x00757FF5 //E8 FD F6
#define COLOR_DEMOKIT_PALETTE_C0 0x00D2527B //EE 50 2B
#define COLOR_DEMOKIT_PALETTE_C1 0x00B35F70 //B9 56 37
#define COLOR_DEMOKIT_PALETTE_C2 0x00B04991 //D6 81 31
#define COLOR_DEMOKIT_PALETTE_C3 0x00AA4C67 //A2 5A 0D
#define COLOR_DEMOKIT_PALETTE_C4 0x00B81DAE //FF A8 00
#define COLOR_DEMOKIT_PALETTE_C5 0x00B319B6 //FF B4 00
#define COLOR_DEMOKIT_PALETTE_C6 0x009D27CA //F4 D3 2E
#define COLOR_DEMOKIT_PALETTE_C7 0x00534F7D //42 AF 29
#define COLOR_DEMOKIT_PALETTE_C8 0x00262C9E //24 FD 0D
#define COLOR_DEMOKIT_PALETTE_C9 0x005A759D //69 BD 8B
#define COLOR_DEMOKIT_PALETTE_CA 0x0030736C //00 AC 5A
#define COLOR_DEMOKIT_PALETTE_CB 0x003B8B60 //03 8E 77
#define COLOR_DEMOKIT_PALETTE_CC 0x0049BA4D //02 62 B6
#define COLOR_DEMOKIT_PALETTE_CD 0x0064AF44 //1F 48 9A
#define COLOR_DEMOKIT_PALETTE_CE 0x00C86C8E //F3 60 6A
#define COLOR_DEMOKIT_PALETTE_CF 0x00E53F72 //FF 3F 00
#define COLOR_DEMOKIT_PALETTE_D0 0x00808023 //23 23 23
#define COLOR_DEMOKIT_PALETTE_D1 0x0080802A //2A 2A 2A
#define COLOR_DEMOKIT_PALETTE_D2 0x00808030 //30 30 30
#define COLOR_DEMOKIT_PALETTE_D3 0x0080803C //3C 3C 3C
#define COLOR_DEMOKIT_PALETTE_D4 0x00808048 //48 48 48
#define COLOR_DEMOKIT_PALETTE_D5 0x00808057 //57 57 57
#define COLOR_DEMOKIT_PALETTE_D6 0x00808066 //66 66 66
#define COLOR_DEMOKIT_PALETTE_D7 0x00808076 //76 76 76
#define COLOR_DEMOKIT_PALETTE_D8 0x00808085 //85 85 85
#define COLOR_DEMOKIT_PALETTE_D9 0x00808091 //91 91 91
#define COLOR_DEMOKIT_PALETTE_DA 0x0080809F //9F 9F 9F
#define COLOR_DEMOKIT_PALETTE_DB 0x008080AA //AA AA AA
#define COLOR_DEMOKIT_PALETTE_DC 0x008080B5 //B5 B5 B5
#define COLOR_DEMOKIT_PALETTE_DD 0x008080BB //BB BB BB
#define COLOR_DEMOKIT_PALETTE_DE 0x008080BC //BC BC BC
#define COLOR_DEMOKIT_PALETTE_DF 0x008080C1 //C1 C1 C1
#define COLOR_DEMOKIT_PALETTE_E0 0x008080C2 //C2 C2 C2
#define COLOR_DEMOKIT_PALETTE_E1 0x008080C6 //C6 C6 C6
#define COLOR_DEMOKIT_PALETTE_E2 0x008080CA //CA CA CA
#define COLOR_DEMOKIT_PALETTE_E3 0x008080CB //CB CB CB
#define COLOR_DEMOKIT_PALETTE_E4 0x008080D1 //D1 D1 D1
#define COLOR_DEMOKIT_PALETTE_E5 0x008080D3 //D3 D3 D3
#define COLOR_DEMOKIT_PALETTE_E6 0x008080D5 //D5 D5 D5
#define COLOR_DEMOKIT_PALETTE_E7 0x008080D9 //D9 D9 D9
#define COLOR_DEMOKIT_PALETTE_E8 0x008080DC //DC DC DC
#define COLOR_DEMOKIT_PALETTE_E9 0x008080DD //DD DD DD
#define COLOR_DEMOKIT_PALETTE_EA 0x008080E0 //E0 E0 E0
#define COLOR_DEMOKIT_PALETTE_EB 0x008080E1 //E1 E1 E1
#define COLOR_DEMOKIT_PALETTE_EC 0x008080E3 //E3 E3 E3
#define COLOR_DEMOKIT_PALETTE_ED 0x008080E5 //E5 E5 E5
#define COLOR_DEMOKIT_PALETTE_EE 0x008080E7 //E7 E7 E7
#define COLOR_DEMOKIT_PALETTE_EF 0x008080E9 //E9 E9 E9
#define COLOR_DEMOKIT_PALETTE_F0 0x008080EA //EA EA EA
#define COLOR_DEMOKIT_PALETTE_F1 0x008080ED //ED ED ED
#define COLOR_DEMOKIT_PALETTE_F2 0x008080F0 //F0 F0 F0
#define COLOR_DEMOKIT_PALETTE_F3 0x008080F2 //F2 F2 F2
#define COLOR_DEMOKIT_PALETTE_F4 0x008080F4 //F4 F4 F4
#define COLOR_DEMOKIT_PALETTE_F5 0x008080F6 //F6 F6 F6
#define COLOR_DEMOKIT_PALETTE_F6 0x008080F8 //F8 F8 F8
#define COLOR_DEMOKIT_PALETTE_F7 0x008080F9 //F9 F9 F9
#define COLOR_DEMOKIT_PALETTE_F8 0x008080FD //FD FD FD
#define COLOR_DEMOKIT_PALETTE_F9 0x0080805E //5E 5E 5E
#define COLOR_DEMOKIT_PALETTE_FA 0x00808066 //66 66 66
#define COLOR_DEMOKIT_PALETTE_FB 0x0080806E //6E 6E 6E
#define COLOR_DEMOKIT_PALETTE_FC 0x00808076 //76 76 76
#define COLOR_DEMOKIT_PALETTE_FD 0x0080807E //7E 7E 7E
#define COLOR_DEMOKIT_PALETTE_FE 0x00808086 //86 86 86
#define COLOR_DEMOKIT_PALETTE_FF 0x0080808E //8E 8E 8E

#include "Platform.h"
#include "GxGfx.h"

#ifdef _WIN32
#pragma pack(push,4)
#endif

// PALETTE
const
#ifndef _WIN32
_ALIGNED(4)
#endif
PALETTE_ITEM gDemoKit_Palette_Palette[256] = {
	PALETTE_YUVA_MAKE(0x00, COLOR_DEMOKIT_PALETTE_00),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_01),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_02),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_03),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_04),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_05),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_06),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_07),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_08),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_09),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_0A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_0B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_0C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_0D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_0E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_0F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_10),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_11),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_12),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_13),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_14),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_15),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_16),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_17),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_18),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_19),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_1A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_1B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_1C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_1D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_1E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_1F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_20),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_21),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_22),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_23),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_24),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_25),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_26),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_27),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_28),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_29),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_2A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_2B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_2C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_2D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_2E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_2F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_30),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_31),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_32),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_33),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_34),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_35),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_36),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_37),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_38),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_39),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_3A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_3B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_3C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_3D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_3E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_3F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_40),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_41),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_42),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_43),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_44),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_45),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_46),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_47),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_48),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_49),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_4A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_4B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_4C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_4D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_4E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_4F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_50),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_51),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_52),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_53),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_54),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_55),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_56),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_57),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_58),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_59),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_5A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_5B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_5C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_5D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_5E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_5F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_60),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_61),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_62),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_63),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_64),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_65),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_66),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_67),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_68),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_69),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_6A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_6B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_6C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_6D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_6E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_6F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_70),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_71),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_72),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_73),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_74),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_75),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_76),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_77),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_78),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_79),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_7A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_7B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_7C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_7D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_7E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_7F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_80),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_81),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_82),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_83),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_84),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_85),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_86),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_87),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_88),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_89),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_8A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_8B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_8C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_8D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_8E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_8F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_90),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_91),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_92),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_93),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_94),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_95),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_96),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_97),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_98),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_99),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_9A),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_9B),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_9C),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_9D),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_9E),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_9F),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A0),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A1),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A2),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A3),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A4),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A5),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A6),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A7),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A8),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_A9),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_AA),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_AB),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_AC),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_AD),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_AE),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_AF),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B0),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B1),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B2),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B3),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B4),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B5),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B6),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B7),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B8),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_B9),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_BA),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_BB),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_BC),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_BD),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_BE),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_BF),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C0),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C1),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C2),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C3),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C4),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C5),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C6),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C7),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C8),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_C9),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_CA),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_CB),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_CC),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_CD),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_CE),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_CF),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D0),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D1),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D2),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D3),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D4),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D5),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D6),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D7),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D8),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_D9),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_DA),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_DB),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_DC),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_DD),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_DE),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_DF),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E0),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E1),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E2),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E3),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E4),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E5),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E6),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E7),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E8),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_E9),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_EA),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_EB),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_EC),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_ED),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_EE),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_EF),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F0),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F1),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F2),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F3),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F4),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F5),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F6),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F7),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F8),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_F9),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_FA),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_FB),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_FC),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_FD),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_FE),
	PALETTE_YUVA_MAKE(0xff, COLOR_DEMOKIT_PALETTE_FF),
};

#ifdef _WIN32
#pragma pack(pop)
#endif
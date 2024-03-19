// This file was automatically generated by the actionheadergen tool.
// Please do not manually edit this file.
#ifndef CARRACE_ACTIONS_H
#define CARRACE_ACTIONS_H

namespace CarraceScript
{
#if __cplusplus >= 201103L
enum Script : int {
#else
enum Script {
#endif
	c_noneCarrace = -1,

	c__CarRace_World = 0,
	c_SpeedMeter = 1,
	c_FuelMeter = 2,
	c_Info_Ctl = 3,
	c_DistanceMeter = 4,
	c_Horn_Ctl = 5,
	c_Horn_Up_Bitmap = 6,
	c_Horn_Down = 7,
	c_Horn_Sound = 8,
	c_Horn_Down_Bitmap = 9,
	c_UserCar_Actor = 10,
	c_Studs_Actor = 11,
	c_Rhoda_Actor = 12,
	c_irtx08ra_PlayWav = 13,
	c_Map_Ctl = 14,
	c_Map_Up_Bitmap = 15,
	c_Map_Down_Bitmap = 16,
	c_Info_Up_Bitmap = 17,
	c_Info_Down_Bitmap = 18,
	c_CarLocator2 = 19,
	c_CarLocator3 = 20,
	c_StartTriggers = 21,
	c_RacePath = 22,
	c_HitWallSound = 23,
	c_SetHitWallSound = 24,
	c_HitActorSound = 25,
	c_SetHitActorSound = 26,
	c_VO1 = 27,
	c_VO2 = 28,
	c_VO3 = 29,
	c_VO4 = 30,
	c_VO5 = 31,
	c_VO6 = 32,
	c_VO7 = 33,
	c_VO8 = 34,
	c_VO9 = 35,
	c_VO10 = 36,
	c_VO11 = 37,
	c_VO12 = 38,
	c_VO13 = 39,
	c_VO14 = 40,
	c_RaceCarDashboard11_Bitmap = 41,
	c_RaceCarDashboard12_Bitmap = 42,
	c_RaceCarDashboard13_Bitmap = 43,
	c_RaceCarDashboard14_Bitmap = 44,
	c_RaceCarDashboard15_Bitmap = 45,
	c_RaceCarDashboard16_Bitmap = 46,
	c_VO15 = 47,
	c_VO16 = 48,
	c_VO17 = 49,
	c_VO18 = 50,
	c_RaceCarDashboard21_Bitmap = 51,
	c_RaceCarDashboard22_Bitmap = 52,
	c_RaceCarDashboard23_Bitmap = 53,
	c_RaceCarDashboard24_Bitmap = 54,
	c_RaceCarDashboard25_Bitmap = 55,
	c_RaceCarDashboard26_Bitmap = 56,
	c_VO19 = 57,
	c_VO20 = 58,
	c_VO21 = 59,
	c_SkelKick_Sound = 60,
	c_RaceCarDashboard31_Bitmap = 61,
	c_RaceCarDashboard32_Bitmap = 62,
	c_RaceCarDashboard33_Bitmap = 63,
	c_RaceCarDashboard34_Bitmap = 64,
	c_RaceCarDashboard35_Bitmap = 65,
	c_RaceCarDashboard36_Bitmap = 66,
	c_Rhoda_Sound = 67,
	c_Rhoda_Locator = 68,
	c_RcRhod00_Anim = 69,
	c_RcRhod01_Anim = 70,
	c_RaceCarDashboard41_Bitmap = 71,
	c_RaceCarDashboard42_Bitmap = 72,
	c_RaceCarDashboard43_Bitmap = 73,
	c_RaceCarDashboard44_Bitmap = 74,
	c_RaceCarDashboard45_Bitmap = 75,
	c_RaceCarDashboard46_Bitmap = 76,
	c_RcRhod02_Anim = 77,
	c_RhodaCar_Actor = 78,
	c_RhodaCar_Model = 79,
	c_Rhoda_Model = 80,
	c_RaceCarDashboard51_Bitmap = 81,
	c_RaceCarDashboard52_Bitmap = 82,
	c_RaceCarDashboard53_Bitmap = 83,
	c_RaceCarDashboard54_Bitmap = 84,
	c_RaceCarDashboard55_Bitmap = 85,
	c_RaceCarDashboard56_Bitmap = 86,
	c_Studs_Sound = 87,
	c_Studs_Locator = 88,
	c_RcStud00_Anim = 89,
	c_RcStud01_Anim = 90,
	c_RaceCarDashboard61_Bitmap = 91,
	c_RaceCarDashboard62_Bitmap = 92,
	c_RaceCarDashboard63_Bitmap = 93,
	c_RaceCarDashboard64_Bitmap = 94,
	c_RaceCarDashboard65_Bitmap = 95,
	c_RaceCarDashboard66_Bitmap = 96,
	c_RaceCarDashboard = 97,
	c_RaceCarArms_Ctl = 98,
	c_RcStud02_Anim = 99,
	c_StudsCar_Actor = 100,
	c_StudsCar_Model = 101,
	c_Studs_Model = 102,
	c_SkelKick1_Anim = 103,
	c_SkelKick2_Anim = 104,
	c_User_Locator = 105,
	c_UserCar_Model = 106,
	c_ScaryRun_Sound = 107,
	c_ScaryRun_Anim = 108,
	c_Skeleton_Actor = 109,
	c_Skeleton_Model = 110,
	c_Ghost_Sound = 111,
	c_Ghost_Anim = 112,
	c_Ghost_Actor = 113,
	c_Ghost_Model = 114,
	c_TireGuy_Anim = 115,
	c_TireGuy_Actor = 116,
	c_TireGuy_Model = 117,
	c_Skelton1_Sound = 118,
	c_SJump_Anim = 119,
	c_Skelton1_Actor = 120,
	c_Skelton1_Model = 121,
	c_SkelBig_Anim = 122,
	c_SkelBig_Actor = 123,
	c_SkelBig_Model = 124,
	c_DorA_Actor = 125,
	c_DorA_Model = 126,
	c_DorB_Actor = 127,
	c_DorB_Model = 128,
	c_DorC_Actor = 129,
	c_DorC_Model = 130,
	c_DorD_Actor = 131,
	c_DorD_Model = 132,
	c_DorE_Actor = 133,
	c_DorE_Model = 134,
	c_DorF_Actor = 135,
	c_DorF_Model = 136,
	c_DorG_Actor = 137,
	c_DorG_Model = 138,
	c_DorH_Actor = 139,
	c_DorH_Model = 140,
	c_DorI_Actor = 141,
	c_DorI_Model = 142,
	c_DorJ_Actor = 143,
	c_DorJ_Model = 144,
	c_HideAni_Anim = 145,
	c_RaceCarArms_Mask_Bitmap = 146,
	c_srt001rh_Wav_500 = 147,
	c_srt001rh_Pho_500 = 148,
	c_srt001rh_0_sfx = 149,
	c_srt001rh_1_sfx = 150,
	c_srt001rh_2_sfx = 151,
	c_srt001rh_Anim = 152,
	c_SRT001SL_Wav_501 = 153,
	c_SRT001SL_Pho_501 = 154,
	c_srt001sl_0_sfx = 155,
	c_srt001sl_1_sfx = 156,
	c_srt001sl_2_sfx = 157,
	c_srt001sl_3_sfx = 158,
	c_srt001sl_4_sfx = 159,
	c_srt001sl_Anim = 160,
	c_srt002rh_Wav_502 = 161,
	c_srt002rh_Pho_502 = 162,
	c_srt002rh_0_sfx = 163,
	c_srt002rh_1_sfx = 164,
	c_srt002rh_2_sfx = 165,
	c_srt002rh_Anim = 166,
	c_SRT002SL_Wav_503 = 167,
	c_SRT002SL_Pho_503 = 168,
	c_srt002sl_0_sfx = 169,
	c_srt002sl_1_sfx = 170,
	c_srt002sl_2_sfx = 171,
	c_srt002sl_3_sfx = 172,
	c_srt002sl_Anim = 173,
	c_srt003rh_Wav_504 = 174,
	c_srt003rh_Pho_504 = 175,
	c_srt003rh_0_sfx = 176,
	c_srt003rh_1_sfx = 177,
	c_srt003rh_Anim = 178,
	c_SRT003SL_Wav_505 = 179,
	c_SRT003SL_Pho_505 = 180,
	c_srt003sl_0_sfx = 181,
	c_srt003sl_1_sfx = 182,
	c_srt003sl_Anim = 183,
	c_SRT004SL_Wav_506 = 184,
	c_SRT004SL_Pho_506 = 185,
	c_srt004sl_0_sfx = 186,
	c_srt004sl_1_sfx = 187,
	c_srt004sl_2_sfx = 188,
	c_srt004sl_Anim = 189,
	c_srt005sl_Wav_507 = 190,
	c_srt005sl_Pho_507 = 191,
	c_srt005sl_0_sfx = 192,
	c_srt005sl_1_sfx = 193,
	c_srt005sl_2_sfx = 194,
	c_srt005sl_3_sfx = 195,
	c_srt005sl_Anim = 196,
	c_IRTX08RA_Wav_508 = 197,
	c_nrtflag0_Anim = 198,
	c_SRT007RH_Wav_509 = 199,
	c_SRT007RH_Pho_509 = 200,
	c_srt007rh_0_sfx = 201,
	c_srt007rh_1_sfx = 202,
	c_srt007rh_2_sfx = 203,
	c_srt007rh_3_sfx = 204,
	c_srt007rh_Anim = 205,
	c_SRT008RH_Wav_510 = 206,
	c_SRT008RH_Pho_510 = 207,
	c_srt008rh_0_sfx = 208,
	c_srt008rh_1_sfx = 209,
	c_srt008rh_2_sfx = 210,
	c_srt008rh_3_sfx = 211,
	c_srt008rh_Anim = 212,
	c_SRT009RH_Wav_511 = 213,
	c_SRT009RH_Pho_511 = 214,
	c_srt009rh_0_sfx = 215,
	c_srt009rh_1_sfx = 216,
	c_srt009rh_2_sfx = 217,
	c_srt009rh_3_sfx = 218,
	c_srt009rh_Anim = 219,
	c_SRT010RH_Wav_512 = 220,
	c_SRT010RH_Pho_512 = 221,
	c_srt010rh_0_sfx = 222,
	c_srt010rh_1_sfx = 223,
	c_srt010rh_2_sfx = 224,
	c_srt010rh_Anim = 225,
	c_SRT011RH_Wav_513 = 226,
	c_SRT011RH_Pho_513 = 227,
	c_srt011rh_0_sfx = 228,
	c_srt011rh_1_sfx = 229,
	c_srt011rh_2_sfx = 230,
	c_srt011rh_3_sfx = 231,
	c_srt011rh_Anim = 232,
	c_SRT011SL_Wav_514 = 233,
	c_SRT011SL_Pho_514 = 234,
	c_srt011sl_0_sfx = 235,
	c_srt011sl_1_sfx = 236,
	c_srt011sl_2_sfx = 237,
	c_srt011sl_3_sfx = 238,
	c_srt011sl_Anim = 239,
	c_SRT012RH_Wav_515 = 240,
	c_SRT012RH_Pho_515 = 241,
	c_srt012rh_0_sfx = 242,
	c_srt012rh_1_sfx = 243,
	c_srt012rh_2_sfx = 244,
	c_srt012rh_3_sfx = 245,
	c_srt012rh_Anim = 246,
	c_SRT012SL_Wav_516 = 247,
	c_SRT012SL_Pho_516 = 248,
	c_srt012sl_0_sfx = 249,
	c_srt012sl_1_sfx = 250,
	c_srt012sl_2_sfx = 251,
	c_srt012sl_3_sfx = 252,
	c_srt012sl_Anim = 253,
	c_SRT013SL_Wav_517 = 254,
	c_SRT013SL_Pho_517 = 255,
	c_srt013sl_0_sfx = 256,
	c_srt013sl_1_sfx = 257,
	c_srt013sl_2_sfx = 258,
	c_srt013sl_3_sfx = 259,
	c_srt013sl_Anim = 260,
	c_SRT014SL_Wav_518 = 261,
	c_SRT014SL_Pho_518 = 262,
	c_srt014sl_0_sfx = 263,
	c_srt014sl_1_sfx = 264,
	c_srt014sl_2_sfx = 265,
	c_srt014sl_3_sfx = 266,
	c_srt014sl_4_sfx = 267,
	c_srt014sl_Anim = 268,
	c_SRT015SL_Wav_519 = 269,
	c_SRT015SL_Pho_519 = 270,
	c_srt015sl_0_sfx = 271,
	c_srt015sl_1_sfx = 272,
	c_srt015sl_2_sfx = 273,
	c_srt015sl_3_sfx = 274,
	c_srt015sl_Anim = 275,
	c_SRT016SL_Wav_520 = 276,
	c_SRT016SL_Pho_520 = 277,
	c_srt016sl_0_sfx = 278,
	c_srt016sl_1_sfx = 279,
	c_srt016sl_2_sfx = 280,
	c_srt016sl_3_sfx = 281,
	c_srt016sl_4_sfx = 282,
	c_srt016sl_Anim = 283,
	c_SRT017SL_Wav_521 = 284,
	c_SRT017SL_Pho_521 = 285,
	c_srt017sl_0_sfx = 286,
	c_srt017sl_1_sfx = 287,
	c_srt017sl_2_sfx = 288,
	c_srt017sl_3_sfx = 289,
	c_srt017sl_Anim = 290,
	c_nrtrhod0_Anim = 291,
	c_nrt001pz_Anim = 292,
	c_nrt002pz_Anim = 293,
	c_nrt003sh_Anim = 294,
	c_nrt004sh_Anim = 295,
	c_nrt005ft_Anim = 296,
	c_nrt008oc_Anim = 297,
	c_nrt010pz_Anim = 298,
	c_nrt011pz_Anim = 299,
	c_nrt012sl_Anim = 300,
	c_nrt013sl_Anim = 301,
	c_nrt014sl_Anim = 302,
	c_nrt015gh_Anim = 303,
	c_nrt015sl_Anim = 304,
	c_nrt016gh_Anim = 305,
	c_nrt017rc_Anim = 306,
	c_nrt018rc_Anim = 307,
	c_nrt020a1_Anim = 308,
	c_nrt022sp_Anim = 309,
	c_nrt023sk_Anim = 310,
	c_nrt024a2_Anim = 311,
	c_nrt025sw_Anim = 312,
	c_nrt026sw_Anim = 313,
	c_nrt027sw_Anim = 314,
	c_nrt028sw_Anim = 315,
	c_nrt029sw_Anim = 316,
	c_nrt030bk_Anim = 317,
	c_nrt031bk_Anim = 318,
	c_nrt032bk_Anim = 319,
	c_nrt033bk_Anim = 320,
	c_nrt034bk_Anim = 321,
	c_nrt035bk_Anim = 322,
	c_nrtrhod1_Anim = 323,
	c_nrtrhod2_Anim = 324,
	c_nrtrhod3_Anim = 325,
	c_nrtstud0_Anim = 326,
	c_nrtstud1_Anim = 327,
	c_nrtstud2_Anim = 328,
	c_nrtstud3_Anim = 329,

	c_srt001rh_RunAnim = 500,
	c_srt001sl_RunAnim = 501,
	c_srt002rh_RunAnim = 502,
	c_srt002sl_RunAnim = 503,
	c_srt003rh_RunAnim = 504,
	c_srt003sl_RunAnim = 505,
	c_srt004sl_RunAnim = 506,
	c_srt005sl_RunAnim = 507,
	c_nrtflag0_RunAnim = 508,
	c_srt007rh_RunAnim = 509,
	c_srt008rh_RunAnim = 510,
	c_srt009rh_RunAnim = 511,
	c_srt010rh_RunAnim = 512,
	c_srt011rh_RunAnim = 513,
	c_srt011sl_RunAnim = 514,
	c_srt012rh_RunAnim = 515,
	c_srt012sl_RunAnim = 516,
	c_srt013sl_RunAnim = 517,
	c_srt014sl_RunAnim = 518,
	c_srt015sl_RunAnim = 519,
	c_srt016sl_RunAnim = 520,
	c_srt017sl_RunAnim = 521,
	c_nrtrhod0_RunAnim = 522,
	c_nrt001pz_RunAnim = 523,
	c_nrt002pz_RunAnim = 524,
	c_nrt003sh_RunAnim = 525,
	c_nrt004sh_RunAnim = 526,
	c_nrt005ft_RunAnim = 527,
	c_nrt008oc_RunAnim = 528,
	c_nrt010pz_RunAnim = 529,
	c_nrt011pz_RunAnim = 530,
	c_nrt012sl_RunAnim = 531,
	c_nrt013sl_RunAnim = 532,
	c_nrt014sl_RunAnim = 533,
	c_nrt015gh_RunAnim = 534,
	c_nrt015sl_RunAnim = 535,
	c_nrt016gh_RunAnim = 536,
	c_nrt017rc_RunAnim = 537,
	c_nrt018rc_RunAnim = 538,
	c_nrt020a1_RunAnim = 539,
	c_nrt022sp_RunAnim = 540,
	c_nrt023sk_RunAnim = 541,
	c_nrt024a2_RunAnim = 542,
	c_nrt025sw_RunAnim = 543,
	c_nrt026sw_RunAnim = 544,
	c_nrt027sw_RunAnim = 545,
	c_nrt028sw_RunAnim = 546,
	c_nrt029sw_RunAnim = 547,
	c_nrt030bk_RunAnim = 548,
	c_nrt031bk_RunAnim = 549,
	c_nrt032bk_RunAnim = 550,
	c_nrt033bk_RunAnim = 551,
	c_nrt034bk_RunAnim = 552,
	c_nrt035bk_RunAnim = 553,
	c_nrtrhod1_RunAnim = 554,
	c_nrtrhod2_RunAnim = 555,
	c_nrtrhod3_RunAnim = 556,
	c_nrtstud0_RunAnim = 557,
	c_nrtstud1_RunAnim = 558,
	c_nrtstud2_RunAnim = 559,
	c_nrtstud3_RunAnim = 560
};
} // namespace CarraceScript

#endif // CARRACE_ACTIONS_H

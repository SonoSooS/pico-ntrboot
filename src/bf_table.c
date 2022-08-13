/*
    bf_table.c - Blowfish table for NTRCARD command decryption
    
    Raw Blowfish data is copied to 0x1FFFD000 by boot11,
     then boot9 processes it into 0x080006A0
*/

#include <stdint.h>
#include "pico/platform.h"

#include "memeloc.h"

#define BFLOC MEMELOC_RAM_D("bf")

//const uint32_t BFLOC blowfish_S[0x100 * 4] __attribute__((aligned(0x1000))) =
const uint32_t BFLOC blowfish_table[(0x100 * 4) + 18] __attribute__((aligned(0x1000))) =
{
    0xCE59E797,
    0x5669DE16,
    0x96FFEC63,
    0x2C058069,
    0x6688021C,
    0xCCAA512A,
    0xF3FFE410,
    0xA7BFFA0A,
    0xE6EB535B,
    0xC95138AC,
    0x2CD75FF9,
    0x7BF6B8F3,
    0xE30DC6F8,
    0x5F6BE10A,
    0xB851CDD1,
    0xE9C59219,
    0xA220B268,
    0x6706B0AF,
    0x960D1829,
    0x7A88A677,
    0x7C9E6FE6,
    0xB910B74E,
    0x4E0D171E,
    0x0A3D8983,
    0x49AF345E,
    0x3E644AB0,
    0x7ED66E8E,
    0x4B18B7CA,
    0x8D005F31,
    0x82340F7C,
    0x81F1B4A8,
    0x52E0FA11,
    0x51772698,
    0x386EB463,
    0x78172C06,
    0x5BEB7D0A,
    0xE3A8A2EB,
    0x4EC70358,
    0x56FEC38D,
    0x465814E0,
    0x8CE62A56,
    0x9F4B318F,
    0xA977CAA8,
    0x792CC69E,
    0xAF670902,
    0x286C0242,
    0xDEC4523E,
    0x4BC2DAF7,
    0x68BAEBCA,
    0xEB86748C,
    0x7BBEC0D2,
    0x2720B12B,
    0x820668C6,
    0xE1BA88C7,
    0x95FDA029,
    0x4BA924FA,
    0x5D809EF8,
    0xB4D6EEF8,
    0x691E76D4,
    0x96AD4779,
    0xD082FF08,
    0x70FD023E,
    0x5F164D5B,
    0x4427C3AC,
    0x7E1816E0,
    0x55D28BC0,
    0x73D03AEB,
    0x06D11235,
    0x2D855EDF,
    0x842E0FCB,
    0x33CBBDD2,
    0xE448C816,
    0x60DD06A2,
    0x1BB66D13,
    0xC1A23644,
    0x0EEECF2D,
    0x3A2855B6,
    0x4322E69F,
    0x1A9C5855,
    0xA46EAD3C,
    0x1679D155,
    0xE2432BE1,
    0x28BAAF73,
    0xB04F5D0E,
    0x89AA596B,
    0xA8F0A4C9,
    0xBC5318B3,
    0x4180318B,
    0xF819FDE0,
    0xFCE5172C,
    0xAEE75056,
    0x075B30E1,
    0x5202569A,
    0x0DE3FA43,
    0xADC6198F,
    0x08FC5FA5,
    0xE5FBD672,
    0x0051DEBB,
    0x00701C89,
    0x19531772,
    0x0B55A052,
    0xF3CF5B5F,
    0xC039055D,
    0x21DE249D,
    0x19A93BC2,
    0x90AB38BD,
    0x708B5997,
    0x7731D457,
    0x72B956E3,
    0xCBF980A5,
    0xE786604E,
    0x24F5B87E,
    0x15C62B96,
    0xF73D6844,
    0xF60BC63A,
    0x0ACA38E4,
    0x2AAA8805,
    0xC3203637,
    0x00FD3D84,
    0x14AA3B86,
    0xF63EB387,
    0xA2996ADA,
    0xDE1C6AB3,
    0x88D49A7C,
    0x02B29DE7,
    0x6A312362,
    0xDF0DDF8D,
    0x2E0AF56F,
    0xED492EAA,
    0x8944FCC0,
    0x65A87B17,
    0x1EB75B59,
    0xF36ECDF3,
    0x8D38E75B,
    0xD3B8DCC9,
    0x64DCD54A,
    0xEE8DD90F,
    0x6264B1F6,
    0x030582ED,
    0x5576F634,
    0x73AF8BA0,
    0xC8F0E7BA,
    0x8F08AAFC,
    0x36458E54,
    0x06100D61,
    0xE3B6AA51,
    0x4E3028AD,
    0x242EAD6D,
    0x4D4D5C0A,
    0x0CBDA224,
    0x19F98356,
    0x0202917D,
    0xE8B4F04C,
    0xE9A482A2,
    0x4712C4BC,
    0xEEA0F303,
    0xA8A432A1,
    0xD51CEB44,
    0x75C4BF58,
    0xAD27DEFD,
    0x75E131C1,
    0x2265A06E,
    0x324A3713,
    0xBDF0AD99,
    0x98A6A6CB,
    0x10A85837,
    0xBC185800,
    0x5136F923,
    0x562A995E,
    0x230DE313,
    0x2316F66C,
    0x1B4276D6,
    0x8C35A602,
    0x8EA6C382,
    0x0C20E0B7,
    0xC4957B2B,
    0x5952BD66,
    0x8F44DC81,
    0x8778A3B5,
    0xA898A5CF,
    0x39226690,
    0xDFBB8B68,
    0xECC70B3D,
    0xB2F8425B,
    0x9F87220B,
    0x5F29689C,
    0xB3E3984C,
    0xEBB30B2E,
    0xE663A91A,
    0xDDC85B63,
    0x5E409580,
    0xB5E53C69,
    0xD7BD7225,
    0x0FD52275,
    0xE16F9862,
    0x96017835,
    0x580E8903,
    0xC24FE66C,
    0x69886138,
    0x12AFD553,
    0x60291075,
    0x822276BB,
    0x2A5248F4,
    0x71557F72,
    0xE0DA853D,
    0x2F9CF4E7,
    0x03C3C8B6,
    0x078224B5,
    0x631358C7,
    0x70071C2C,
    0xDD081A40,
    0xD3FDF4A6,
    0xA4973721,
    0xB2DC1C25,
    0xA210630A,
    0x1053E89D,
    0x3687FEA4,
    0x0DD0526D,
    0xB74A848E,
    0x1CA2F372,
    0x83A9F304,
    0x51AF9E2A,
    0x1BD2A49F,
    0x8D8139D7,
    0x6D26CA4B,
    0x7202CD94,
    0x3735ED54,
    0xF778798B,
    0x8261050D,
    0xC2B9671C,
    0xE5119F23,
    0x84EB1C5D,
    0x6ADABCD5,
    0x1A69E919,
    0x98E6F517,
    0x4866A231,
    0x02757FA1,
    0xCEE9BEC5,
    0x881599FC,
    0x77E76848,
    0x0EF209E6,
    0x1E646C85,
    0x5421CEC5,
    0x712627F2,
    0x74D87526,
    0x4B6EFEFE,
    0xA28CE144,
    0x656B9864,
    0x340813E0,
    0x78BFB89B,
    0xEF91AC74,
    0xC51B4B57,
    0x233F54A9,
    0xB5F26D78,
    0x258B4732,
    0x9C0A3102,
    0x074A813A,
    0xF8746975,
    0xA32B35D5,
    0xF5918A39,
    0x28F3A119,
    0x4CCD3499,
    0xA13F0134,
    0xE033EF96,
    0x59BB0F52,
    0xB61CBE99,
    0x77C84C60,
    0x08717647,
    0x4F00771E,
    0x7A0CCAE2,
    0x1990DA29,
    0xBB46423A,
    0x2F1B0A88,
    0xF9325AB3,
    0xFADF2679,
    0xF1C23620,
    0xE92D9DD1,
    0x8151F439,
    0x8063DCF7,
    0x71B70CAC,
    0xA740E109,
    0x206638D8,
    0xBE90D70A,
    0xADEFB392,
    0x2C59015C,
    0x271E23F3,
    0xBBB201F3,
    0xC2A852AB,
    0x9DE89847,
    0x2B9ABB77,
    0x9630F416,
    0x5585D6F9,
    0x5C71C874,
    0x6B737767,
    0x1A4DB910,
    0x1413A630,
    0xD6723B56,
    0x1A06C70F,
    0xDFF43E6B,
    0x03F7ADF1,
    0x95181B3B,
    0x30ED830A,
    0xD743CBE7,
    0x228BAA79,
    0xC80C14DC,
    0xFCA3B777,
    0x8CE7D991,
    0xC26EB027,
    0x302C793B,
    0xFDF3179D,
    0x85AB0D1B,
    0xF6C03752,
    0x3C3B75AF,
    0x1ACF3B6B,
    0x65E87A3B,
    0x9B4F2AA3,
    0xB53945D5,
    0x8EDA8297,
    0xC3567FEA,
    0x58C372EA,
    0xA87994F8,
    0x410D9906,
    0xEB2D688D,
    0x3525B33D,
    0x43772B36,
    0xAA4E7A50,
    0xE66F2422,
    0x08D4E06C,
    0xA90E17B2,
    0xCCF37330,
    0x78C96C83,
    0x01C5B80B,
    0x007AE4F4,
    0x1F77ABE0,
    0x2519EA6F,
    0xA1B3EFE2,
    0x8F6A40AC,
    0xBE9884C2,
    0xF2E48AED,
    0x2EBF3B61,
    0x1E3B1C16,
    0x5EE14C04,
    0x56C3373B,
    0x74EFAF83,
    0x0989803F,
    0x11D5CA03,
    0x175BBD69,
    0x7C43665C,
    0x32DCEE8F,
    0x0EF07048,
    0x1DC4E888,
    0xCFB01367,
    0x230BFB83,
    0x31D77164,
    0x4459CA10,
    0x042309C7,
    0xC5DF00A1,
    0x4EB57F5A,
    0xD24924E8,
    0x8D16703F,
    0x1286ECF4,
    0x400A9386,
    0x61DD4781,
    0x817320F6,
    0xEE0CF8FA,
    0x56313F71,
    0x283741E3,
    0xF3E6A2E1,
    0x9F46B6A3,
    0xEC8C7316,
    0xC8B3AA98,
    0x82B5EB9D,
    0x1F14E21E,
    0xB7B013EF,
    0x06491851,
    0x2ED11554,
    0xE9BD845A,
    0x69B1D965,
    0xC9E8E3D5,
    0x956F3ADF,
    0x99DF0F61,
    0x8F49CF4C,
    0xCCF960A5,
    0x298FF166,
    0x9823A50F,
    0x57B36962,
    0x94B7964A,
    0xBBCE5EDE,
    0x950C6B3D,
    0xA2DE6F4B,
    0x1AB991D8,
    0x106CAC0E,
    0x9F2C45C1,
    0x27EC3902,
    0x6AAC7041,
    0xB5AC36D0,
    0x6AEEA0C2,
    0x2C7DA366,
    0xC238350A,
    0x037EC577,
    0x3F760A59,
    0x55277724,
    0x314CCE00,
    0xA4CBFC1D,
    0x6D2DA1E2,
    0xA04E160B,
    0x7F7C94BA,
    0xDAAE86F6,
    0x87494A8C,
    0x3D977FE3,
    0x7EF4EF3C,
    0xEC0D0F9D,
    0x34FC9518,
    0x93F70089,
    0xCEFBAAB7,
    0xAC030FD6,
    0x50EEEBAA,
    0x215D2C7D,
    0x1ACCD7C3,
    0x30BBBA36,
    0xCC6D0616,
    0x9DC8E84D,
    0x37AC1411,
    0xB1A74D96,
    0x346D546A,
    0x38B6E7F3,
    0x63060A18,
    0x6167AA3D,
    0xFABF73A8,
    0x039BC823,
    0x0F799C38,
    0x154A641A,
    0x50D7EE9C,
    0xF2D9D6E5,
    0x8868DCAA,
    0x21EE2611,
    0xD05BE0E0,
    0x374DC9F9,
    0xE28DCC2E,
    0x87E25059,
    0xE463F764,
    0x33D8A755,
    0x3E98CA93,
    0x952EB9E5,
    0x5167929D,
    0x8CA98E39,
    0xBD12E305,
    0xC55C5774,
    0xC3B58EEA,
    0x3ABA5399,
    0xF2C1204E,
    0x094681FA,
    0xF5963414,
    0x493AF296,
    0xA0892330,
    0xCE29EB7C,
    0xA99AAD38,
    0xC143963F,
    0x82C1A900,
    0x9040F34C,
    0xA2EBF7B4,
    0xF72FFDA1,
    0xA06A2297,
    0x54290939,
    0xDAF58C13,
    0xBBBA5FD9,
    0xA7934DAF,
    0xF4F32564,
    0xD9BAC927,
    0x07BFF897,
    0xFE680C8C,
    0x964F48B5,
    0xBBFE403B,
    0x52A1B3B5,
    0x5FB4EE55,
    0x96819C00,
    0x653620EE,
    0x6A0E88EA,
    0x654CD99E,
    0x4423B51D,
    0xE3C57416,
    0x10A1C020,
    0x13DD4AE2,
    0xAE90E7FD,
    0x3824DC42,
    0xE1B6D22A,
    0xD0D1E9BD,
    0xB5820BEE,
    0xBA971749,
    0x1FA7C856,
    0x97FD1E9F,
    0xEE924050,
    0x6418B763,
    0x4367E0F9,
    0x8902E46A,
    0xF0F3C15E,
    0x87D4EF42,
    0x7CE876A3,
    0x4BFC04D7,
    0x814DEC14,
    0x8A72AAD6,
    0xDE4B1A5A,
    0xD382C6C1,
    0xD178B428,
    0x75393BB5,
    0x7E470901,
    0x7BB41002,
    0xC7F10BC3,
    0x18B428D2,
    0xB46D5F1F,
    0x79994F56,
    0xFED9401C,
    0x530521B6,
    0xF9D3DF10,
    0x20E5825A,
    0x1142E0EF,
    0x2155C573,
    0x93F9D937,
    0xA5FFF20D,
    0x023043EF,
    0xB0443CF7,
    0xC45D2BBF,
    0x22560B83,
    0x20269E1A,
    0xC1371D01,
    0x69F17A39,
    0xAE5D0151,
    0x06107BCC,
    0x5BF49A9A,
    0xA9020B71,
    0x3FF0DBEA,
    0x706546AC,
    0x9D025BF2,
    0x02BE0EDB,
    0x42BBC8AE,
    0x0ACE336B,
    0xA99C4873,
    0x0596B5CA,
    0xB24EE375,
    0xA7853A61,
    0x20C9CFB9,
    0x6F57D570,
    0x33049276,
    0x2CDA996D,
    0xD9F3C11E,
    0x25789924,
    0xFB201DD6,
    0x5DA0C3DE,
    0x2BC98863,
    0xEA33D438,
    0xFDF705C1,
    0x21BF942F,
    0xCBD1E56D,
    0xA835868A,
    0xDD9B74DF,
    0x47482939,
    0xCE7A4D84,
    0xD91570E0,
    0x8003F0AA,
    0x60DDAFFD,
    0xB572F25D,
    0x55F25F95,
    0x597BC8DA,
    0x5F5A0939,
    0xCE3D2755,
    0xC2EB238A,
    0xA11B0930,
    0x0F3F0CE5,
    0x71F519D3,
    0xC0A00840,
    0x10EFF824,
    0xDAC057B7,
    0x5D3C794E,
    0xAA8477A2,
    0x3D96E41A,
    0x12B36089,
    0xA09C23FE,
    0xEC4CE008,
    0xE269AA7E,
    0xDED06ADB,
    0xFBFB902E,
    0xB92AE516,
    0x82E733D1,
    0xF9DB4A02,
    0x469043A8,
    0x346F88E6,
    0x73CB79B7,
    0xD1DD68E2,
    0xEB3F1CE1,
    0xF6476107,
    0x73AD19E4,
    0xB27A241B,
    0x8928C691,
    0x85FBD20F,
    0x46C29B7D,
    0xF380C3E3,
    0x9A6A939F,
    0x2CE5E087,
    0xC4F7AD15,
    0xA8AA6152,
    0x504CF9B3,
    0x146B9773,
    0x21FDF8FD,
    0x6B4E79FD,
    0x72FD210C,
    0xA0B9F401,
    0x7F8F7D9F,
    0x9F68EFE4,
    0x1B8CEFF4,
    0xC7E9C3B7,
    0x795DFBFA,
    0xB0023B56,
    0xFF03D276,
    0x7359E5E1,
    0xD299C6C7,
    0x6981A2D1,
    0xEC4E1C0A,
    0x28848606,
    0xF65B0F57,
    0xA70625D6,
    0xD198E618,
    0x42BABCDF,
    0x3298EAA8,
    0xF1A3F5F2,
    0x9ED3DAD9,
    0x248EAF58,
    0x3B5BE3C0,
    0x02D85347,
    0xE9DD4FAC,
    0xA361C719,
    0x16C8C2DA,
    0x8CDEF4B8,
    0xF8ADCD97,
    0xFB2E2ECF,
    0xB2E92E55,
    0x4D133095,
    0x0BD74734,
    0xDBC22373,
    0x5282779F,
    0x9C951028,
    0x62510EF9,
    0x53546DE1,
    0x96FF7891,
    0x6AD37BEB,
    0xB0E5126E,
    0xC6455F4C,
    0x8196FDD7,
    0x22716847,
    0xA7AD03E9,
    0x5FE5AA3B,
    0x92A96007,
    0xBD114B5A,
    0x3394EC18,
    0x1C34C3AD,
    0xFD7CA1DE,
    0x0543DF43,
    0xA8A99451,
    0x9F41246B,
    0x92149687,
    0xCB3B7289,
    0xB116082D,
    0x2312A14A,
    0x5F656054,
    0x956E5352,
    0x34AD3B6B,
    0x4434414B,
    0xD98A422F,
    0x34FC08F4,
    0x50F371B9,
    0x125A956D,
    0xDB53EA93,
    0x68D2905E,
    0x9A3194BA,
    0x0416FF87,
    0x08F166C4,
    0x6FE1D4EA,
    0x4698632E,
    0x621AC1F4,
    0xEBA924A8,
    0xE2DFFE69,
    0x83A35346,
    0xFD6B24BC,
    0xDCF25A45,
    0x30025BDD,
    0xDE47444B,
    0x1C556B0F,
    0x948988E9,
    0x7F78313E,
    0x6FBF53E4,
    0x3242BDA5,
    0x4447AC25,
    0xF6AA1C34,
    0x30063DD1,
    0x58A425EC,
    0x4753193A,
    0xD6C654AC,
    0x8F64921D,
    0xDA79A391,
    0x57DD871D,
    0x8E21752A,
    0xA05540B5,
    0x13D0FD0D,
    0x86F25CCA,
    0x9D5B9118,
    0x31C81977,
    0x512CCB2B,
    0x8149EE62,
    0xC5332756,
    0xA63BB204,
    0xFF63D321,
    0xB59DC3E3,
    0x24E3B4A7,
    0xA18ACF31,
    0x257F789E,
    0x18BE0914,
    0x6D779AF7,
    0x28C881D3,
    0x4BE85E8B,
    0x4B5A0F7F,
    0xB8A83831,
    0x42EC5416,
    0x589D8301,
    0x5567E23C,
    0x3AD0D054,
    0xA5FB6004,
    0x755B64F6,
    0xE0C3F1DA,
    0x36CAFF0C,
    0x82958AE7,
    0x779F5F3C,
    0xF5B8D8C0,
    0x92F389DF,
    0x5161ED6D,
    0x0194D33B,
    0x603EF26D,
    0xB69610F2,
    0xF97AFA70,
    0x559B2B4C,
    0xCCFAADFD,
    0x44494219,
    0x537BC657,
    0x033B6E42,
    0x6F801AF7,
    0x771C32C1,
    0x549B1DD7,
    0xE4ACA247,
    0x3EB20FC2,
    0xBEE9924A,
    0xBC46A199,
    0x5A408269,
    0xF97F388A,
    0xF602A8BC,
    0xE0F29472,
    0x97DDEF38,
    0x2C69B4E4,
    0xB64D9D59,
    0xC39798F4,
    0xBA024CA5,
    0xA9005D4A,
    0xC800B630,
    0xEA2965EE,
    0x7E68570B,
    0xD25862AE,
    0xA077EFA2,
    0xC72990DD,
    0xE57E39B4,
    0x940FAB09,
    0x8D7F618A,
    0xCAE29E3B,
    0x84D7C464,
    0xA7184671,
    0xF3BC5A08,
    0xB06AE996,
    0x7085285C,
    0xDFB68F1F,
    0x73F6C053,
    0xB677A9B6,
    0x3A8E5D7C,
    0x111ED21A,
    0x613EDCE6,
    0xD473F8A5,
    0xC67561FB,
    0x6D7C8C81,
    0x3FB3187E,
    0x1D421BE8,
    0xB259BC8E,
    0x80AA9A05,
    0xDDA8AA9C,
    0x21A6F552,
    0x91F4873D,
    0xC71DA85F,
    0x4E14102E,
    0x682107FD,
    0x153C4536,
    0x1A5BD01D,
    0xD2F1B7F3,
    0x1C136363,
    0xEBA6415D,
    0x138D09B7,
    0x9FFA2110,
    0xAB61DBB6,
    0x397D1A9C,
    0x0FA5296F,
    0x48A5E428,
    0x76CF65C1,
    0xA632D673,
    0x8B802B41,
    0xB9EE14CE,
    0xCB0CA6D0,
    0x0579104F,
    0x7ABE294D,
    0xDA5CD7E4,
    0xB8A4C184,
    0x5E6DCC72,
    0x8C48E85A,
    0x7AA81C9C,
    0x618D1974,
    0xB8927BFB,
    0x5BF0DEE1,
    0xF4003E3E,
    0xC8ADE18D,
    0x2894223F,
    0x5650DB2B,
    0x35C553FF,
    0x19593A29,
    0x4FA98676,
    0xE3BD74B9,
    0xD56BE9E8,
    0xAA4033D1,
    0x3FCA2433,
    0x6EAC1A6F,
    0xA2A63124,
    0xA305D1F8,
    0x55772D82,
    0x4E05973D,
    0xF1206C80,
    0x71B41976,
    0xEF2BB658,
    0xF2AEFAE1,
    0x8B983F45,
    0x2296748C,
    0x87EBC008,
    0xBF05F6FC,
    0xA08136E8,
    0x2CD9DD52,
    0xDC3EE0A2,
    0xD3BBEBD9,
    0x5F83F862,
    0x79EDC74B,
    0x9F48F8A6,
    0xA0D2BE15,
    0x10C77944,
    0x1A248FC3,
    0x1F80F5F8,
    0x1E2A6911,
    0x814AA9CE,
    0x78657363,
    0xD80E2B5B,
    0xC5B7C4AD,
    0x9C784CB0,
    0xABF3344C,
    0x2A7D7A0C,
    0x17AFC08D,
    0xFAFE52DE,
    0x2E4072E9,
    0x86F0FF26,
    0x6B5CE6AD,
    0x60FDB6DD,
    0xF78B78CA,
    0x66185444,
    0x036F62E4,
    0xDC4A360C,
    0x4526A3CA,
    0x20B28BE7,
    0x0EE4B33B,
    0x19A4C567,
    0x3EF7DDDE,
    0x3B2D6F1F,
    0xEDA813C3,
    0x6E16CF52,
    0x23DF5A5B,
    0x8FC2BE7F,
    0x534A20EB,
    0x5CCE6213,
    0xD9B8F734,
    0xBB7A6B2A,
    0xFD41069C,
    0xD82084B1,
    0x7FBA825A,
    0xCFE30C5E,
    0xADB22A97,
    0xF7A83E4C,
    0x32460BB4,
    0x19CAC570,
    0x79D112AB,
    0xB626FA0E,
    0x785CA7F8,
    0xC8DD26A5,
    0xC4ADADC1,
    0x8E2B912A,
    0xD78F96A2,
    0x88A9592D,
    0xCF78B2A7,
    0x89C0A37B,
    0xAD000D72,
    0xF4497448,
    0x771E5FEF,
    0xFF27D8C1,
    0x4F036B06,
    0x8943B5EC,
    0xDCA4A196,
    0x75BA9309,
    0xCD1134E1,
    0x998014FB,
    0x0B69F351,
    0x6D7F99F4,
    0x83199DFF,
    0x3EED56A2,
    0x520A7A42,
    0xF7523D0D,
    0x1B4070D8,
    0x691AC352,
    0x6DEDB87E,
    0xE545CD0A,
    0xA316DDCB,
    0xF845920D,
    0xB2FCFAC5,
    0xE0100243,
    0xAE770955,
    0x4B28D7D3,
    0x3B6C0CA5,
    0x5E2677BD,
    0x53898790,
    0x2BD7B591,
    0x892E6BA7,
    0x77EC7A1D,
    0x2CAEEB6F,
    0x93A543B2,
    0x2AD12738,
    0x94D02A72,
    0x82B99541,
    0x5FB78A8D,
    0x00337DAA,
    0xF01A076C,
    0x1D43115A,
    0x74633C35,
    0x2B7C0246,
    0x60F2B86A,
    0xBC73BE3B,
    0xD4EB5A9E,
    0x9223B150,
    0x079ED3F8,
    0x834C6F2E,
    0xCF057F27,
    0x7DAA7F4A,
    0xF38350D2,
    0x9595436D,
    0x5A433D2C,
    0x033960C8,
    0x09AD443A,
    0x3BE32FA2,
    0xFC7C33B6,
    0xF463C71D,
    0x88B08A53,
    0x7515D061,
    0xC0194A48,
    0x85B2D598,
    0xD912730B,
    0x9C898C7E,
    0x8A087903,
    0x88A0DEA0,
    0xE01F2B9E,
    0xCB3A0335,
    0xF493161A,
    0xA7AB789B,
    0x9FFB20BB,
    0x6D13A7F7,
    0x445AB370,
    0x4207D91E,
    0x08988A8B,
    0xA9A13AD2,
    0x7E5553CD,
    0xCD487638,
    0xA8B49E29,
    0xD76F4FBB,
    0x70BC168B,
    0x437A3C7E,
    0x4FB77296,
    0xD89FDF21,
    0xD3922695,
    0xA399002B,
    0xC2F4E68E,
    0x470F00A3,
    0x6F6245B6,
    0x0992648D,
    0x616498ED,
    0x78A58314,
    0x856D89FD,
    0x16AA49D3,
    0x0BCA417C,
    0x7CCB4BE7,
    0xF039AC51,
    0x1DAC7920,
    0xCCF9D3BB,
    0xFD432119,
    0x21D5D4A0,
    0xF401CD39,
    0x917BDF83,
    0x5F2F65A2,
    0x1DEAB74C,
    0x625A87B4,
    0x0BAD69BE,
    0x6A9896D0,
    0x21ECF07F,
    0x3D2B1822,
    0x8F862700,
    0xB0A49131,
    0x834815BD,
    0x8AD278C4,
    0x573A83FB,
    0x5C800AB8,
    0xA3DDA145,
    0xF2D90BD6,
    0xB972C401,
/*
};

const uint32_t BFLOC blowfish_P[18] __attribute__((aligned(0x100))) =
{
*/
    0x2683A24E,
    0xBFEFD1CD,
    0x3B9D95A9,
    0x9E26E9D0,
    0xD013180A,
    0x14061CC8,
    0xC79DCF73,
    0xF0F0D118,
    0xBFB3894E,
    0x04A16FF1,
    0xF758A8E4,
    0xA343C3AA,
    0x345B3D5B,
    0x967E842B,
    0x8A085327,
    0x783C8B8F,
    0xDA0FB98E,
    0x52B3FA03
};

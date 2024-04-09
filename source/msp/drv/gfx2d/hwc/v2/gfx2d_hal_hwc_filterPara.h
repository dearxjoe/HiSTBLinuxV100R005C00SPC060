/***********************************************************************************************
*
* Copyright (C) 2018 Hisilicon Technologies Co., Ltd.  All rights reserved.
*
* This program is confidential and proprietary to Hisilicon  Technologies Co., Ltd. (Hisilicon),
* and may not be copied, reproduced, modified, disclosed to others, published or used, in
* whole or in part, without the express prior written permission of Hisilicon.
*
************************************************************************************************
File Name      : gfx2d_hal_hwc_filterpara.h
Version        : Initial Draft
Author         :
Created        : 2018/01/01
Description    :
Function List  :


History        :
Date                 Author                  Modification
2018/01/01            sdk                    Created file
************************************************************************************************/

#ifndef _GFX2D_HAL_HWC_FILTERPARA_H_
#define _GFX2D_HAL_HWC_FILTERPARA_H_

/**********************************************************************************************/


/**********************************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif  /*__cplusplus*/
#endif  /*__cplusplus*/

/***************************** Macro Definition ***********************************************/


#define HWC_FILTER_LEVELS           7   /*�˲��ȼ�,��Ϊ7��*/
#define HWC_FILTER_PHASE            17  /*��λ,32��λ,��Ҫ17��ϵ��*/
#define HWC_FILTER_HORIZON_LUM_TAP  8   /*ˮƽ�����˲�����*/
#define HWC_FILTER_VERTICAL_LUM_TAP 4   /*��ֱ�����˲�����*/
#define HWC_FILTER_HORIZON_CHM_TAP  8   /*ˮƽɫ���˲�����*/
#define HWC_FILTER_VERTICAL_CHM_TAP 4   /*��ֱɫ���˲�����*/

/*************************** Structure Definition *********************************************/

/********************** Global Variable declaration *******************************************/

/*��ֱ�˲�ϵ��*/
static HI_S32 gs_as32VerticalCoef[] =
{
    /* ratio > 1 */
    0x2c000c,   0x3fc000c,
    0x2c000b,   0x3fc000d,
    0x2c000a,   0x3fb000f,
    0x2c0009,   0x3fb0010,
    0x2b0008,   0x3fb0012,
    0x2b0007,   0x3fb0013,
    0x2a0006,   0x3fb0015,
    0x2a0005,   0x3fb0016,
    0x290004,   0x3fc0017,
    0x280003,   0x3fc0019,
    0x280002,   0x3fc001a,
    0x270001,   0x3fc001c,
    0x270000,   0x3fc001d,
    0x250000,   0x3fd001e,
    0x2403ff,   0x3fd0020,
    0x2203ff,   0x3fe0021,
    0x2203fe,   0x3fe0022,
    0x0,        0x0,        //invalid param, 16byte align

    /* ratio = 1 */
    0x3f0000,   0x0,
    0x3f03fe,   0x3,
    0x3f03fc,   0x5,
    0x3f03fa,   0x3ff0008,
    0x3e03f8,   0x3ff000b,
    0x3e03f7,   0x3fe000d,
    0x3c03f6,   0x3fe0010,
    0x3b03f5,   0x3fd0013,
    0x3a03f4,   0x3fc0016,
    0x3903f4,   0x3fb0018,
    0x3703f4,   0x3fa001b,
    0x3403f4,   0x3fa001e,
    0x3303f4,   0x3f90020,
    0x3103f4,   0x3f80023,
    0x2f03f4,   0x3f70026,
    0x2d03f5,   0x3f60028,
    0x2a03f6,   0x3f6002a,
    0x0,        0x0,        //invalid param, 16byte align

    /* ratio <1 && ratio >=0.75 */
    0x3f0000,   0x0,
    0x3f0000,   0x1,
    0x3f03fe,   0x3,
    0x3f03fd,   0x3ff0005,
    0x3f03fc,   0x3ff0006,
    0x3d03fc,   0x3ff0008,
    0x3c03fb,   0x3ff000a,
    0x3b03fb,   0x3fe000c,
    0x3803fb,   0x3fe000f,
    0x3603fb,   0x3fe0011,
    0x3403fa,   0x3fe0014,
    0x3203fb,   0x3fd0016,
    0x2f03fb,   0x3fd0019,
    0x2c03fb,   0x3fd001c,
    0x2a03fb,   0x3fc001f,
    0x2703fb,   0x3fc0022,
    0x2403fc,   0x3fc0024,
    0x0,        0x0,        //invalid param, 16byte align

    /* ratio <0.75 && ratio >= 0.5 */
    0x31000a,   0x3fb000a,
    0x330008,   0x3fa000b,
    0x320007,   0x3fa000d,
    0x330005,   0x3f9000f,
    0x330004,   0x3f90010,
    0x320003,   0x3f90012,
    0x320001,   0x3f90014,
    0x320000,   0x3f80016,
    0x3103ff,   0x3f80018,
    0x3003fe,   0x3f8001a,
    0x2f03fd,   0x3f8001c,
    0x2e03fc,   0x3f8001e,
    0x2c03fc,   0x3f80020,
    0x2c03fb,   0x3f80021,
    0x2a03fa,   0x3f90023,
    0x2803fa,   0x3f90025,
    0x2703f9,   0x3f90027,
    0x0,        0x0,        //invalid param, 16byte align

    /* ratio < 0.5 && ratio >=0.33 */
    0x170011,   0x70011,
    0x170011,   0x70011,
    0x160010,   0x80012,
    0x160010,   0x80012,
    0x160010,   0x80012,
    0x17000f,   0x80012,
    0x16000f,   0x90012,
    0x15000f,   0x90013,
    0x16000e,   0x90013,
    0x16000e,   0x90013,
    0x15000e,   0xa0013,
    0x16000d,   0xa0013,
    0x15000d,   0xa0014,
    0x14000d,   0xb0014,
    0x15000c,   0xb0014,
    0x15000c,   0xb0014,
    0x15000c,   0xb0014,
    0x0,        0x0,        //invalid param, 16byte align

    /* ratio < 0.33 && ratio >= 0.25 */
    0x130011,   0xb0011,
    0x130011,   0xb0011,
    0x130010,   0xc0011,
    0x130010,   0xc0011,
    0x130010,   0xc0011,
    0x130010,   0xc0011,
    0x130010,   0xc0011,
    0x14000f,   0xc0011,
    0x13000f,   0xd0011,
    0x12000f,   0xd0012,
    0x12000f,   0xd0012,
    0x12000f,   0xd0012,
    0x12000f,   0xd0012,
    0x13000e,   0xd0012,
    0x12000e,   0xe0012,
    0x12000e,   0xe0012,
    0x12000e,   0xe0012,
    0x0,        0x0,        //invalid param, 16byte align

    /* ratio < 0.25 */
    0x110011,   0xd0011,
    0x120010,   0xd0011,
    0x120010,   0xd0011,
    0x120010,   0xd0011,
    0x120010,   0xd0011,
    0x120010,   0xd0011,
    0x120010,   0xd0011,
    0x110010,   0xe0011,
    0x110010,   0xe0011,
    0x12000f,   0xe0011,
    0x12000f,   0xe0011,
    0x12000f,   0xe0011,
    0x12000f,   0xe0011,
    0x12000f,   0xe0011,
    0x12000f,   0xe0011,
    0x12000f,   0xe0011,
    0x11000f,   0xf0011,
    0x0,        0x0,        //invalid param, 16byte align
};


/* ˮƽ�˲�ϵ�� */
static HI_S32 gs_as32HorizonCoef[] =
{
    /* ratio > 1 */
    0x7ff000,    0x3fc01c38,    0x2,
    0x6ff000,    0x3fb02438,    0x2,
    0x4ff400,    0x3fb02c37,    0x2,
    0x3ff400,    0x3fa03437,    0x2,
    0x1ff800,    0x3fa03837,    0x2,
    0xff800,      0x3fa04036,    0x2,
    0x3ffffc00,    0x3f904835,    0x2,
    0x3feffc00,    0x3f905034,    0x2,
    0x3fdffc00,    0x3f905833,    0x2,
    0x3fc00000,    0x3f806032,    0x2,
    0x3fb00000,    0x3f806831,    0x2,
    0x3fa00000,    0x3f807030,    0x2,
    0x3fa00400,    0x3f80782d,    0x2,
    0x3f900400,    0x3f80802c,    0x2,
    0x3f900400,    0x3f80882a,    0x2,
    0x3f800400,    0x3f809029,    0x2,
    0x3f800800,    0x3f809826,    0x2,
    0x0,                     //invalid param, 16byte align

    /*ratio=1*/
    0x0,                 0x3f,              0x0,
    0x3ff00000,    0x83f,             0x0,
    0x3fd00400,    0x3ff0103f,    0x0,
    0x3fc00400,    0x3ff0183e,    0x0,
    0x3fb00400,    0x3fe0203e,    0x0,
    0x3fa00400,    0x3fe0283d,    0x0,
    0x3f900800,    0x3fd0303c,    0x0,
    0x3f900800,    0x3fc03c3a,    0x0,
    0x3f800800,    0x3fc04438,    0x1,
    0x3f800800,    0x3fb05036,    0x1,
    0x3f800800,    0x3fb05834,    0x1,
    0x3f700800,    0x3fa06433,    0x1,
    0x3f700800,    0x3fa07030,    0x1,
    0x3f700800,    0x3f90782f,    0x1,
    0x3f800800,    0x3f90842b,    0x1,
    0x3f800800,    0x3f809029,    0x1,
    0x3f800800,    0x3f809826,    0x2,
    0x0,                            //invalid param, 16byte align

    /* ratio <1 && ratio >=0.75 */
    0xffe000,    0x3f803c2f,    0x3,
    0xdfe000,    0x3f704031,    0x3,
    0xcfe000,    0x3f704831,    0x2,
    0xafe000,    0x3f704c32,    0x2,
    0x9fe000,    0x3f705431,    0x2,
    0x7fe400,    0x3f705831,    0x2,
    0x6fe400,    0x3f706031,    0x1,
    0x5fe400,    0x3f706830,    0x1,
    0x4fe800,    0x3f806c2e,    0x1,
    0x2fe800,    0x3f80742f,    0x0,
    0x1fec00,    0x3f80782e,    0x0,
    0xfec00,     0x3f90802d,    0x3ff,
    0x3fffec00,    0x3f90882c,    0x3ff,
    0x3feff000,    0x3fa08c2a,    0x3ff,
    0x3fdff000,    0x3fa0902b,    0x3fe,
    0x3fcff400,    0x3fb09828,    0x3fe,
    0x3fcff400,    0x3fc09c27,    0x3fd,
    0x0,                            //invalid param, 16byte align

    /* ratio <0.75 && ratio >= 0.5 */
    0x1200400,    0x10481e,    0x3fc,
    0x1200400,    0x204c1c,    0x3fc,
    0x1100400,    0x204c1d,    0x3fc,
    0x1100000,    0x20501d,    0x3fc,
    0x1000000,    0x30501d,    0x3fc,
    0xf00000,    0x30541d,    0x3fc,
    0xfffc00,    0x40581c,    0x3fc,
    0xeffc00,    0x40581d,    0x3fc,
    0xeffc00,    0x505c1b,    0x3fc,
    0xdff800,    0x505c1d,    0x3fc,
    0xcff800,    0x60601c,    0x3fc,
    0xcff800,    0x60601c,    0x3fc,
    0xbff800,    0x70601c,    0x3fc,
    0xbff400,    0x70641b,    0x3fd,
    0xaff400,    0x80641b,    0x3fd,
    0xaff400,    0x80681a,    0x3fd,
    0x9ff400,    0x90681a,    0x3fd,
    0x0,                            //invalid param, 16byte align

    /* ratio < 0.5 && ratio >=0.33 */
    0xf01c00,    0x703c13,    0x1,
    0xf01c00,    0x803c12,    0x1,
    0xe01c00,    0x803c12,    0x2,
    0xe01c00,    0x803c12,    0x2,
    0xe01c00,    0x803c12,    0x2,
    0xe01800,    0x904011,    0x2,
    0xd01800,    0x904012,    0x2,
    0xd01800,    0x904012,    0x2,
    0xd01800,    0x904011,    0x3,
    0xd01400,    0x904012,    0x3,
    0xc01400,    0xa04012,    0x3,
    0xc01400,    0xa04012,    0x3,
    0xc01400,    0xa04411,    0x3,
    0xc01400,    0xa04411,    0x3,
    0xc01000,    0xb04410,    0x4,
    0xb01000,    0xb04411,    0x4,
    0xb01000,    0xb04411,    0x4,
    0x0,                            //invalid param, 16byte align

    /* ratio < 0.33 && ratio >= 0.25 */
    0xf01c00,    0x703c13,    0x1,
    0xf01c00,    0x803c12,    0x1,
    0xe01c00,    0x803c12,    0x2,
    0xe01c00,    0x803c12,    0x2,
    0xe01c00,    0x803c12,    0x2,
    0xe01800,    0x904011,    0x2,
    0xd01800,    0x904012,    0x2,
    0xd01800,    0x904012,    0x2,
    0xd01800,    0x904011,    0x3,
    0xd01400,    0x904012,    0x3,
    0xc01400,    0xa04012,    0x3,
    0xc01400,    0xa04012,    0x3,
    0xc01400,    0xa04411,    0x3,
    0xc01400,    0xa04411,    0x3,
    0xc01000,    0xb04410,    0x4,
    0xb01000,    0xb04411,    0x4,
    0xb01000,    0xb04411,    0x4,
    0x0,                            //invalid param, 16byte align

    /* ratio < 0.25 */
    0xe02000,    0x803812,    0x2,
    0xe02000,    0x803811,    0x3,
    0xe02000,    0x803811,    0x3,
    0xe01c00,    0x903c10,    0x3,
    0xd01c00,    0x903c11,    0x3,
    0xd01c00,    0x903c11,    0x3,
    0xd01c00,    0x903c11,    0x3,
    0xd01c00,    0x903c11,    0x3,
    0xd01800,    0xa03c10,    0x4,
    0xd01800,    0xa03c10,    0x4,
    0xc01800,    0xa03c11,    0x4,
    0xc01800,    0xa04010,    0x4,
    0xc01800,    0xa04010,    0x4,
    0xc01400,    0xb04010,    0x4,
    0xc01400,    0xb0400f,    0x5,
    0xb01400,    0xb04010,    0x5,
    0xb01400,    0xb04010,    0x5,
    0x0,                            //invalid param, 16byte align
};


/******************************* API declaration **********************************************/
#ifdef __cplusplus
#if __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __cplusplus */

#endif /* _GFX2D_HAL_HWC_FILTERPARA_H_*/
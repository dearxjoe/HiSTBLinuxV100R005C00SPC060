/******************************************************************************
*
* Copyright (C) 2014 Hisilicon Technologies Co., Ltd.  All rights reserved.
*
* This program is confidential and proprietary to Hisilicon  Technologies Co., Ltd. (Hisilicon),
*  and may not be copied, reproduced, modified, disclosed to others, published or used, in
* whole or in part, without the express prior written permission of Hisilicon.
*
*****************************************************************************
File Name   : drv_pq_define.h
Author      : sdk
Version     : v4.0
Abstract    :
*****************************************************************************/

#ifndef _DRV_PQ_DEFINE_V4_H_
#define _DRV_PQ_DEFINE_V4_H_

#include "hi_type.h"

/*****************************************************************************
PQ Software Define
*****************************************************************************/
#define PQ_VERSION      "1.0.2.0"
#define PQ_DEF_NAME     "pqparam"
#define PQ_MAGIC_NUM    "HIPQ"

#if defined(CHIP_TYPE_hi3798cv200)
#define PQ_CHIP_NAME    "3798CV200"
#define PQ_DCI_SUPPORT
/* acc for pq_debug compile */
#define PQ_ACC_45_SUPPORT
#define PQ_HDR_TM_512_SUPPORT

#ifndef HI_PQ_TEE_SUPPORT
#define TNR_NOTEE_SUPPORT
#endif

#elif defined(CHIP_TYPE_hi3798mv200) || defined(CHIP_TYPE_hi3798mv300)
#define PQ_CHIP_NAME    "3798MV200"
#define PQ_ACC_SUPPORT
#define PQ_ACC_45_SUPPORT
#define GFXZME_REDUCE_SUPPORT
#define SHARPEN_FHD_SUPPORT
#define PQ_HDR_TM_64_SUPPORT
#define PQ_HDR_GFX_TM_SUPPORT

#define PQ_HDR_ACM_SUPPORT

#ifdef HI_PQ_TEE_SUPPORT
#define TNR_TEE_SUPPORT
#else
#define TNR_NOTEE_SUPPORT
#endif
#ifdef HI_PQ_VER_YDJC
#define PQ_YDJC_MCDI_SPLIT_DEFAULT
#endif
#elif defined(CHIP_TYPE_hi3798mv310)
#define PQ_CHIP_NAME    "3798MV310"
#define PQ_ACC_SUPPORT
#define PQ_ACC_27_SUPPORT
#define GFXZME_REDUCE_SUPPORT
#define SHARPEN_FHD_SUPPORT
#define SHARPEN_CFG_STYLE_COEF
#define PQ_HDR_TM_64_SUPPORT
#define PQ_HDR_SM_64_SUPPORT
#define PQ_HDR_GFX_TM_SUPPORT

#define PQ_HDR_ACM_SUPPORT
#define PQ_HDR_ACC_27_SUPPORT

#ifdef HI_PQ_TEE_SUPPORT
#define TNR_TEE_SUPPORT
#else
#define TNR_NOTEE_SUPPORT
#endif
#ifdef HI_PQ_VER_YDJC
#define PQ_YDJC_MCDI_SPLIT_DEFAULT
#endif

#elif defined(CHIP_TYPE_hi3796mv200) || defined(CHIP_TYPE_hi3716mv450)
#define PQ_CHIP_NAME    "3796MV200"
#define PQ_ACC_SUPPORT
#define PQ_ACC_45_SUPPORT
#define GFXZME_REDUCE_SUPPORT
#define SHARPEN_FHD_SUPPORT
#define PQ_HDR_TM_64_SUPPORT
#define PQ_HDR_SM_64_SUPPORT
#define PQ_HDR_GFX_TM_SUPPORT

#ifdef HI_PQ_TEE_SUPPORT
#define TNR_TEE_SUPPORT
#else
#define TNR_NOTEE_SUPPORT
#endif
#endif

//#define PQ_SIZE_UNUSED_CODE

/*****************************************************************************
PQ Proc Enable Define
*****************************************************************************/
#ifdef HI_PQ_PROC_SUPPORT
#define PQ_PROC_CTRL_SUPPORT
#endif

#define PQ_PROC_CMD_NAMELENGTH 64

typedef enum hiPQ_PROC_PRINT_LEVEL_E
{
    PQ_PROC_PRINT_LEVEL_ORI = 0x0,
    PQ_PROC_PRINT_LEVEL1    = 0x1,
    PQ_PROC_PRINT_LEVEL2    = 0x2,
    PQ_PROC_PRINT_LEVEL3    = 0x3,

    PPQ_ROC_PRINT_BUTT
} PQ_PROC_PRINT_LEVEL_E;

/*****************************************************************************
PQ Head File Define
*****************************************************************************/
#define STR_LEN_8                8
#define STR_LEN_32               32
#define STR_LEN_80               80
#define STR_LEN_256              256
#define STR_LEN_1024             1024

#define ACM_Y_NUM                9
#define ACM_S_NUM                13
#define ACM_H_NUM                29

#define PHY_REG_MAX              2560
#define SOFT_REG_MAX             512
#define PQ_ALG_MODULE_MAX        32

#define PQ_HDR_TM_512_CLUT_SIZE  512

#define PQ_HDR_TM_64_CLUT_SIZE   64
#define PQ_HDR_TM_8_STEP_SIZE    8
#define PQ_HDR_SM_64_CLUT_SIZE   64
#define PQ_HDR_SM_8_STEP_SIZE    8

#define PQ_GFXHDR_TM_CLUT_SIZE   32
#define PQ_HDR_ACM_REGCFG_SIZE   40

/*****************************************************************************
PQ Tools Virtual Command
*****************************************************************************/

#define PQ_CMD_VIRTUAL_BIN_EXPORT                                 0xffffff00
#define PQ_CMD_VIRTUAL_BIN_IMPORT                                 0xffffff04
#define PQ_CMD_VIRTUAL_BIN_FIXED                                  0xffffff08
#define PQ_CMD_VIRTUAL_DRIVER_VERSION                             0xffffffff

#define PQ_CMD_VIRTUAL_HD_CTRL                                    0xffff0001
#define PQ_CMD_VIRTUAL_SD_CTRL                                    0xffff0002
#define PQ_CMD_VIRTUAL_DEMO_CTRL                                  0xffff0003
#define PQ_CMD_VIRTUAL_SOURCE_SELECT                              0xffff0004
#define PQ_CMD_VIRTUAL_READ_REGTYPE                               0xffff0005
#define PQ_CMD_VIRTUAL_OUT_MODE                                   0xffff0006

#define PQ_CMD_VIRTUAL_ACM_RECMD_LUT                              0xffff0100
#define PQ_CMD_VIRTUAL_ACM_BLUE_LUT                               0xffff0101
#define PQ_CMD_VIRTUAL_ACM_GREEN_LUT                              0xffff0102
#define PQ_CMD_VIRTUAL_ACM_BG_LUT                                 0xffff0103
#define PQ_CMD_VIRTUAL_ACM_FLESH_LUT                              0xffff0104
#define PQ_CMD_VIRTUAL_ACM_6BCOLOR_LUT                            0xffff0105

#define PQ_CMD_VIRTUAL_DCI_LUT                                    0xffff0200
#define PQ_CMD_VIRTUAL_DCI_BS_LUT                                 0xffff0201

#define PQ_CMD_VIRTUAL_GAMM_PARA                                  0xffff0301
#define PQ_CMD_VIRTUAL_DEGAMM_PARA                                0xffff0302
#define PQ_CMD_VIRTUAL_GFX_GAMM_PARA                              0xffff0303
#define PQ_CMD_VIRTUAL_GFX_DEGAMM_PARA                            0xffff0304

#define PQ_CMD_VIRTUAL_HDR_TM_LUT                                 0xffff0401
#define PQ_CMD_VIRTUAL_HDR_PARA_MODE                              0xffff0402
#define PQ_CMD_VIRTUAL_HDR_SMAP                                   0xffff0407
#define PQ_CMD_VIRTUAL_HDR_TMAP                                   0xffff0408

#define PQ_CMD_VIRTUAL_ACC_LUT                                    0xffff0500

#define PQ_CMD_VIRTUAL_GFXHDR_MODE                                0xffff0600
#define PQ_CMD_VIRTUAL_GFXHDR_STEP                                0xffff0601
#define PQ_CMD_VIRTUAL_GFXHDR_TMAP                                0xffff0602

#define PQ_CMD_VIRTUAL_HDR_ACM_MODE                               0xffff0700
#define PQ_CMD_VIRTUAL_HDR_ACM_REGCFG                             0xffff0701
#define PQ_CMD_VIRTUAL_HDR_DYN_MODE                               0xffff0702

/*****************************************************************************
PQ Bin Define
*****************************************************************************/

/**
* PQ Param
**/

/*PQ Module类型*/
typedef enum hiPQ_ALG_MODULE_E
{
    PQ_ALG_MODULE_DCI = 0,
    PQ_ALG_MODULE_ACM,
    PQ_ALG_MODULE_BUTT,
} PQ_ALG_MODULE_E;

typedef struct hiPQ_FILE_HEADER_S
{
    HI_U32          u32FileCheckSum;             /* 参数文件的校验和，File Header（除此变量外）和data的所有逐字节校验和，用于检验参数正确性和判断是否dirty */
    HI_U32          u32ParamSize;                /* 参数文件大小，包括File header和data */
    HI_CHAR         u8Version[STR_LEN_32];       /* 版本号，字符串表示 */
    HI_CHAR         u8Author[STR_LEN_32];        /* 参数调试者签名，字符串表示 */
    HI_CHAR         u8Desc[STR_LEN_1024];        /* 版本描述，字符串表示 */
    HI_CHAR         u8Time[STR_LEN_32];          /* 参数文件生成（烧写）时间，[0] ~ [5]：yy mm dd hh mm ss，[6]~[7]保留。该时间由PQ工具从PC上自动获取，无需用户输入 */
    HI_CHAR         u8ChipName[STR_LEN_32];      /* 参数文件生成时的ChipName */
    HI_CHAR         u8SDKVersion[STR_LEN_80];    /* 参数文件生成时的SDK版本 */
    HI_U32          u32PhyRegNum;                /* 参数文件保存的物理寄存器个数 */
    HI_U32          u32SoftRegNum;               /* 参数文件保存的软算法变量个数 */
    HI_U32          u32Offset[PQ_ALG_MODULE_MAX];/* 算法系数偏移地址 */
    HI_U32          u32PhyOffset;                /* 算法物理寄存器偏移地址 */
} PQ_FILE_HEADER_S;


/**
* DCI Coef
**/

/*DCI曲线配置表*/
typedef struct hiPQ_DCI_LUT_S
{
    HI_S16 s16WgtCoef0[33];
    HI_S16 s16WgtCoef1[33];
    HI_S16 s16WgtCoef2[33];
    HI_U16 u16Gain0;
    HI_U16 u16Gain1;
    HI_U16 u16Gain2;
} PQ_DCI_LUT_S;

/*DCI Black Stretch Lut*/
typedef struct hiPQ_DCI_BSLUT_S
{
    HI_S16 s16BSDelta[320];
} PQ_DCI_BSLUT_S;

typedef struct hiPQ_DCI_COEF_S
{
    PQ_DCI_LUT_S    stPqDciLut;
    PQ_DCI_BSLUT_S  stPqDciBSLut;
} PQ_DCI_COEF_S;


/**
*ACC Coef
**/

#if defined(PQ_ACC_45_SUPPORT)
#define ACC_TABLE_LEVEL_MAX       5
#define ACC_TABLE_LEVEL_PARA      9
#elif defined(PQ_ACC_27_SUPPORT)
#define ACC_TABLE_LEVEL_MAX       3
#define ACC_TABLE_LEVEL_PARA      9
#else
#define ACC_TABLE_LEVEL_MAX       3
#define ACC_TABLE_LEVEL_PARA      9
#endif

typedef struct hi_PQ_ACC_LUT_S
{
    HI_S32 as32AccLut[ACC_TABLE_LEVEL_MAX][ACC_TABLE_LEVEL_PARA];
} PQ_ACC_LUT_S;

/**
* ACM Coef
**/

typedef struct hiPQ_ACM_LUT_S
{
    HI_S16 as16Y[ACM_Y_NUM][ACM_S_NUM][ACM_H_NUM];   /**<  */
    HI_S16 as16H[ACM_Y_NUM][ACM_S_NUM][ACM_H_NUM];   /**<  */
    HI_S16 as16S[ACM_Y_NUM][ACM_S_NUM][ACM_H_NUM];   /**<  */
} PQ_ACM_LUT_S;

typedef struct hiPQ_ACM_MODE_S
{
    PQ_ACM_LUT_S stModeRecmd;
    PQ_ACM_LUT_S stModeBlue;
    PQ_ACM_LUT_S stModeGreen;
    PQ_ACM_LUT_S stModeBG;
    PQ_ACM_LUT_S stModeFleshtone;
    PQ_ACM_LUT_S stMode6BColor;
} PQ_ACM_MODE_S;

typedef struct hiPQ_ACM_COEF_S
{
    PQ_ACM_MODE_S stModeLut;
} PQ_ACM_COEF_S;

/* hdr acc alg */
typedef struct HI_PQ_HDR_DYN_TM_TUNING_S
{
    // 虚拟寄存器，PQ tool xml调节
    HI_U32 u32MaxLumiDisplay;       //[0,100000000]~[0,10000nits]

    HI_U32 u32DarkDetailGain;       //[0,4096]~[0,4.0]
    HI_U32 u32DarkDetailGmm;        //[0,4096]~[0,4.0]
    HI_U32 u32BrightDetailGain;     //[0,4096]~[0,4.0]
    HI_U32 u32BrightDetailGmm;      //[0,4096]~[0,4.0]
    HI_U32 u32DynTmGain;            //[0,4096]~[0,4.0]
    HI_U32 u32DynTmGmm;             //[0,4096]~[0,4.0]

    HI_U32 u32DarkSceneDynTM;       //[0,1024]~[0,1.0]
    HI_U32 u32DarkLimit;            //[0,65536]
    HI_U32 u32BleachingLevel;       //[0,100]

    HI_U32 u32TemporalSmooth;       //[0,1024]~[0,1.0] default:1024;
} HI_PQ_HDR_DYN_TM_TUNING_S;

/*Hdr 调优支持场景类型*/
typedef enum hiPQ_TOOL_HDR_E
{
    PQ_TOOL_HDR2SDR = 0,
    PQ_TOOL_SDR2HDR = 1,

    PQ_TOOL_HDR_BUTT,
} PQ_TOOL_HDR_E;

#if defined(PQ_HDR_TM_512_SUPPORT)
typedef struct hiPQ_HDR_TM_COEF_S
{
    /*ToneMapping*/
    HI_S16 as16TMLut[20][PQ_HDR_TM_512_CLUT_SIZE];
} PQ_HDR_TM_COEF_S;
#elif defined(PQ_HDR_TM_64_SUPPORT)
typedef struct hiPQ_HDR_TM_COEF_S
{
    HI_U32 au32Step[PQ_TOOL_HDR_BUTT][PQ_HDR_TM_8_STEP_SIZE];
    HI_U32 au32Num[PQ_TOOL_HDR_BUTT][PQ_HDR_TM_8_STEP_SIZE];
    HI_U32 au32Pos[PQ_TOOL_HDR_BUTT][PQ_HDR_TM_8_STEP_SIZE];
    HI_U32 au32Clut[PQ_TOOL_HDR_BUTT][PQ_HDR_TM_64_CLUT_SIZE];
} PQ_HDR_TM_COEF_S;
#endif

#if defined(PQ_HDR_SM_64_SUPPORT)
typedef struct hiPQ_HDR_SM_COEF_S
{
    HI_U32 au32Step[PQ_TOOL_HDR_BUTT][PQ_HDR_SM_8_STEP_SIZE];
    HI_U32 au32Num[PQ_TOOL_HDR_BUTT][PQ_HDR_SM_8_STEP_SIZE];
    HI_U32 au32Pos[PQ_TOOL_HDR_BUTT][PQ_HDR_SM_8_STEP_SIZE];
    HI_U32 au32Clut[PQ_TOOL_HDR_BUTT][PQ_HDR_SM_64_CLUT_SIZE];
} PQ_HDR_SM_COEF_S;
#endif

#if defined(PQ_HDR_GFX_TM_SUPPORT)
typedef struct hiPQ_GFXHDR_TM_COEF_S
{
    HI_U32 au32TMSdr2HDRClut[PQ_GFXHDR_TM_CLUT_SIZE];
    HI_U32 au32TMSdr2HLGClut[PQ_GFXHDR_TM_CLUT_SIZE];
} PQ_GFXHDR_TM_COEF_S;
#endif

#if defined(PQ_HDR_ACM_SUPPORT)
typedef struct hiPQ_BIN_HDR_ACM_REGCFG_S
{
    HI_S32 as32Regcfg[PQ_TOOL_HDR_BUTT][PQ_HDR_ACM_REGCFG_SIZE];
} PQ_BIN_HDR_ACM_REGCFG_S;
#endif

#if defined(PQ_HDR_ACC_27_SUPPORT)
typedef struct hiPQ_BIN_HDR_DYN_TUNING_S
{
    HI_PQ_HDR_DYN_TM_TUNING_S astHdrDynTuning;
} PQ_BIN_HDR_DYN_TUNING_S;
#endif

/**
* PQ Phy Register
**/

typedef struct hiPQ_PHY_REG_S
{
    HI_U32 u32RegAddr;     //register addr
    HI_U8  u8Lsb;          //register lsb
    HI_U8  u8Msb;          //register msb
    HI_U8  u8SourceMode;   //video source
    HI_U8  u8OutputMode;   //output mode
    HI_U32 u32Module;      //module
    HI_U32 u32Value;       //register value
} PQ_PHY_REG_S;

/**
* PQ_PARAM_S
**/

typedef struct hiPQ_COEF_S
{
#if defined(PQ_DCI_SUPPORT)
    PQ_DCI_COEF_S               stDciCoef;
#endif
#if defined(PQ_ACC_SUPPORT)
    PQ_ACC_LUT_S                stACCCoef;
#endif
    PQ_ACM_COEF_S               stAcmCoef;
    PQ_HDR_TM_COEF_S            stHdrTmCoef;
#if defined(PQ_HDR_SM_64_SUPPORT)
    PQ_HDR_SM_COEF_S            stHdrSmCoef;
#endif
#if defined(PQ_HDR_GFX_TM_SUPPORT)
    PQ_GFXHDR_TM_COEF_S         stGfxHdrTmCoef;
#endif
#if defined(PQ_HDR_ACM_SUPPORT)
    PQ_BIN_HDR_ACM_REGCFG_S     stBinHdrAcmRegCfg;
#endif
#if defined(PQ_HDR_ACC_27_SUPPORT)
    PQ_BIN_HDR_DYN_TUNING_S     stHdrDynCfg;
#endif
} PQ_COEF_S;

typedef struct hiPQ_PARAM_S
{
    PQ_FILE_HEADER_S            stPQFileHeader;
    PQ_COEF_S                   stPQCoef;
    PQ_PHY_REG_S                stPQPhyReg[PHY_REG_MAX];
    PQ_PHY_REG_S                stPQSoftReg[SOFT_REG_MAX];
} PQ_PARAM_S;


#endif


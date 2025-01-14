#ifndef __VDP_HAL_IP_GDM_H__
#define __VDP_HAL_IP_GDM_H__

#include "hi_reg_common.h"
#include "vdp_define.h"
//#include "vdp_util.h"
#include "vdp_hal_ip_gdm.h"
#include "vdp_hal_comm.h"
#include "vdp_define.h"


HI_VOID VDP_GP_SetGdmGdmTmapInBdp(HI_U32 u32Data, HI_U32 gdm_tmap_in_bdp);
HI_VOID VDP_GP_SetGdmGdmGmmEn(HI_U32 u32Data, HI_U32 gdm_gmm_en);
HI_VOID VDP_GP_SetGdmGdmTmapEn(HI_U32 u32Data, HI_U32 gdm_tmap_en);
HI_VOID VDP_GP_SetGdmGdmDegmmEn(HI_U32 u32Data, HI_U32 gdm_degmm_en);
HI_VOID VDP_GP_SetGdmGdmEn(HI_U32 u32Data, HI_U32 gdm_en);
HI_VOID VDP_GP_SetGdmGdmLumaCoef0Tmap(HI_U32 u32Data, HI_U32 gdm_luma_coef0_tmap);
HI_VOID VDP_GP_SetGdmGdmLumaCoef1Tmap(HI_U32 u32Data, HI_U32 gdm_luma_coef1_tmap);
HI_VOID VDP_GP_SetGdmGdmLumaCoef2Tmap(HI_U32 u32Data, HI_U32 gdm_luma_coef2_tmap);
HI_VOID VDP_GP_SetGdmGdmTmapLumaScale(HI_U32 u32Data, HI_U32 gdm_tmap_luma_scale);
HI_VOID VDP_GP_SetGdmGdmTmapCoefScale(HI_U32 u32Data, HI_U32 gdm_tmap_coef_scale);
HI_VOID VDP_GP_SetGdmGdmTmapOutClipMin(HI_U32 u32Data, HI_U32 gdm_tmap_out_clip_min);
HI_VOID VDP_GP_SetGdmGdmTmapOutClipMax(HI_U32 u32Data, HI_U32 gdm_tmap_out_clip_max);
HI_VOID VDP_GP_SetGdmGdmParaGmmAddr(HI_U32 u32Data, HI_U32 gdm_para_gmm_addr);
HI_VOID VDP_GP_SetGdmGdmParaTmapAddr(HI_U32 u32Data, HI_U32 gdm_para_tmap_addr);
HI_VOID VDP_GP_SetGdmGdmParaTmapUpd(HI_U32 u32Data, HI_U32 gdm_para_tmap_upd);
HI_VOID VDP_GP_SetGdmGdmParaGmmUpd(HI_U32 u32Data, HI_U32 gdm_para_gmm_upd);
HI_VOID VDP_GP_SetGdmGDegmmX4Step(HI_U32 u32Data, HI_U32 g_degmm_x4_step);
HI_VOID VDP_GP_SetGdmGDegmmX3Step(HI_U32 u32Data, HI_U32 g_degmm_x3_step);
HI_VOID VDP_GP_SetGdmGDegmmX2Step(HI_U32 u32Data, HI_U32 g_degmm_x2_step);
HI_VOID VDP_GP_SetGdmGDegmmX1Step(HI_U32 u32Data, HI_U32 g_degmm_x1_step);
HI_VOID VDP_GP_SetGdmGDegmmX2Pos(HI_U32 u32Data, HI_U32 g_degmm_x2_pos);
HI_VOID VDP_GP_SetGdmGDegmmX1Pos(HI_U32 u32Data, HI_U32 g_degmm_x1_pos);
HI_VOID VDP_GP_SetGdmGDegmmX4Pos(HI_U32 u32Data, HI_U32 g_degmm_x4_pos);
HI_VOID VDP_GP_SetGdmGDegmmX3Pos(HI_U32 u32Data, HI_U32 g_degmm_x3_pos);
HI_VOID VDP_GP_SetGdmGDegmmX4Num(HI_U32 u32Data, HI_U32 g_degmm_x4_num);
HI_VOID VDP_GP_SetGdmGDegmmX3Num(HI_U32 u32Data, HI_U32 g_degmm_x3_num);
HI_VOID VDP_GP_SetGdmGDegmmX2Num(HI_U32 u32Data, HI_U32 g_degmm_x2_num);
HI_VOID VDP_GP_SetGdmGDegmmX1Num(HI_U32 u32Data, HI_U32 g_degmm_x1_num);
HI_VOID VDP_GP_SetGdmGdmTmapRdEn(HI_U32 u32Data, HI_U32 gdm_tmap_rd_en);
HI_VOID VDP_GP_SetGdmGdmTmapParaData(HI_U32 u32Data, HI_U32 gdm_tmap_para_data);
HI_VOID VDP_GP_SetGdmGTmapX4Step(HI_U32 u32Data, HI_U32 g_tmap_x4_step);
HI_VOID VDP_GP_SetGdmGTmapX3Step(HI_U32 u32Data, HI_U32 g_tmap_x3_step);
HI_VOID VDP_GP_SetGdmGTmapX2Step(HI_U32 u32Data, HI_U32 g_tmap_x2_step);
HI_VOID VDP_GP_SetGdmGTmapX1Step(HI_U32 u32Data, HI_U32 g_tmap_x1_step);
HI_VOID VDP_GP_SetGdmGTmapX1Pos(HI_U32 u32Data, HI_U32 g_tmap_x1_pos);
HI_VOID VDP_GP_SetGdmGTmapX2Pos(HI_U32 u32Data, HI_U32 g_tmap_x2_pos);
HI_VOID VDP_GP_SetGdmGTmapX4Num(HI_U32 u32Data, HI_U32 g_tmap_x4_num);
HI_VOID VDP_GP_SetGdmGTmapX3Num(HI_U32 u32Data, HI_U32 g_tmap_x3_num);
HI_VOID VDP_GP_SetGdmGTmapX2Num(HI_U32 u32Data, HI_U32 g_tmap_x2_num);
HI_VOID VDP_GP_SetGdmGTmapX1Num(HI_U32 u32Data, HI_U32 g_tmap_x1_num);
HI_VOID VDP_GP_SetGdmGTmapX3Pos(HI_U32 u32Data, HI_U32 g_tmap_x3_pos);
HI_VOID VDP_GP_SetGdmGTmapX4Pos(HI_U32 u32Data, HI_U32 g_tmap_x4_pos);
HI_VOID VDP_GP_SetGdmGdmGammaRdEn(HI_U32 u32Data, HI_U32 gdm_gamma_rd_en);
HI_VOID VDP_GP_SetGdmGdmGammaParaData(HI_U32 u32Data, HI_U32 gdm_gamma_para_data);
HI_VOID VDP_GP_SetGdmGGmmX4Step(HI_U32 u32Data, HI_U32 g_gmm_x4_step);
HI_VOID VDP_GP_SetGdmGGmmX3Step(HI_U32 u32Data, HI_U32 g_gmm_x3_step);
HI_VOID VDP_GP_SetGdmGGmmX2Step(HI_U32 u32Data, HI_U32 g_gmm_x2_step);
HI_VOID VDP_GP_SetGdmGGmmX1Step(HI_U32 u32Data, HI_U32 g_gmm_x1_step);
HI_VOID VDP_GP_SetGdmGGmmX2Pos(HI_U32 u32Data, HI_U32 g_gmm_x2_pos);
HI_VOID VDP_GP_SetGdmGGmmX1Pos(HI_U32 u32Data, HI_U32 g_gmm_x1_pos);
HI_VOID VDP_GP_SetGdmGGmmX4Pos(HI_U32 u32Data, HI_U32 g_gmm_x4_pos);
HI_VOID VDP_GP_SetGdmGGmmX3Pos(HI_U32 u32Data, HI_U32 g_gmm_x3_pos);
HI_VOID VDP_GP_SetGdmGGmmX4Num(HI_U32 u32Data, HI_U32 g_gmm_x4_num);
HI_VOID VDP_GP_SetGdmGGmmX3Num(HI_U32 u32Data, HI_U32 g_gmm_x3_num);
HI_VOID VDP_GP_SetGdmGGmmX2Num(HI_U32 u32Data, HI_U32 g_gmm_x2_num);
HI_VOID VDP_GP_SetGdmGGmmX1Num(HI_U32 u32Data, HI_U32 g_gmm_x1_num);
HI_VOID VDP_GP_SetGdmGGmmX8Step(HI_U32 u32Data, HI_U32 g_gmm_x8_step);
HI_VOID VDP_GP_SetGdmGGmmX7Step(HI_U32 u32Data, HI_U32 g_gmm_x7_step);
HI_VOID VDP_GP_SetGdmGGmmX6Step(HI_U32 u32Data, HI_U32 g_gmm_x6_step);
HI_VOID VDP_GP_SetGdmGGmmX5Step(HI_U32 u32Data, HI_U32 g_gmm_x5_step);
HI_VOID VDP_GP_SetGdmGGmmX6Pos(HI_U32 u32Data, HI_U32 g_gmm_x6_pos);
HI_VOID VDP_GP_SetGdmGGmmX5Pos(HI_U32 u32Data, HI_U32 g_gmm_x5_pos);
HI_VOID VDP_GP_SetGdmGGmmX8Pos(HI_U32 u32Data, HI_U32 g_gmm_x8_pos);
HI_VOID VDP_GP_SetGdmGGmmX7Pos(HI_U32 u32Data, HI_U32 g_gmm_x7_pos);
HI_VOID VDP_GP_SetGdmGGmmX8Num(HI_U32 u32Data, HI_U32 g_gmm_x8_num);
HI_VOID VDP_GP_SetGdmGGmmX7Num(HI_U32 u32Data, HI_U32 g_gmm_x7_num);
HI_VOID VDP_GP_SetGdmGGmmX6Num(HI_U32 u32Data, HI_U32 g_gmm_x6_num);
HI_VOID VDP_GP_SetGdmGGmmX5Num(HI_U32 u32Data, HI_U32 g_gmm_x5_num);
HI_VOID VDP_GP_SetGdmGdmCscEn(HI_U32 u32Data, HI_U32 gdm_csc_en);
HI_VOID VDP_GP_SetGdmGdmCoef00Csc(HI_U32 u32Data, HI_U32 gdm_coef00_csc);
HI_VOID VDP_GP_SetGdmGdmCoef01Csc(HI_U32 u32Data, HI_U32 gdm_coef01_csc);
HI_VOID VDP_GP_SetGdmGdmCoef02Csc(HI_U32 u32Data, HI_U32 gdm_coef02_csc);
HI_VOID VDP_GP_SetGdmGdmCoef10Csc(HI_U32 u32Data, HI_U32 gdm_coef10_csc);
HI_VOID VDP_GP_SetGdmGdmCoef11Csc(HI_U32 u32Data, HI_U32 gdm_coef11_csc);
HI_VOID VDP_GP_SetGdmGdmCoef12Csc(HI_U32 u32Data, HI_U32 gdm_coef12_csc);
HI_VOID VDP_GP_SetGdmGdmCoef20Csc(HI_U32 u32Data, HI_U32 gdm_coef20_csc);
HI_VOID VDP_GP_SetGdmGdmCoef21Csc(HI_U32 u32Data, HI_U32 gdm_coef21_csc);
HI_VOID VDP_GP_SetGdmGdmCoef22Csc(HI_U32 u32Data, HI_U32 gdm_coef22_csc);
HI_VOID VDP_GP_SetGdmGdmCscScale(HI_U32 u32Data, HI_U32 gdm_csc_scale);
HI_VOID VDP_GP_SetGdmGdmCscClipMin(HI_U32 u32Data, HI_U32 gdm_csc_clip_min);
HI_VOID VDP_GP_SetGdmGdmCscClipMax(HI_U32 u32Data, HI_U32 gdm_csc_clip_max);
HI_VOID VDP_GP_SetGdmGdmRgb2yuvEn(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_en);
HI_VOID VDP_GP_SetGdmGdm00Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_00_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm01Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_01_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm02Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_02_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm10Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_10_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm11Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_11_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm12Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_12_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm20Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_20_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm21Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_21_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdm22Rgb2yuv(HI_U32 u32Data, HI_U32 gdm_22_rgb2yuv);
HI_VOID VDP_GP_SetGdmGdmRgb2yuvscale2p(HI_U32 u32Data, HI_U32 gdm_rgb2yuvscale2p);
HI_VOID VDP_GP_SetGdmGdmRgb2yuv0InDc(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_0_in_dc);
HI_VOID VDP_GP_SetGdmGdmRgb2yuv1InDc(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_1_in_dc);
HI_VOID VDP_GP_SetGdmGdmRgb2yuv2InDc(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_2_in_dc);
HI_VOID VDP_GP_SetGdmGdmRgb2yuv0OutDc(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_0_out_dc);
HI_VOID VDP_GP_SetGdmGdmRgb2yuv1OutDc(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_1_out_dc);
HI_VOID VDP_GP_SetGdmGdmRgb2yuv2OutDc(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_2_out_dc);
HI_VOID VDP_GP_SetGdmGdmRgb2yuvClipMin(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_clip_min);
HI_VOID VDP_GP_SetGdmGdmRgb2yuvClipMax(HI_U32 u32Data, HI_U32 gdm_rgb2yuv_clip_max);
HI_VOID VDP_GP_SetGdmGdmDitherRoundUnlim(HI_U32 u32Data, HI_U32 gdm_dither_round_unlim);
HI_VOID VDP_GP_SetGdmGdmDitherEn(HI_U32 u32Data, HI_U32 gdm_dither_en);
HI_VOID VDP_GP_SetGdmGdmDitherMode(HI_U32 u32Data, HI_U32 gdm_dither_mode);
HI_VOID VDP_GP_SetGdmGdmDitherRound(HI_U32 u32Data, HI_U32 gdm_dither_round);
HI_VOID VDP_GP_SetGdmGdmDitherDomainMode(HI_U32 u32Data, HI_U32 gdm_dither_domain_mode);
HI_VOID VDP_GP_SetGdmGdmDitherTapMode(HI_U32 u32Data, HI_U32 gdm_dither_tap_mode);
HI_VOID VDP_GP_SetGdmGdmDitherSedY0(HI_U32 u32Data, HI_U32 gdm_dither_sed_y0);
HI_VOID VDP_GP_SetGdmGdmDitherSedU0(HI_U32 u32Data, HI_U32 gdm_dither_sed_u0);
HI_VOID VDP_GP_SetGdmGdmDitherSedV0(HI_U32 u32Data, HI_U32 gdm_dither_sed_v0);
HI_VOID VDP_GP_SetGdmGdmDitherSedW0(HI_U32 u32Data, HI_U32 gdm_dither_sed_w0);
HI_VOID VDP_GP_SetGdmGdmDitherSedY1(HI_U32 u32Data, HI_U32 gdm_dither_sed_y1);
HI_VOID VDP_GP_SetGdmGdmDitherSedU1(HI_U32 u32Data, HI_U32 gdm_dither_sed_u1);
HI_VOID VDP_GP_SetGdmGdmDitherSedV1(HI_U32 u32Data, HI_U32 gdm_dither_sed_v1);
HI_VOID VDP_GP_SetGdmGdmDitherSedW1(HI_U32 u32Data, HI_U32 gdm_dither_sed_w1);
HI_VOID VDP_GP_SetGdmGdmDitherSedY2(HI_U32 u32Data, HI_U32 gdm_dither_sed_y2);
HI_VOID VDP_GP_SetGdmGdmDitherSedU2(HI_U32 u32Data, HI_U32 gdm_dither_sed_u2);
HI_VOID VDP_GP_SetGdmGdmDitherSedV2(HI_U32 u32Data, HI_U32 gdm_dither_sed_v2);
HI_VOID VDP_GP_SetGdmGdmDitherSedW2(HI_U32 u32Data, HI_U32 gdm_dither_sed_w2);
HI_VOID VDP_GP_SetGdmGdmDitherSedY3(HI_U32 u32Data, HI_U32 gdm_dither_sed_y3);
HI_VOID VDP_GP_SetGdmGdmDitherSedU3(HI_U32 u32Data, HI_U32 gdm_dither_sed_u3);
HI_VOID VDP_GP_SetGdmGdmDitherSedV3(HI_U32 u32Data, HI_U32 gdm_dither_sed_v3);
HI_VOID VDP_GP_SetGdmGdmDitherSedW3(HI_U32 u32Data, HI_U32 gdm_dither_sed_w3);
HI_VOID VDP_GP_SetGdmGdmDitherThrMax(HI_U32 u32Data, HI_U32 gdm_dither_thr_max);
HI_VOID VDP_GP_SetGdmGdmDitherThrMin(HI_U32 u32Data, HI_U32 gdm_dither_thr_min);


#endif



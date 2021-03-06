/* Copyright (C) 2016 RDA Technologies Limited and/or its affiliates("RDA").
* All rights reserved.
*
* This software is supplied "AS IS" without any warranties.
* RDA assumes no responsibility or liability for the use of the software,
* conveys no license or title under any patent, copyright, or mask work
* right to the product. RDA reserves the right to make changes in the
* software without notification.  RDA also make no representation or
* warranty that such application will be suitable for the specified use
* without further testing or modification.
*/


#ifndef _VOC_AHB_H_
#define _VOC_AHB_H_

#ifdef CT_ASM
#error "You are trying to use in an assembly code the normal H description of 'voc_ahb'."
#endif


#include "voc_global.h"

// =============================================================================
//  MACROS
// =============================================================================

// =============================================================================
//  TYPES
// =============================================================================

// ============================================================================
// VOC_AHB_T
// -----------------------------------------------------------------------------
///
// =============================================================================
#define REG_VOC_AHB_BASE            0x01970000

typedef volatile struct
{
    REG32                          Irq_Status;                   //0x00000000
    REG32                          Irq_Mask_Set;                 //0x00000004
    REG32                          Irq_Mask_Clr;                 //0x00000008
    REG32                          DMA_Cfg;                      //0x0000000C
    REG32                          DMA_LAddr;                    //0x00000010
    REG32                          DMA_EAddr;                    //0x00000014
    REG32                          DMA_Status;                   //0x00000018
    REG32                          DMA_Sema;                     //0x0000001C
    REG32                          DMA_2D;                       //0x00000020
    REG32                          DMA_Stop;                     //0x00000024
} HWP_VOC_AHB_T;

#define hwp_vocAhb                  ((HWP_VOC_AHB_T*) KSEG1(REG_VOC_AHB_BASE))


//Irq_Status
#define VOC_AHB_XCPU_VOC_IRQ_CAUSE  (1<<0)
#define VOC_AHB_XCPU_DMA_IRQ_CAUSE  (1<<1)
#define VOC_AHB_XCPU_DMAVOC_IRQ_CAUSE (1<<2)
#define VOC_AHB_XCPU_DEBUG_IRQ_CAUSE (1<<3)
#define VOC_AHB_BCPU_VOC_IRQ_CAUSE  (1<<8)
#define VOC_AHB_BCPU_DMA_IRQ_CAUSE  (1<<9)
#define VOC_AHB_BCPU_DMAVOC_IRQ_CAUSE (1<<10)
#define VOC_AHB_BCPU_DEBUG_IRQ_CAUSE (1<<11)
#define VOC_AHB_XCPU_VOC_IRQ_STATUS (1<<16)
#define VOC_AHB_XCPU_DMA_IRQ_STATUS (1<<17)
#define VOC_AHB_XCPU_DMAVOC_IRQ_STATUS (1<<18)
#define VOC_AHB_XCPU_DEBUG_IRQ_STATUS (1<<19)
#define VOC_AHB_BCPU_VOC_IRQ_STATUS (1<<24)
#define VOC_AHB_BCPU_DMA_IRQ_STATUS (1<<25)
#define VOC_AHB_BCPU_DMAVOC_IRQ_STATUS (1<<26)
#define VOC_AHB_BCPU_DEBUG_IRQ_STATUS (1<<27)
#define VOC_AHB_XCPU_IRQ_CAUSE(n)   (((n)&15)<<0)
#define VOC_AHB_XCPU_IRQ_CAUSE_MASK (15<<0)
#define VOC_AHB_XCPU_IRQ_CAUSE_SHIFT (0)
#define VOC_AHB_BCPU_IRQ_CAUSE(n)   (((n)&15)<<8)
#define VOC_AHB_BCPU_IRQ_CAUSE_MASK (15<<8)
#define VOC_AHB_BCPU_IRQ_CAUSE_SHIFT (8)
#define VOC_AHB_XCPU_IRQ_STATUS(n)  (((n)&15)<<16)
#define VOC_AHB_XCPU_IRQ_STATUS_MASK (15<<16)
#define VOC_AHB_XCPU_IRQ_STATUS_SHIFT (16)
#define VOC_AHB_BCPU_IRQ_STATUS(n)  (((n)&15)<<24)
#define VOC_AHB_BCPU_IRQ_STATUS_MASK (15<<24)
#define VOC_AHB_BCPU_IRQ_STATUS_SHIFT (24)

//Irq_Mask_Set
#define VOC_AHB_XCPU_VOC_IRQ_MASK   (1<<0)
#define VOC_AHB_XCPU_DMA_IRQ_MASK   (1<<1)
#define VOC_AHB_XCPU_DMAVOC_IRQ_MASK (1<<2)
#define VOC_AHB_XCPU_DEBUG_IRQ_MASK (1<<3)
#define VOC_AHB_BCPU_VOC_IRQ_MASK   (1<<8)
#define VOC_AHB_BCPU_DMA_IRQ_MASK   (1<<9)
#define VOC_AHB_BCPU_DMAVOC_IRQ_MASK (1<<10)
#define VOC_AHB_BCPU_DEBUG_IRQ_MASK (1<<11)
#define VOC_AHB_XCPU_IRQ_MASK(n)    (((n)&15)<<0)
#define VOC_AHB_XCPU_IRQ_MASK_MASK  (15<<0)
#define VOC_AHB_XCPU_IRQ_MASK_SHIFT (0)
#define VOC_AHB_BCPU_IRQ_MASK(n)    (((n)&15)<<8)
#define VOC_AHB_BCPU_IRQ_MASK_MASK  (15<<8)
#define VOC_AHB_BCPU_IRQ_MASK_SHIFT (8)

//Irq_Mask_Clr
//#define VOC_AHB_XCPU_VOC_IRQ_MASK (1<<0)
//#define VOC_AHB_XCPU_DMA_IRQ_MASK (1<<1)
//#define VOC_AHB_XCPU_DMAVOC_IRQ_MASK (1<<2)
//#define VOC_AHB_XCPU_DEBUG_IRQ_MASK (1<<3)
//#define VOC_AHB_BCPU_VOC_IRQ_MASK (1<<8)
//#define VOC_AHB_BCPU_DMA_IRQ_MASK (1<<9)
//#define VOC_AHB_BCPU_DMAVOC_IRQ_MASK (1<<10)
//#define VOC_AHB_BCPU_DEBUG_IRQ_MASK (1<<11)
//#define VOC_AHB_XCPU_IRQ_MASK(n)  (((n)&15)<<0)
//#define VOC_AHB_XCPU_IRQ_MASK_MASK (15<<0)
//#define VOC_AHB_XCPU_IRQ_MASK_SHIFT (0)
//#define VOC_AHB_BCPU_IRQ_MASK(n)  (((n)&15)<<8)
//#define VOC_AHB_BCPU_IRQ_MASK_MASK (15<<8)
//#define VOC_AHB_BCPU_IRQ_MASK_SHIFT (8)

//DMA_Cfg
#define VOC_AHB_DMA_SIZELOW(n)      (((n)&3)<<0)
#define VOC_AHB_DMA_WSIZE(n)        (((n)&0x3FFF)<<2)
#define VOC_AHB_DMA_RUN             (1<<16)
#define VOC_AHB_DMA_DIR_READ        (0<<20)
#define VOC_AHB_DMA_DIR_WRITE       (1<<20)
#define VOC_AHB_DMA_B2S_EN          (1<<21)
#define VOC_AHB_DMA_B2S_SIGN        (1<<22)
#define VOC_AHB_DMA_WRAP(n)         (((n)&15)<<24)
#define VOC_AHB_DMA_SIZE(n)         (((n)&0xFFFF)<<0)
#define VOC_AHB_DMA_SIZE_MASK       (0xFFFF<<0)
#define VOC_AHB_DMA_SIZE_SHIFT      (0)

//DMA_LAddr
#define VOC_AHB_DMA_LADDR(n)        (((n)&0xFFFF)<<1)
#define VOC_AHB_DMA_LADDR_MASK      (0xFFFF<<1)

//DMA_EAddr
#define VOC_AHB_DMA_EADDR(n)        (((n)&0x3FFFFFF)<<2)
#define VOC_AHB_DMA_EADDR_MASK      (0x3FFFFFF<<2)
#define VOC_AHB_DMA_SINGLE_B2S_EN   (1<<28)
#define VOC_AHB_DMA_SINGLE_B2S_SIGN (1<<29)
#define VOC_AHB_DMA_WRITE_READ      (0<<30)
#define VOC_AHB_DMA_WRITE_WRITE     (1<<30)
#define VOC_AHB_DMA_SINGLE          (1<<31)

//DMA_Status
#define VOC_AHB_DMA_ON              (1<<0)
#define VOC_AHB_DMA_SEMA_STATUS     (1<<31)

//DMA_Sema
#define VOC_AHB_DMA_SEMA            (1<<1)

//DMA_2D
#define VOC_AHB_DMA_STRIDELOW(n)    (((n)&3)<<0)
#define VOC_AHB_DMA_WSTRIDE(n)      (((n)&0x7FF)<<2)
#define VOC_AHB_DMA_LINES(n)        (((n)&0xFFF)<<16)
#define VOC_AHB_DMA_STRIDE(n)       (((n)&0x1FFF)<<0)
#define VOC_AHB_DMA_STRIDE_MASK     (0x1FFF<<0)
#define VOC_AHB_DMA_STRIDE_SHIFT    (0)

//DMA_Stop
#define VOC_AHB_DMA_STOP            (1<<0)





#endif


    /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __csa36fx30_RST_H
#define __csa36fx30_RST_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup Rst
  * @{
  */

/*******************  Bit definition for RSTSRC register  ********************/
#define Rst_RSTSRC_RSTS_PIN                ((u32)0x00000002)
#define Rst_RSTSRC_RSTS_WDT                ((u32)0x00000004)
#define Rst_RSTSRC_RSTS_WWDT               ((u32)0x00000008)     
#define Rst_RSTSRC_RSTS_BOD                ((u32)0x00000020)	 
#define Rst_RSTSRC_RSTS_HVD                ((u32)0x00000040)  
#define Rst_RSTSRC_RSTS_SRAM               ((u32)0x00000080)
#define Rst_RSTSRC_RSTS_MCU                ((u32)0x00000100)
#define Rst_RSTSRC_RSTS_CPU                ((u32)0x00000200)     
#define Rst_RSTSRC_RSTS_SYS                ((u32)0x00000400)        

/** @defgroup RST Reset Source Flag Define
  * @{
  */
#define RSTS_PIN    Rst_RSTSRC_RSTS_PIN
#define RSTS_WDT    Rst_RSTSRC_RSTS_WDT
#define RSTS_WWDT   Rst_RSTSRC_RSTS_WWDT
#define RSTS_BOD    Rst_RSTSRC_RSTS_BOD     
#define RSTS_HVD    Rst_RSTSRC_RSTS_HVD     
#define RSTS_SRAM   Rst_RSTSRC_RSTS_SRAM   
#define RSTS_MCU    Rst_RSTSRC_RSTS_MCU   
#define RSTS_CPU    Rst_RSTSRC_RSTS_CPU
#define RSTS_SYS    Rst_RSTSRC_RSTS_SYS


#define IS_RST_FlagStatus(RST_FLAG)   (((RST_FLAG) == RSTS_PIN) || ((RST_FLAG) == RSTS_WDT) || \
                                                  ((RST_FLAG) == RSTS_WWDT) || ((RST_FLAG) == RSTS_BOD) || \
                                                  ((RST_FLAG) == RSTS_HVD) || ((RST_FLAG) == RSTS_SRAM) || \
                                                  ((RST_FLAG) == RSTS_MCU) || ((RST_FLAG) == RSTS_CPU) || \
                                                  ((RST_FLAG) == RSTS_SYS))



/*******************  Bit definition for BODCR register  ********************/
#define Rst_BODCR_BOD_EN                ((u32)0x00000001)
#define Rst_BODCR_BOD_RSTEN             ((u32)0x00000010)
#define Rst_BODCR_HVD_RSTEN             ((u32)0x00001000)
#define Rst_BODCR_BOD_FTR_ENB           ((u32)0x00010000)
#define Rst_BODCR_HVD_FTR_ENB           ((u32)0x00040000)

#define Rst_BODCR_BOD_IE                ((u32)0x00000040)
#define Rst_BODCR_HVD_IE                ((u32)0x00004000)

#define Rst_BODCR_HVD_OUT               ((u32)0x00008000)
#define Rst_BODCR_HVD_INTF              ((u32)0x00002000)
#define Rst_BODCR_BOD_OUT               ((u32)0x00000080)
#define Rst_BODCR_BOD_INTF              ((u32)0x00000020)
#define Rst_BODCR_FTR_SRC               ((u32)0x00800000)

#define Rst_BODCR_BOD_VL_LSB            ((u8)0x01)
#define Rst_BODCR_BOD_VL_FF             ((u32)0x00000007)

#define Rst_BODCR_FTR_CFG_LSB           ((u8)0x18)
#define Rst_BODCR_FTR_CFG_FF            ((u32)0x000000FF)

#define BOD_EN          Rst_BODCR_BOD_EN
#define BOD_RSTEN       Rst_BODCR_BOD_RSTEN
#define HVD_RSTEN       Rst_BODCR_HVD_RSTEN
#define BOD_FTR_ENB     Rst_BODCR_BOD_FTR_ENB
#define HVD_FTR_ENB     Rst_BODCR_HVD_FTR_ENB
#define BOD_IE          Rst_BODCR_BOD_IE
#define HVD_IE          Rst_BODCR_HVD_IE

#define HVD_OUT         Rst_BODCR_HVD_OUT
#define HVD_INTF        Rst_BODCR_HVD_INTF
#define BOD_OUT         Rst_BODCR_BOD_OUT
#define BOD_INTF        Rst_BODCR_BOD_INTF
#define FTR_SRC         Rst_BODCR_FTR_SRC


#define IS_RST_BodCmd(BodCmd) (((BodCmd) == BOD_EN) || ((BodCmd) == BOD_RSTEN) || \
                                ((BodCmd) == HVD_RSTEN) || ((BodCmd) == BOD_FTR_ENB) || \
                                ((BodCmd) == HVD_FTR_ENB))

#define IS_RST_RST_IT(RST_IT)       (((RST_IT) == BOD_IE) || ((RST_IT) == HVD_IE))

#define IS_RST_GetBODFlag(BOD_FLAG) (((BOD_FLAG) == HVD_OUT) || ((BOD_FLAG) == HVD_INTF) || \
                                     ((BOD_FLAG) == BOD_OUT) || ((BOD_FLAG) == BOD_INTF))
                                     
#define IS_RST_ClearBODFlag(CLR_FLAG) (((CLR_FLAG) == HVD_INTF) || ((CLR_FLAG) == BOD_INTF))

#define IS_RST_NewState(NewState) (((NewState) == DISABLE) || ((NewState) == ENABLE))

#define IS_RST_BODLevel(BOD_Level) (((BOD_Level) == HVD_INTF) || ((BOD_Level) == BOD_INTF))

#define IS_RST_PORCRConfig(Por_Code) (((Por_Code) == HVD_INTF) || ((Por_Code) == BOD_INTF))

#define IS_RST_FTR_Src(FTR_Src) (((FTR_Src) == 0) || ((FTR_Src) == 1))

#define IS_RST_FTR_Cfg(FTR_Cfg) (((FTR_Cfg) <= 0xFF))

/*******************  Bit definition for IPRSTC1 register  ********************/
#define Rst_IPRSTC1_CHIP_RST                ((u32)0x00000001)
#define Rst_IPRSTC1_CPU_RST                 ((u32)0x00000002)
#define Rst_IPRSTC1_MCU_RST                 ((u32)0x00000004)

#define CHIP_RST        Rst_IPRSTC1_CHIP_RST 
#define CPU_RST         Rst_IPRSTC1_CPU_RST 
#define MCU_RST         Rst_IPRSTC1_MCU_RST 

#define IS_RST_IPC1Cmd(IPC1Cmd)     (((IPC1Cmd) == CHIP_RST) || ((IPC1Cmd) == CPU_RST) || ((IPC1Cmd) == MCU_RST))



#endif

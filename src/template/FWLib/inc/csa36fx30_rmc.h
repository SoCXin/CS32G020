    /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __csa36fx30_RMC_H
#define __csa36fx30_RMC_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup Rmc
  * @{
  */

/*******************  Bit definition for RMC SRAM register  ********************/
#define Rmc_Sram_NMI_IE               ((u8)0x01)
#define Rmc_Sram_RSTEN                ((u8)0x02)
#define Rmc_Sram_SRAM_PEF             ((u8)0x10) 
	 

#define IS_SysTick_RMC_AddrCheck(addr)  (((addr) >= 0x1) || ((addr) <= 0x1FFF))
#define IS_SysTick_RMC_LenCheck(length) (((length) == 0) || ((length) == 2 ) || ((length) == 4 ))

#define IS_RMC_NewState(NewState) (((NewState) == DISABLE) || ((NewState) == ENABLE))
     
     
 
#endif

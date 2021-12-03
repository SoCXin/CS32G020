    /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __csa36fx30_SYSTICK_H
#define __csa36fx30_SYSTICK_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup SysTick
  * @{
  */

/*******************  Bit definition for SYST_CSR register  ********************/
#define SysTick_Counter_Disable       ((u8)0x00)
#define SysTick_Counter_Enable        ((u8)0x01)	 
#define SysTick_Counter_Clear         ((u8)0x02)
#define SysTick_TICKINT_Disable       ((u8)0x00)
#define SysTick_TICKINT_Enable        ((u8)0x01)	     
 	 
#define IS_SysTick_Counter(SysTick_Counter) (((SysTick_Counter) == SysTick_Counter_Disable) || ((SysTick_Counter) == SysTick_Counter_Enable ) ||\
                                            ((SysTick_Counter) == SysTick_Counter_Clear))
/*******************  SYST_CSR register Bit definition ********************/ 
#define SysTick_CSR_ENABLE            ((u32)0x00000001)  
#define SysTick_CSR_TICKINT           ((u32)0x00000002)       
#define SysTick_CSR_CLKSRC            ((u32)0x00000004)       
#define SysTick_CSR_COUNTFLAG         ((u32)0x00010000)  


#define IS_SysTick_Reload_Range(Reload) (((Reload) >= 0x1) && ((Reload) <= 0x00FFFFFF))

#define IS_SysTick_TICKINT(NewState) (((NewState) == SysTick_TICKINT_Disable) || ((NewState) == SysTick_TICKINT_Enable ))



void SysTick_SetReload(uint32_t Reload);

void SysTick_CounterCmd(uint32_t SysTick_Counter);

void SysTick_ITConfig(uint8_t NewState);

u32 SysTick_CounterValue(void);

FlagStatus SysTick_GetFlagStatus(void);



#endif

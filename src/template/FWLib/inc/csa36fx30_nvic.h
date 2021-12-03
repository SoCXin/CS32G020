/* 
 * Copyright(C)
 * By Chipsea Technology Ltd.
 * All right reserved..
 */



/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CSA36FX30_NVIC_H
#define __CSA36FX30_NVIC_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/****************************** Priority Reg**********************************/ 
#define         NVIC_PRI_3              ((uint32_t)0xC0000000) 
#define         NVIC_PRI_2              ((uint32_t)0x00C00000)
#define         NVIC_PRI_1              ((uint32_t)0x0000C000)
#define         NVIC_PRI_0              ((uint32_t)0x000000C0)
#define         NVIC_PRI_7              ((uint32_t)0xC0000000)
#define         NVIC_PRI_6              ((uint32_t)0x00C00000)
#define         NVIC_PRI_5              ((uint32_t)0x0000C000)
#define         NVIC_PRI_4              ((uint32_t)0x000000C0)
#define         NVIC_PRI_11             ((uint32_t)0xC0000000)
#define         NVIC_PRI_10             ((uint32_t)0x00C00000)
#define         NVIC_PRI_9              ((uint32_t)0x0000C000)
#define         NVIC_PRI_8              ((uint32_t)0x000000C0)
#define         NVIC_PRI_15             ((uint32_t)0xC0000000)
#define         NVIC_PRI_14             ((uint32_t)0x00C00000)
#define         NVIC_PRI_13             ((uint32_t)0x0000C000)
#define         NVIC_PRI_12             ((uint32_t)0x000000C0)
#define         NVIC_PRI_19             ((uint32_t)0xC0000000)
#define         NVIC_PRI_18             ((uint32_t)0x00C00000)
#define         NVIC_PRI_17             ((uint32_t)0x0000C000)
#define         NVIC_PRI_16             ((uint32_t)0x000000C0)
#define         NVIC_PRI_23             ((uint32_t)0xC0000000)
#define         NVIC_PRI_22             ((uint32_t)0x00C00000)
#define         NVIC_PRI_21             ((uint32_t)0x0000C000)
#define         NVIC_PRI_20             ((uint32_t)0x000000C0)
#define         NVIC_PRI_27             ((uint32_t)0xC0000000)
#define         NVIC_PRI_26             ((uint32_t)0x00C00000)
#define         NVIC_PRI_25             ((uint32_t)0x0000C000)
#define         NVIC_PRI_24             ((uint32_t)0x000000C0)
#define         NVIC_PRI_31             ((uint32_t)0xC0000000)
#define         NVIC_PRI_30             ((uint32_t)0x00C00000)
#define         NVIC_PRI_29             ((uint32_t)0x0000C000)
#define         NVIC_PRI_28             ((uint32_t)0x000000C0)

/****************************** NMI_SEL Reg**********************************/ 
#define         NVIC_NUI_EN             ((uint32_t)0x00000100) 
#define         NVIC_NMI_SEL            ((uint32_t)0x0000001F)

/****************************** IRQ Reg**********************************/ 
/**
 * @group   :   IRQ Number
 * @{ */
#define         IRQ_BASE                0x1
#define         IRQ_BOD_HVD             ((uint32_t)IRQ_BASE<<0) 
#define         IRQ_WDT_WWDT            ((uint32_t)IRQ_BASE<<1)
#define         IRQ_ENT0                ((uint32_t)IRQ_BASE<<2)
#define         IRQ_ENT1                ((uint32_t)IRQ_BASE<<3)
#define         IRQ_ENT2                ((uint32_t)IRQ_BASE<<4)
#define         IRQ_GPAB_INT            ((uint32_t)IRQ_BASE<<5)
#define         IRQ_TMR0                ((uint32_t)IRQ_BASE<<6)
#define         IRQ_TMR1                ((uint32_t)IRQ_BASE<<7)
#define         IRQ_TMR2                ((uint32_t)IRQ_BASE<<8)
#define         IRQ_UART0               ((uint32_t)IRQ_BASE<<9)
#define         IRQ_SPI0                ((uint32_t)IRQ_BASE<<10) 
#define         IRQ_I2C0                ((uint32_t)IRQ_BASE<<11)
#define         IRQ_UPD0                ((uint32_t)IRQ_BASE<<12)
#define         IRQ_UPD1                ((uint32_t)IRQ_BASE<<13)
#define         IRQ_ADC                 ((uint32_t)IRQ_BASE<<14)
#define         IRQ_DAC                 ((uint32_t)IRQ_BASE<<15)
#define         IRQ_ACMP0               ((uint32_t)IRQ_BASE<<16)
#define         IRQ_ACMP1               ((uint32_t)IRQ_BASE<<17)
#define         IRQ_PD_WU               ((uint32_t)IRQ_BASE<<18)
#define         IRQ_TYPEC               ((uint32_t)IRQ_BASE<<19)
#define         IRQ_SRAMFAULT           ((uint32_t)IRQ_BASE<<20)
#define         IS_NVIC_IRQNUM(IRQ_x)   (IRQ_x & 0x001FFFFF)
#define         IS_NVIC_IRQFLAG(IRQ_x)  ((IRQ_x == IRQ_BOD_HVD) || (IRQ_x == IRQ_WDT_WWDT) || (IRQ_x == IRQ_GPAB_INT)  || (IRQ_x == IRQ_SRAMFAULT) )
/**  @} */


/**
 * @group   :   IRQ priority
 * @{ */
#define         IRQ_PRIORITY_0          ((uint8_t)0x00)   
#define         IRQ_PRIORITY_1          ((uint8_t)0x01)   
#define         IRQ_PRIORITY_2          ((uint8_t)0x02)   
#define         IRQ_PRIORITY_3          ((uint8_t)0x03)   
#define         IS_NVIC_PRIORITY(priority)   ((priority ==IRQ_PRIORITY_0) || (priority ==IRQ_PRIORITY_1) || (priority ==IRQ_PRIORITY_2) || (priority ==IRQ_PRIORITY_3))
/**  @} */



/****************************** NVIC function  **********************************/ 
void NVIC_IRQxEnable(uint32_t IRQ_x);
void NVIC_IRQxDisable(uint32_t IRQ_x);
void NVIC_IRQxSetPending(uint32_t IRQ_x);
void NVIC_IRQxClearPending(uint32_t IRQ_x);
void NVIC_IRQxPriorityConfig(uint32_t IRQ_x, uint8_t priority);
uint8_t NVIC_IRQxSourceFlag(uint32_t IRQ_x);
void NVIC_NMIIRQSource(uint32_t IRQ_x, FunctionalState NewState);




#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_IT_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

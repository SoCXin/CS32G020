/* 
 * Copyright(C)
 * By Chipsea Technology Ltd.
 * All right reserved..
 */

/* Includes ------------------------------------------------------------------*/
#include "global_define.h"

/** @addtogroup Template_Project
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

void SVC_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

void PendSV_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

void SysTick_Handler(void)
{
	B_Time_1ms = 1;
}

void BOD_IRQHandler(void)
{
}

void WDT_IRQHandler(void)
{
}

void EINT0_IRQHandler(void)
{
	
}

void EINT1_IRQHandler(void)
{
 
}

void EINT2_IRQHandler(void)
{
 
}

void GPAB_IRQHandler(void){

}

void TMR0_IRQHandler(void)
{
 
}

void TMR1_IRQHandler(void)
{
 
}

void TMR2_IRQHandler(void)
{
 
}

void UART0_IRQHandler(void)
{
 
}

void SPI0_IRQHandler(void)
{
 
}

void I2C0_IRQHandler(void)
{
 
}

void UPD0_IRQHandler(void)
{
 
}

void UPD1_IRQHandler(void)
{

}

void ADC_IRQHandler(void)
{
 
}

void DAC_IRQHandler(void)
{
 
}

void ACMP0_IRQHandler(void)
{
 
}

void ACMP1_IRQHandler(void)
{
 
}

void PD_WU_IRQHandler(void)
{
 
}

void TYPEC_IRQHandler(void)
{

}




/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

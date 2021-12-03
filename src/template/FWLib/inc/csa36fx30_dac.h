/**
  ******************************************************************************
  * @file    csa36fx30_dac.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    2-February-2018
  * @brief   This file contains all the functions prototypes for the DAC firmware 
  *          library.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CSA36FX30_DAC_H
#define __CSA36FX30_DAC_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"
 
/** @addtogroup STM32F0xx_StdPeriph_Driver
  * @{
  */

/** @addtogroup DAC
  * @{
  */

/* Exported types ------------------------------------------------------------*/

/** 
  * @brief  DAC Init structure definition
  */
  
typedef struct
{
	uint32_t DAC_Reference ;  //Select the Reference voltage. (101:2V 110:3V 111:4V)
  uint32_t DAC_ConversionTime;// Conversion time setting. T=(Conversion_Time [7:0]+1)×TPCLK
	FunctionalState DAC_Buffer; //Set to 1 is to enable the output buffer.
	uint32_t DAC_Trigger; // DAC load selection.( 100: TMR0 Rising edge  101: TMR1 Rising edge  110: TMR2 Rising edge) 
}DAC_InitTypeDef;
  



/********************  Bits definition for DAC_CTL register  ******************/
#define DAC_REFSEL_2V            ((uint32_t)0x00050000)
#define DAC_REFSEL_3V            ((uint32_t)0x00060000)
#define DAC_REFSEL_4V            ((uint32_t)0x00070000)
#define DAC_BUFFER_EN            ((uint32_t)0x00000080)
#define DAC_LSEL_TMR0            ((uint32_t)0x00000040)
#define DAC_LSEL_TMR1            ((uint32_t)0x00000050)
#define DAC_LSEL_TMR2            ((uint32_t)0x00000060)
#define DAC_IE_ST                ((uint32_t)0x00000004)
#define DAC_IE_OV                ((uint32_t)0x00000002)
#define DAC_EN                   ((uint32_t)0x00000001)
/********************  Bits definition for DAC_STS register  ******************/
#define DAC_IF_BY                ((uint32_t)0x00000004)
#define DAC_IF_ST                ((uint32_t)0x00000002)
#define DAC_IF_OV                ((uint32_t)0x00000001)




#define DAC_Trigger_DATA         ((uint32_t)0x00000000)
#define DAC_Trigger_TMR0         DAC_LSEL_TMR0
#define DAC_Trigger_TMR1         DAC_LSEL_TMR1
#define DAC_Trigger_TMR2         DAC_LSEL_TMR2
#define IS_DAC_TRIGGER(Trigger)((Trigger) == DAC_Trigger_DATA) || ((Trigger) == DAC_Trigger_TMR0) || \
                               ((Trigger) == DAC_Trigger_TMR1) || ((Trigger) == DAC_Trigger_TMR2) 

#define DAC_Reference_Reserve    ((uint32_t)0x00000000)
#define DAC_Reference_2V         DAC_REFSEL_2V
#define DAC_Reference_3V         DAC_REFSEL_3V
#define DAC_Reference_4V         DAC_REFSEL_4V
#define IS_DAC_REFERENCE(VOLTAGE)((VOLTAGE) == DAC_Reference_2V) || ((VOLTAGE) == DAC_Reference_3V) || \
                               ((VOLTAGE) == DAC_Reference_4V) || ((VOLTAGE) == DAC_Reference_Reserve)

#define DAC_IE_Start              DAC_IE_ST
#define DAC_IE_Compelet           DAC_IE_OV
#define IS_DAC_IT(IT)((IT) == DAC_IE_Start) || ((IT) == DAC_IE_Compelet)

#define DAC_IF_Start              DAC_IF_ST
#define DAC_IF_Complete           DAC_IF_OV
#define DAC_IF_Busy               DAC_IF_BY
#define IS_DAC_IF(IF)((IF) == DAC_IF_Start) || ((IF) == DAC_IF_Compelet)|| ((IF) == DAC_IF_Busy)


#define IS_DAC_CONVVERSION_GAP(GAP)  (((GAP)>0)&&((GAP)<256))

#define IS_DAC_DATA(Data) (((Data)>0)&&((Data)<0x800))


#define IS_DAC_FLAG(FLAG) (((Data)>0)&&((Data)<0x800))



void DAC_DeInit(void);
void DAC_Init(DAC_InitTypeDef* DAC_InitStruct);
void DAC_StructInit(DAC_InitTypeDef* DAC_InitStruct);
void DAC_Cmd(FunctionalState NewState);
void DAC_SetData(uint16_t Data);
uint16_t DAC_GetDataOutputValue(void);
void DAC_ITConfig(uint32_t DAC_IT, FunctionalState NewState);
FlagStatus DAC_GetFlagStatus(uint32_t DAC_FLAG);
void DAC_ClearFlag(uint32_t DAC_FLAG);

#ifdef __cplusplus
}
#endif

#endif /* __CSA36FX30_DAC_H_ */

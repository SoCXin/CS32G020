/**
  ******************************************************************************
  * @file    csa36fx30_adc.h
  * @author  CHIPSEA tset Team
  * @version V1.1.0
  * @date    04-January-2018
  * @brief   This file contains all the functions prototypes for the ADC firmware 
  *          library.
  ******************************************************************************
  * @attention
  *
  *
  *
  ******************************************************************************
  */
  
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CSA36FX30_ADC_H
#define __CSA36FX30_ADC_H

#ifdef __cplusplus
 extern "C" {
#endif
     
     
/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"


#define ADCR_RST                             ((u32)0x00000000)
#define ADCHER_RST                           ((u32)0x00000000)
#define ADCR2_RST                            ((u32)0x00000008)
#define ADCMPR0_RST                          ((u32)0x00000000)
#define ADCMPR1_RST                          ((u32)0x00000000)
#define ADSR_RST                             ((u32)0x00000000)
#define ADTDCR_RST                           ((u32)0x00000000) 
#define ADCHSR_RST                           ((u32)0x00000000) 
        
/** 
  * @brief   ADC Init structure definition  
  */ 

typedef struct
{
                                                                         
  FunctionalState ADC_InputSigMode;                                                              
  uint32_t   ADC_ScanConvMode;             
  uint32_t   ADC_VrefSelcet; 
  
} ADC_InitTypeDef;


typedef struct
{
                                                                         
  FunctionalState ADC_CmpCond;                                                          
  uint16_t  ADC_CmpdValue;             
  uint8_t   ADC_CmpMatchCnt;               
  uint8_t   ADC_CmpChannel;  

} ADC_InitCmpTypedef; 
     
typedef struct
{                                                                         
	FunctionalState ADC_SETH_AZ0;                                                          
	FunctionalState ADC_BFMODE;           
	FunctionalState ADC_LPOWER;            
	uint32_t         ADC_ClkDutyMode;  
} ADC_InitOffsetTypedef;  



/* Exported constants --------------------------------------------------------*/

/** @defgroup ADC_Exported_Constants
  * @{
  */ 
#define IS_ADC_ALL_PERIPH(PERIPH) (((PERIPH) == ADC1) || \
                                   ((PERIPH) == ADC2) || \
                                   ((PERIPH) == ADC3))  

/** @defgroup ADC_ScanConv_Mode 
  * @{
  */ 
#define ADC_Mode_A_Single_Conversion               ((uint32_t)0x00000000)       
#define ADC_Mode_Single_cycle_scan                 ((uint32_t)0x00000010)
#define ADC_Mode_Limited_cycle_scan_mode_1         ((uint32_t)0x00000020)
#define ADC_Mode_Limited_cycle_scan_mode_2         ((uint32_t)0x00000030)
#define ADC_Mode_Infinite_cycle_scan_mode          ((uint32_t)0x00000040)
#define ADC_Mode_Burst_mode                        ((uint32_t)0x00000050)
#define IS_ADC_MODE(MODE) (((MODE) == ADC_Mode_A_Single_Conversion) || \
                           ((MODE) == ADC_Mode_Single_cycle_scan) || \
                           ((MODE) == ADC_Mode_Limited_cycle_scan_mode_1) || \
                           ((MODE) == ADC_Mode_Limited_cycle_scan_mode_2)  || \
                           ((MODE) == ADC_Mode_Infinite_cycle_scan_mode)  || \
                           ((MODE) == ADC_Mode_Burst_mode))
/**
  * @}
  */ 


/** @defgroup ADC_Vref_Selcet 
  * @{
  */ 
#define ADC_Reference_Voltage_AVDD                        ((uint32_t)(0x00<<21))
#define ADC_Reference_Voltage_EXT_VREF                    ((uint32_t)(0x01<<21))
#define ADC_Reference_Voltage_0V5                         ((uint32_t)(0x02<<21))
#define ADC_Reference_Voltage_0V75                        ((uint32_t)(0x03<<21))
#define ADC_Reference_Voltage_1V                          ((uint32_t)(0x04<<21))
#define ADC_Reference_Voltage_2V                          ((uint32_t)(0x05<<21))
#define ADC_Reference_Voltage_3V                          ((uint32_t)(0x06<<21))

#define IS_ADC_VREFSELCT(VREFSELCT) (((VREFSELCT) == ADC_Reference_Voltage_AVDD) || \
                                     ((VREFSELCT) == ADC_Reference_Voltage_EXT_VREF) || \
                                     ((VREFSELCT) == ADC_Reference_Voltage_0V5) || \
                                     ((VREFSELCT) == ADC_Reference_Voltage_0V75) || \
                                     ((VREFSELCT) == ADC_Reference_Voltage_1V) || \
                                     ((VREFSELCT) == ADC_Reference_Voltage_2V) || \
                                     ((VREFSELCT) == ADC_Reference_Voltage_3V))
/**
  * @}
  */ 


/** @defgroup ADC_interrupts_definition 
  * @{
  */ 
#define ADC_IT_ADIE                     ((uint8_t)0x02)     /*  */
#define ADC_IT_CMPR0                    ((uint8_t)0x02)     /*  */
#define ADC_IT_CMPR1                    ((uint8_t)0x02)     /*  */
#define IS_ADC_IT(ADCIT)             (((ADCIT) == ADC_IT_ADIE) || \
                                      ((ADCIT) == ADC_IT_CMPR0) || \
                                      ((ADCIT) == ADC_IT_CMPR1))
/**
  * @}
  */ 

  
/** @defgroup ADC_channels 
  * @{
  */ 
#define ADC_Channel_0                               ((uint8_t)0x00)
#define ADC_Channel_1                               ((uint8_t)0x01)
#define ADC_Channel_2                               ((uint8_t)0x02)
#define ADC_Channel_3                               ((uint8_t)0x03)
#define ADC_Channel_4                               ((uint8_t)0x04)
#define ADC_Channel_5                               ((uint8_t)0x05)
#define ADC_Channel_6                               ((uint8_t)0x06)
#define ADC_Channel_7                               ((uint8_t)0x07)
#define ADC_Channel_8                               ((uint8_t)0x08)
#define ADC_Channel_9                               ((uint8_t)0x09)
#define ADC_Channel_10                              ((uint8_t)0x0A)
#define ADC_Channel_11                              ((uint8_t)0x0B)
#define ADC_Channel_12                              ((uint8_t)0x0C)
#define ADC_Channel_13                              ((uint8_t)0x0D)
#define ADC_Channel_14                              ((uint8_t)0x0E)
#define ADC_Channel_15                              ((uint8_t)0x0F)
#define ADC_Channel_16                              ((uint8_t)0x10)
#define ADC_Channel_17                              ((uint8_t)0x11)
#define ADC_Channel_18                              ((uint8_t)0x12)
#define ADC_Channel_19                              ((uint8_t)0x13)
#define ADC_Channel_20                              ((uint8_t)0x14)
#define ADC_Channel_21                              ((uint8_t)0x15)
#define ADC_Channel_22                              ((uint8_t)0x16)
#define ADC_Channel_23                              ((uint8_t)0x17)

    
 #define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) == ADC_Channel_0)  || \
                                  ((CHANNEL) == ADC_Channel_1)  || \
                                  ((CHANNEL) == ADC_Channel_2)  || \
                                  ((CHANNEL) == ADC_Channel_3)  || \
                                  ((CHANNEL) == ADC_Channel_4)  || \
                                  ((CHANNEL) == ADC_Channel_5)  || \
                                  ((CHANNEL) == ADC_Channel_6)  || \
                                  ((CHANNEL) == ADC_Channel_7)  || \
                                  ((CHANNEL) == ADC_Channel_8)  || \
                                  ((CHANNEL) == ADC_Channel_9)  || \
                                  ((CHANNEL) == ADC_Channel_10) || \
                                  ((CHANNEL) == ADC_Channel_11) || \
                                  ((CHANNEL) == ADC_Channel_12) || \
                                  ((CHANNEL) == ADC_Channel_13) || \
                                  ((CHANNEL) == ADC_Channel_14) || \
                                  ((CHANNEL) == ADC_Channel_15) || \
                                  ((CHANNEL) == ADC_Channel_16) || \
                                  ((CHANNEL) == ADC_Channel_17) || \
                                  ((CHANNEL) == ADC_Channel_18) || \
                                  ((CHANNEL) == ADC_Channel_19) || \
                                  ((CHANNEL) == ADC_Channel_20) || \
                                  ((CHANNEL) == ADC_Channel_21) || \
                                  ((CHANNEL) == ADC_Channel_22) || \
                                  ((CHANNEL) == ADC_Channel_23) )
/**
  * @}
  */ 
  
  
  

/** @defgroup ADC_sampling_times 
  * @{
  */ 
#define ADC_SampleTime_1Cycles                   ((uint32_t)(0x00<<18))
#define ADC_SampleTime_2Cycles                   ((uint32_t)(0x01<<18))
#define ADC_SampleTime_4Cycles                   ((uint32_t)(0x02<<18))
#define ADC_SampleTime_8Cycles                   ((uint32_t)(0x03<<18))
#define ADC_SampleTime_16Cycles                  ((uint32_t)(0x04<<18))
#define ADC_SampleTime_32Cycles                  ((uint32_t)(0x05<<18))
#define ADC_SampleTime_64Cycles                  ((uint32_t)(0x06<<18))
#define ADC_SampleTime_128Cycles                 ((uint32_t)(0x07<<18))
#define IS_ADC_SAMPLE_TIME(TIME) (((TIME) == ADC_SampleTime_1Cycles) || \
                                  ((TIME) == ADC_SampleTime_2Cycles) || \
                                  ((TIME) == ADC_SampleTime_4Cycles) || \
                                  ((TIME) == ADC_SampleTime_8Cycles) || \
                                  ((TIME) == ADC_SampleTime_16Cycles) || \
                                  ((TIME) == ADC_SampleTime_32Cycles) || \
                                  ((TIME) == ADC_SampleTime_64Cycles) || \
                                  ((TIME) == ADC_SampleTime_128Cycles))
/**
  * @}
  */ 
  
/** @defgroup ADC_ConVertChanel
  * @{
  */ 
#define ADC_Channel_Sigle_P0_R0                                ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_P1_R2                                ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_P2_R4                                ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_P3_R6                                ((uint32_t)0x03000000)
#define ADC_Channel_Sigle_P4_R8                                ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_P5_R10                               ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_P6_R12                               ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_P7_R14                               ((uint32_t)0x03000000)
#define ADC_Channel_Sigle_P8_R16                               ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_P9_R18                               ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_Int_VREF_R20                         ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_DAC_R21                              ((uint32_t)0x03000000)
#define ADC_Channel_Sigle_VSS_P_R22                            ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_VSS_P_R23                            ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_N0_R1                                ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_N1_R3                                ((uint32_t)0x03000000)
#define ADC_Channel_Sigle_N2_R5                                ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_N3_R7                                ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_N4_R9                                ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_N5_R11                               ((uint32_t)0x03000000)
#define ADC_Channel_Sigle_N6_R13                               ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_N7_R15                               ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_N8_R17                               ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_N9_R19                               ((uint32_t)0x03000000)
#define ADC_Channel_Sigle_VSS_R20                              ((uint32_t)0x00000000)
#define ADC_Channel_Sigle_VSS_R21                              ((uint32_t)0x01000000)
#define ADC_Channel_Sigle_VSS_R22                              ((uint32_t)0x02000000)
#define ADC_Channel_Sigle_VSS_R23                              ((uint32_t)0x03000000)





#define IS_ADC_CONVERTCHANNEL(CONVERT)(((CONVERT) == ADC_Resolution_12b) || \
                                       ((CONVERT) == ADC_Resolution_10b) || \
                                       ((CONVERT) == ADC_Resolution_8b) || \
                                       ((CONVERT) == ADC_Resolution_6b))
                                      
/**
  * @}
  */ 
  
  
/** @defgroup ADC_extrenal_trigger_sources_for_regular_channels_conversion 
  * @{
  */ 
#define ADC_ExternalTrigInjecConv_STADC               ((uint32_t)0x00000000)
#define ADC_ExternalTrigInjecConv_ACMP                ((uint32_t)0x00000100)
#define ADC_ExternalTrigInjecConv_TIMER               ((uint32_t)0x00000200)

#define IS_ADC_EXT_TRIG(REGTRIG) (((REGTRIG) == ADC_ExternalTrigInjecConv_STADC) || \
                                  ((REGTRIG) == ADC_ExternalTrigInjecConv_ACMP) || \
                                  ((REGTRIG) == ADC_ExternalTrigInjecConv_TIMER))
                                  
  
/** @defgroup ADC_trig_source_cmp_select 
  * @{
  */ 
#define ADC_TRIG_ACMP0                        ((uint32_t)0x00000000)
#define ADC_TRIG_ACMP1                        ((uint32_t)0x00004000)


#define IS_ADC_TRIGCMP(CMP) (((CMP) == ADC_TRIG_ACMP0) || \
                             ((CMP) == ADC_TRIG_ACMP1)  )
/**
  * @}
  */ 
                                
/** @defgroup ADC_trig_source_timer_select 
  * @{
  */ 
#define ADC_TRIG_TMR0                        ((uint32_t)0x00000000)
#define ADC_TRIG_TMR1                        ((uint32_t)0x00000100)
#define ADC_TRIG_TMR2                        ((uint32_t)0x00000200)

#define IS_ADC_TRIGTMR(TMR) (((TMR) == ADC_TRIG_TMR0) || \
                             ((TMR) == ADC_TRIG_TMR1) || \
                             ((TMR) == ADC_TRIG_TMR2))
/**
  * @}
  */                                   
      
/** @defgroup ADC_unvalid_convert_number_config 
  * @{
  */ 
#define ADC_UNVALID_0                      ((uint8_t)0x0)
#define ADC_UNVALID_1                      ((uint8_t)0x1)
#define ADC_UNVALID_2                      ((uint8_t)0x2)
#define ADC_UNVALID_3                      ((uint8_t)0x3)
#define ADC_UNVALID_4                      ((uint8_t)0x4)
#define ADC_UNVALID_5                      ((uint8_t)0x5)
#define ADC_UNVALID_6                      ((uint8_t)0x6)
#define ADC_UNVALID_7                      ((uint8_t)0x7)
#define ADC_UNVALID_8                      ((uint8_t)0x8)
#define ADC_UNVALID_9                      ((uint8_t)0x9)
#define ADC_UNVALID_10                     ((uint8_t)0x10)
#define ADC_UNVALID_11                     ((uint8_t)0x11)
#define ADC_UNVALID_12                     ((uint8_t)0x12)
#define ADC_UNVALID_13                     ((uint8_t)0x13)
#define ADC_UNVALID_14                     ((uint8_t)0x14)
#define ADC_UNVALID_15                     ((uint8_t)0x15)



#define IS_ADC_UNVALID(UNVALID)(((UNVALID) == ADC_UNVALID_0 ) || \
                               ((UNVALID) == ADC_UNVALID_1 ) || \
                               ((UNVALID) == ADC_UNVALID_2 ) || \
                               ((UNVALID) == ADC_UNVALID_3 ) || \
                               ((UNVALID) == ADC_UNVALID_4 ) || \
                               ((UNVALID) == ADC_UNVALID_5 ) || \
                               ((UNVALID) == ADC_UNVALID_6 ) || \
                               ((UNVALID) == ADC_UNVALID_7 ) || \
                               ((UNVALID) == ADC_UNVALID_8 ) || \
                               ((UNVALID) == ADC_UNVALID_9 ) || \
                               ((UNVALID) == ADC_UNVALID_10) || \
                               ((UNVALID) == ADC_UNVALID_11) || \
                               ((UNVALID) == ADC_UNVALID_12) || \
                               ((UNVALID) == ADC_UNVALID_13) || \
                               ((UNVALID) == ADC_UNVALID_14) || \
                               ((UNVALID) == ADC_UNVALID_15) )  
     
     
     
     
      
/** @defgroup ADC_valid_convert_number_config 
  * @{
  */        
#define ADC_VALID_2                      ((uint8_t)0x0) 
#define ADC_VALID_4                      ((uint8_t)0x1) 
#define ADC_VALID_8                      ((uint8_t)0x2) 
#define ADC_VALID_16                     ((uint8_t)0x3) 
#define ADC_VALID_32                     ((uint8_t)0x4) 
#define ADC_VALID_64                     ((uint8_t)0x5) 
#define ADC_VALID_128                    ((uint8_t)0x6) 
#define ADC_VALID_256                    ((uint8_t)0x7) 


#define IS_ADC_VALID(VALID) (((VALID) == ADC_VALID_2  ) || \
                             ((VALID) == ADC_VALID_4  ) || \
                             ((VALID) == ADC_VALID_8  ) || \
                             ((VALID) == ADC_VALID_16 ) || \
                             ((VALID) == ADC_VALID_32 ) || \
                             ((VALID) == ADC_VALID_64 ) || \
                             ((VALID) == ADC_VALID_128) || \
                             ((VALID) == ADC_VALID_256) )
/**
  * @}
  */       
          
          
  /** @defgroup ADC_Compare_Channel
  * @{
  */ 
#define ADC_Cmpch_0                               ((uint8_t)0x00)
#define ADC_Cmpch_1                               ((uint8_t)0x01)
#define ADC_Cmpch_2                               ((uint8_t)0x02)
#define ADC_Cmpch_3                               ((uint8_t)0x03)
#define ADC_Cmpch_4                               ((uint8_t)0x04)
#define ADC_Cmpch_5                               ((uint8_t)0x05)
#define ADC_Cmpch_6                               ((uint8_t)0x06)
#define ADC_Cmpch_7                               ((uint8_t)0x07)
#define ADC_Cmpch_8                               ((uint8_t)0x08)
#define ADC_Cmpch_9                               ((uint8_t)0x09)
#define ADC_Cmpch_10                              ((uint8_t)0x0A)
#define ADC_Cmpch_11                              ((uint8_t)0x0B)
#define ADC_Cmpch_12                              ((uint8_t)0x0C)
#define ADC_Cmpch_13                              ((uint8_t)0x0D)
#define ADC_Cmpch_14                              ((uint8_t)0x0E)
#define ADC_Cmpch_15                              ((uint8_t)0x0F)
#define ADC_Cmpch_16                              ((uint8_t)0x10)
#define ADC_Cmpch_17                              ((uint8_t)0x11)
#define ADC_Cmpch_18                              ((uint8_t)0x12)
#define ADC_Cmpch_19                              ((uint8_t)0x13)
#define ADC_Cmpch_20                              ((uint8_t)0x14)
#define ADC_Cmpch_21                              ((uint8_t)0x15)
#define ADC_Cmpch_22                              ((uint8_t)0x16)
#define ADC_Cmpch_23                              ((uint8_t)0x17)

    
#define IS_ADC_CMPCH(CMPCH)    ( ((CMPCH) == ADC_Cmpch_0) || \
                                 ((CMPCH) == ADC_Cmpch_1) || \
                                 ((CMPCH) == ADC_Cmpch_2) || \
                                 ((CMPCH) == ADC_Cmpch_3) || \
                                 ((CMPCH) == ADC_Cmpch_4) || \
                                 ((CMPCH) == ADC_Cmpch_5) || \
                                 ((CMPCH) == ADC_Cmpch_6) || \
                                 ((CMPCH) == ADC_Cmpch_7) || \
                                 ((CMPCH) == ADC_Cmpch_8) || \
                                 ((CMPCH) == ADC_Cmpch_9) || \
                                 ((CMPCH) == ADC_Cmpch_10) || \
                                 ((CMPCH) == ADC_Cmpch_11) || \
                                 ((CMPCH) == ADC_Cmpch_12) || \
                                 ((CMPCH) == ADC_Cmpch_13) || \
                                 ((CMPCH) == ADC_Cmpch_14) || \
                                 ((CMPCH) == ADC_Cmpch_15) || \
                                 ((CMPCH) == ADC_Cmpch_16) || \
                                 ((CMPCH) == ADC_Cmpch_17) || \
                                 ((CMPCH) == ADC_Cmpch_18) || \
                                 ((CMPCH) == ADC_Cmpch_19) || \
                                 ((CMPCH) == ADC_Cmpch_20) || \
                                 ((CMPCH) == ADC_Cmpch_21) || \
                                 ((CMPCH) == ADC_Cmpch_22) || \
                                 ((CMPCH) == ADC_Cmpch_23))
/**
  * @}
  */ 
         
         
         
                                   
/** @defgroup ADC_flags_definition 
  * @{
  */ 
#define ADC_FLAG_BUSY                               ((uint8_t)0x08)
#define ADC_FLAG_CMPF1                              ((uint8_t)0x04)
#define ADC_FLAG_CMPF0                              ((uint8_t)0x02)
#define ADC_FLAG_ADF                                ((uint8_t)0x01)
  
 


#define IS_ADC_CLEAR_FLAG(FLAG) (((FLAG) == ADC_FLAG_CMPF1) || \
                                  ((FLAG) == ADC_FLAG_CMPF0) || \
                                  ((FLAG)== ADC_FLAG_ADF))    
   

#define IS_ADC_GET_FLAG(FLAG) (((FLAG) == ADC_FLAG_BUSY) || \
                               ((FLAG) == ADC_FLAG_CMPF1) || \
                               ((FLAG) == ADC_FLAG_CMPF0) || \
                               ((FLAG)== ADC_FLAG_ADF))     
                         
                               
/**
  * @}
  */ 



/** @defgroup ADC__trigger_edge_for_conversion 
  * @{
  */ 
#define ADC_TRGCOND_Low_level     ((uint32_t)0x00000000)
#define ADC_TRGCOND_Rising        ((uint32_t)0x00000400)
#define ADC_TRGCOND_Falling       ((uint32_t)0x00000800)
#define ADC_TRGCOND_High_level    ((uint32_t)0x00000C00)
#define IS_ADC_TRGCOND(LEVEL) (((LEVEL)  == ADC_TRGCOND_Low_level) || \
                                ((LEVEL) == ADC_TRGCOND_Rising) || \
                                ((LEVEL) == ADC_TRGCOND_Falling) || \
                                ((LEVEL) == ADC_TRGCOND_High_level))
                                            
/** 
  * @}
  */ 



/** @defgroup ADC_Clk_Duty_Mode_for_conversion 
  * @{
  */ 
#define ADC_ClkMode_0        ((uint32_t)0x00000000)
#define ADC_ClkMode_1        ((uint32_t)0x00000001)
#define ADC_ClkMode_2        ((uint32_t)0x00000002)
#define IS_ADC_CLKMODE(CLKMODE) (((CLKMODE)  == ADC_ClkMode_0) || \
                                ((CLKMODE) == ADC_ClkMode_1) || \
                                ((CLKMODE) == ADC_ClkMode_2))
                                            
/** 
  * @}
  */ 



/** @defgroup ADC_Input_Mode_for_conversion 
  * @{
  */ 
#define ADC_InputMode_Single        ((uint32_t)0x00000080)
#define ADC_InputMode_Diff          ((uint32_t)0x00000000)
#define IS_ADC_INPUTMODE(DIFF) (((DIFF)  == ADC_InputMode_Single) || \
                                ((DIFF) == ADC_InputMode_Diff))
                                            
/** 
  * @}
  */ 


/** @defgroup ADC_Offex_for_conversion 
  * @{
  */ 
#define ADC_Offex_Normal       ((uint32_t)0x00000000)
#define ADC_Offex_Exchange     ((uint32_t)0x00008000)
#define IS_ADC_OFFEX(OFFEX)    (((OFFEX)  == ADC_Offex_Normal) || \
                                ((OFFEX)  == ADC_Offex_Exchange))
                                            
/** 
  * @}
  */ 

#define IS_ADC_TRIMDEALY(TRDELAYTIME)   ((TRDELAYTIME) <= 0xFF)

#define IS_ADC_CMPD(CMPD)               ((CMPD) <= 0xFFF)

#define IS_ADC_CMPMATCNT(CMPCNT)        ((CMPCNT) <= 0x3F)

#define IS_ADC_CHANNEL_LENGTH(LENGTH)   (((LENGTH) >= 0x1) && ((LENGTH) <= 0xFFFFFF))

#define IS_ADC_UNVLID_NUMBER(NUMBER)    ( ((NUMBER) <= 0xF))

#define IS_ADC_VLID_NUMBER(NUMBER)      ( ((NUMBER) <= 0x7))
        
#define IS_ADC_CAL_S(CAL)               ( ((CAL) <= 0x1))
    


/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/  

/*  Function used to set the ADC configuration to the default reset state *****/  

void ADC_DeInit(void);
void ADC_Init(ADC_InitTypeDef * ADC_InitStruct);
void ADC_StructInit(ADC_InitTypeDef * ADC_InitStruct);
void ADC_Cmd(FunctionalState NewState);
void ADC_ITConfig(uint16_t ADC_IT, FunctionalState NewState);
void ADC_SoftwareStartConvCmd(void);
FlagStatus ADC_GetSoftwareStartConvStatus(void);    
void ADC_ChannelConfig(uint8_t ADC_Channel,uint32_t ADC_SampleTime);
void ADC_ExternalTrigConvCmd(FunctionalState NewState);
void ADC_ExternalTrigSourceConfig(uint32_t ADC_ExternalTrigConv);
uint16_t ADC_GetConversionValue(void);
FlagStatus ADC_GetFlagStatus(uint8_t ADC_FLAG);
void ADC_ClearFlag(uint8_t ADC_CLR_FLAG);
ITStatus ADC_GetITStatus(uint16_t ADC_IT);
void ADC_VrefSourceConfig (uint32_t ADC_VREF);
void ADC_ExternalTrigCmpCmd (uint16_t ADC_TrigCMP);
void ADC_ExternalTrigTimerCmd (uint16_t ADC_TRIGTMR);
void ADC_ConversionNumConfig (uint8_t ADC_UNVLD_RS, uint8_t ADC_VALID_NS);
void ADC_ExternalTrigConditionConfig(uint8_t ADC_TRGCOND);
void ADC_CmpInit(uint8_t CMPR,ADC_InitCmpTypedef  *ADC_InitCmpStruct);
void ADC_CmpStructInit(uint8_t CMPR ,ADC_InitCmpTypedef  *ADC_InitCmpStruct);
void ADC_OffsetInit (ADC_InitOffsetTypedef * ADC_OffsetVolCorInit);
void ADC_OffsetStruct (ADC_InitOffsetTypedef  *ADC_OffsetVolCorInit);
FlagStatus ADC_GetValidStatus (uint16_t ADC_Channel);
FlagStatus ADC_GetOverRunStatus (uint16_t ADC_Channel);
void ADC_ConvetModeConfig(uint8_t ADC_ConvertMode);
uint16_t ADC_SingleMode (uint16_t ADC_Channel);
uint16_t *ADC_BurstMode (uint32_t ADC_Channel);
uint16_t *ADC_SingleCycleScanMode(uint32_t ADC_CHER);
uint16_t *ADC_SingleCycleScanModeOne(uint8_t Unvlid_Rs,uint8_t Valid_Ns,uint8_t Cal_s,uint32_t ADC_Channels);
uint16_t *ADC_SingleCycleScanModeTwo(uint8_t Unvlid_Rs,uint8_t Valid_Ns,uint8_t Cal_s,uint32_t ADC_Channels);
void  ADC_GetCHSRStatus(uint32_t ADC_InputMode, uint32_t Offex);



     
 #ifdef __cplusplus
}
#endif

#endif /*__SCSA36FX30_ADC_H */

/**
  * @}
  */ 

/**
  * @}
  */ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

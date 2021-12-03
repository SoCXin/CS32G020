/**
  ******************************************************************************
  * @file    csa36fx30_tim.h
  * @author  Chipsea Application Team
  * @version V1.0.0
  * @date    29-January-2018
  * @brief   This file contains all the functions prototypes for the TIM 
  *          firmware library. 
  ******************************************************************************  
  */

#ifndef __csa36fx30_TIM_H
#define __csa36fx30_TIM_H

#ifdef  __cplusplus
extern "C" {
#endif
    
/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup csa36fx30_StdPeriph_Driver
  * @{ */
  

/** @addtogroup TIM
  * @{ */
   
/******************************************************************************/
/*                                                                            */
/*                         Timers (TIM)  Bit   Defination                     */
/*                                                                            */
/******************************************************************************/
    
/*******************  Bit definition for TIMX_CR register  ********************/
#define TIM_HW_DIS                          ((uint32_t)0x02000000)             /*!< HW_DIS control surport bit*/
#define TIM_HW_EN                           ((uint32_t)0x01000000)             /*!< HW_EN control surport bit*/
#define HW_DIS_FTR                          ((uint32_t)0x00C00000)             /*!< HW_DIS FTR config bits */
#define HW_DIS_FTR_0                        ((uint32_t)0x00400000)             /*!< Bit 0 */
#define HW_DIS_FTR_1                        ((uint32_t)0x00800000)             /*!< Bit 1 */
#define HW_DIS_S                            ((uint32_t)0x00300000)             /*!< HW_DIS TRIG Source config bits */
#define HW_DIS_S_0                          ((uint32_t)0x00100000)             /*!< Bit 0 */
#define HW_DIS_S_1                          ((uint32_t)0x00200000)             /*!< Bit 1 */
#define HW_EN_FTR                           ((uint32_t)0x000C0000)             /*!< HW_EN FTR config bits */
#define HW_EN_FTR_0                         ((uint32_t)0x00040000)             /*!< Bit 0 */
#define HW_EN_FTR_1                         ((uint32_t)0x00080000)             /*!< Bit 1 */
#define HW_EN_S                             ((uint32_t)0x00030000)             /*!< HW_EN TRIG Source config bits */
#define HW_EN_S_0                           ((uint32_t)0x00010000)             /*!< Bit 0 */
#define HW_EN_S_1                           ((uint32_t)0x00020000)             /*!< Bit 1 */
#define TxRate                              ((uint32_t)0x00000F00)             /*!< TIMX Rate config bits*/
#define TxRate_0                            ((uint32_t)0x00000100)             /*!< Bit 0 */
#define TxRate_1                            ((uint32_t)0x00000200)             /*!< Bit 1 */
#define TxRate_2                            ((uint32_t)0x00000400)             /*!< Bit 2 */
#define TxRate_3                            ((uint32_t)0x00000800)             /*!< Bit 3 */
#define CNTR_EN                             ((uint32_t)0x00000020)             /*!< TIM Count reflash enable bit*/
#define PWM_INV                             ((uint32_t)0x00000010)             /*!< TIM PWMOutput invert enable bit */
#define TxCKS                               ((uint32_t)0x00000008)             /*!< TIM Count function enable bit*/
#define TxRST                               ((uint32_t)0x00000004)             /*!< TIM Clear count enable bit*/
#define TxIE                                ((uint32_t)0x00000002)             /*!< TIM interrupt function enable bit*/
#define TxEN                                ((uint32_t)0x00000001)             /*!< TIM  enable bit*/


/*******************  Bit definition for TIMx_CMPR register  ******************/
#define TMx_PERIOD                          ((uint16_t)0xFFFF)                 /*!< TIM  Period(Spillover) Value bits*/

/*******************  Bit definition for TIMx_DUTY register  ******************/
#define TMx_DUTY                            ((uint16_t)0xFFFF)                 /*!< TIM  Duty  Value bits */

/*******************  Bit definition for TIMx_CNTR register  ******************/
#define TMx_CNT                             ((uint16_t)0xFFFF)                 /*!< TIM  Value bits*/

/*******************  Bit definition for TIMx_SR register  ********************/
#define TxIF                                ((uint16_t)0x0001)                 /*!< TIM  interrupt flag bit*/

/*******************  Bit definition for TIMx_PWMR register  ******************/
#define HBPWMx_EN                           ((uint16_t)0x8000)                 /*!< ComplementaryPWM enble bit*/
#define PWMxH_INV                           ((uint16_t)0x2000)                 /*!< PWMxH invert enble bit*/
#define PWMxL_INV                           ((uint16_t)0x1000)                 /*!< PWMxL invert enble bit*/
#define TMx_DTCK                            ((uint16_t)0x0700)                 /*!< Dead zone clk rate value bits */
#define TMx_DTCK_0                          ((uint16_t)0x0100)                 /*!< Bit 0 */
#define TMx_DTCK_1                          ((uint16_t)0x0200)                 /*!< Bit 1 */
#define TMx_DTCK_2                          ((uint16_t)0x0400)                 /*!< Bit 2 */
#define TMx_DTCNTP                          ((uint16_t)0x0070)                 /*!< dead zone time config of ComplementaryPWM rising edge  bits*/
#define TMx_DTCNTP_0                        ((uint16_t)0x0010)                 /*!< Bit 0 */
#define TMx_DTCNTP_1                        ((uint16_t)0x0020)                 /*!< Bit 1 */
#define TMx_DTCNTP_2                        ((uint16_t)0x0040)                 /*!< Bit 2 */
#define TMx_DTCNTN                          ((uint16_t)0x0007)                 /*!< dead zone time config of ComplementaryPWM falling edge bits*/
#define TMx_DTCNTN_0                        ((uint16_t)0x0001)                 /*!< Bit 0 */
#define TMx_DTCNTN_1                        ((uint16_t)0x0002)                 /*!< Bit 1 */
#define TMx_DTCNTN_2                        ((uint16_t)0x0004)                 /*!< Bit 2 */

/******************************************************************************/
/*                                                                            */
/*                Timers (TIM)  Interal  constants Defination                 */
/*                                                                            */
/******************************************************************************/
/*******************   HW Close filtration config  ****************************/
#define _TIM_HW_DIS_FTR_4_PCLK               ((uint32_t)0x00000000)            /* DIS FTR(PCLK) = 4 */ 
#define _TIM_HW_DIS_FTR_8_PCLK               ((uint32_t)0x00400000)            /* DIS FTR(PCLK) = 8 */ 
#define _TIM_HW_DIS_FTR_16_PCLK              ((uint32_t)0x00800000)            /* DIS FTR(PCLK) = 16 */ 
#define _TIM_HW_DIS_FTR_32_PCLK              ((uint32_t)0x00C00000)            /* DIS FTR(PCLK) = 32 */ 

/*******************  HW Close trigger source config  *************************/
#define _TIM_HW_DIS_TRGSource_COMP0_Fall     ((uint32_t)0x00000000)            /* DIS TRGSource(FALL) = COMP0 */
#define _TIM_HW_DIS_TRGSource_COMP1_Fall     ((uint32_t)0x00100000)            /* DIS TRGSource(FALL) = COMP1 */
#define _TIM_HW_DIS_TRGSource_PB0_Fall       ((uint32_t)0x00200000)            /* DIS TRGSource(FALL) = PB0 */
#define _TIM_HW_DIS_TRGSource_PB12_Fall      ((uint32_t)0x00300000)            /* DIS TRGSource(FALL) = PB12 */

/*******************   HW EN filtration config  *******************************/
#define _TIM_HW_EN_FTR_4_PCLK                ((uint32_t)0x00000000)            /* EN FTR(PCLK) = 4 */ 
#define _TIM_HW_EN_FTR_8_PCLK                ((uint32_t)0x00040000)            /* EN FTR(PCLK) = 8 */ 
#define _TIM_HW_EN_FTR_16_PCLK               ((uint32_t)0x00080000)            /* EN FTR(PCLK) = 16 */ 
#define _TIM_HW_EN_FTR_32_PCLK               ((uint32_t)0x000C0000)            /* EN FTR(PCLK) = 32 */ 

/*******************  HW EN trigger source config  ****************************/
#define _TIM_HW_EN_TRGSource_COMP0_Fall      ((uint32_t)0x00000000)            /* EN TRGSource(FALL) = COMP0 */
#define _TIM_HW_EN_TRGSource_COMP1_Fall      ((uint32_t)0x00010000)            /* EN TRGSource(FALL) = COMP1 */
#define _TIM_HW_EN_TRGSource_PB0_Fall        ((uint32_t)0x00020000)            /* EN TRGSource(FALL) = PB0 */
#define _TIM_HW_EN_TRGSource_PB12_Fall       ((uint32_t)0x00030000)            /* EN TRGSource(FALL) = PB12 */

/*******************  Clock Division config  *********************************/
#define _TIM_CKD_DIV1                        ((uint32_t)0x00000000)            /* TIM_CLK = TMRx_CLK/1 */ 
#define _TIM_CKD_DIV2                        ((uint32_t)0x00000100)            /* TIM_CLK = TMRx_CLK/2 */ 
#define _TIM_CKD_DIV4                        ((uint32_t)0x00000200)            /* TIM_CLK = TMRx_CLK/4 */ 
#define _TIM_CKD_DIV8                        ((uint32_t)0x00000300)            /* TIM_CLK = TMRx_CLK/8 */
#define _TIM_CKD_DIV16                       ((uint32_t)0x00000400)            /* TIM_CLK = TMRx_CLK/16 */
#define _TIM_CKD_DIV32                       ((uint32_t)0x00000500)            /* TIM_CLK = TMRx_CLK/32 */
#define _TIM_CKD_DIV64                       ((uint32_t)0x00000600)            /* TIM_CLK = TMRx_CLK/64 */
#define _TIM_CKD_DIV128                      ((uint32_t)0x00000700)            /* TIM_CLK = TMRx_CLK/128 */
#define _TIM_CKD_DIV256                      ((uint32_t)0x00000800)            /* TIM_CLK = TMRx_CLK/256 */
#define _TIM_CKD_DIV512                      ((uint32_t)0x00000900)            /* TIM_CLK = TMRx_CLK/512 */

/*******************  DeadZone CLK Division config  ***************************/
#define _TIM_DTCK_DIV1                       ((uint16_t)0x0000)                /* TMx_DTCK = TMRx_CLK/1 */
#define _TIM_DTCK_DIV2                       ((uint16_t)0x0100)                /* TMx_DTCK = TMRx_CLK/2 */
#define _TIM_DTCK_DIV4                       ((uint16_t)0x0200)                /* TMx_DTCK = TMRx_CLK/4 */
#define _TIM_DTCK_DIV8                       ((uint16_t)0x0300)                /* TMx_DTCK = TMRx_CLK/8 */
#define _TIM_DTCK_DIV16                      ((uint16_t)0x0400)                /* TMx_DTCK = TMRx_CLK/16 */







/* Exported constants --------------------------------------------------------*/
/**
 * @defgroup HW Close filtration config 
 * @{ */
#define TIM_HW_DIS_FTR_4_PCLK               _TIM_HW_DIS_FTR_4_PCLK             /* DIS FTR(PCLK) = 4 */ 
#define TIM_HW_DIS_FTR_8_PCLK               _TIM_HW_DIS_FTR_8_PCLK             /* DIS FTR(PCLK) = 8 */ 
#define TIM_HW_DIS_FTR_16_PCLK              _TIM_HW_DIS_FTR_16_PCLK            /* DIS FTR(PCLK) = 16 */ 
#define TIM_HW_DIS_FTR_32_PCLK              _TIM_HW_DIS_FTR_32_PCLK            /* DIS FTR(PCLK) = 32 */ 
                                            
#define IS_TIM_HW_DIS_FTR(Value)            (((Value) == TIM_HW_DIS_FTR_4_PCLK) || \
                                             ((Value) == TIM_HW_DIS_FTR_8_PCLK) || \
                                             ((Value) == TIM_HW_DIS_FTR_16_PCLK)|| \
                                             ((Value) == TIM_HW_DIS_FTR_32_PCLK))
/**  @} */  




/** @defgroup HW Close trigger source config
  * @{ */
#define TIM_HW_DIS_TRGSource_COMP0_Fall     _TIM_HW_DIS_TRGSource_COMP0_Fall    /* DIS TRGSource(FALL) = COMP0 */
#define TIM_HW_DIS_TRGSource_COMP1_Fall     _TIM_HW_DIS_TRGSource_COMP1_Fall    /* DIS TRGSource(FALL) = COMP1 */
#define TIM_HW_DIS_TRGSource_PB0_Fall       _TIM_HW_DIS_TRGSource_PB0_Fall      /* DIS TRGSource(FALL) = PB0 */
#define TIM_HW_DIS_TRGSource_PB12_Fall      _TIM_HW_DIS_TRGSource_PB12_Fall     /* DIS TRGSource(FALL) = PB12 */

#define IS_TIM_HW_DIS_TRGSource(Value)      (((Value) == TIM_HW_DIS_TRGSource_COMP0_Fall) || \
                                             ((Value) == TIM_HW_DIS_TRGSource_COMP1_Fall) || \
                                             ((Value) == TIM_HW_DIS_TRGSource_PB0_Fall)   || \
                                             ((Value) == TIM_HW_DIS_TRGSource_PB12_Fall))
/**  @} */      
 
 
 
 
/** @defgroup HW EN filtration config 
  * @{ */
#define TIM_HW_EN_FTR_4_PCLK                _TIM_HW_EN_FTR_4_PCLK               /* EN FTR(PCLK) = 4 */ 
#define TIM_HW_EN_FTR_8_PCLK                _TIM_HW_EN_FTR_8_PCLK               /* EN FTR(PCLK) = 8 */ 
#define TIM_HW_EN_FTR_16_PCLK               _TIM_HW_EN_FTR_16_PCLK              /* EN FTR(PCLK) = 16 */ 
#define TIM_HW_EN_FTR_32_PCLK               _TIM_HW_EN_FTR_32_PCLK              /* EN FTR(PCLK) = 32 */ 
                                            
#define IS_TIM_HW_EN_FTR(Value)             (((Value) == TIM_HW_EN_FTR_4_PCLK) || \
                                             ((Value) == TIM_HW_EN_FTR_8_PCLK) || \
                                             ((Value) == TIM_HW_EN_FTR_16_PCLK)|| \
                                             ((Value) == TIM_HW_EN_FTR_32_PCLK))
/**  @} */      
  
  


/** @defgroup HW EN trigger source config
  * @{  */
#define TIM_HW_EN_TRGSource_COMP0_Fall     _TIM_HW_EN_TRGSource_COMP0_Fall      /* EN TRGSource(FALL) = COMP0 */
#define TIM_HW_EN_TRGSource_COMP1_Fall     _TIM_HW_EN_TRGSource_COMP1_Fall      /* EN TRGSource(FALL) = COMP1 */
#define TIM_HW_EN_TRGSource_PB0_Fall       _TIM_HW_EN_TRGSource_PB0_Fall        /* EN TRGSource(FALL) = PB0 */
#define TIM_HW_EN_TRGSource_PB12_Fall      _TIM_HW_EN_TRGSource_PB12_Fall       /* EN TRGSource(FALL) = PB12 */

#define IS_TIM_HW_EN_TRGSource(Value)      (((Value) == TIM_HW_EN_TRGSource_COMP0_Fall) || \
                                            ((Value) == TIM_HW_EN_TRGSource_COMP1_Fall) || \
                                            ((Value) == TIM_HW_EN_TRGSource_PB0_Fall)   || \
                                            ((Value) == TIM_HW_EN_TRGSource_PB12_Fall))
/**  @} */        
 



/** @defgroup Clock Division config
  * @{  */
#define TIM_CKD_DIV1                       _TIM_CKD_DIV1                       /* TIM_CLK = TMRx_CLK/1 */ 
#define TIM_CKD_DIV2                       _TIM_CKD_DIV2                       /* TIM_CLK = TMRx_CLK/2 */ 
#define TIM_CKD_DIV4                       _TIM_CKD_DIV4                       /* TIM_CLK = TMRx_CLK/4 */ 
#define TIM_CKD_DIV8                       _TIM_CKD_DIV8                       /* TIM_CLK = TMRx_CLK/8 */
#define TIM_CKD_DIV16                      _TIM_CKD_DIV16                      /* TIM_CLK = TMRx_CLK/16 */
#define TIM_CKD_DIV32                      _TIM_CKD_DIV32                      /* TIM_CLK = TMRx_CLK/32 */
#define TIM_CKD_DIV64                      _TIM_CKD_DIV64                      /* TIM_CLK = TMRx_CLK/64 */
#define TIM_CKD_DIV128                     _TIM_CKD_DIV128                     /* TIM_CLK = TMRx_CLK/128 */
#define TIM_CKD_DIV256                     _TIM_CKD_DIV256                     /* TIM_CLK = TMRx_CLK/256 */
#define TIM_CKD_DIV512                     _TIM_CKD_DIV512                     /* TIM_CLK = TMRx_CLK/512 */
#define IS_TIM_CKD_DIV(Value)              (((Value) == TIM_CKD_DIV1)   || \
                                            ((Value) == TIM_CKD_DIV2)   || \
                                            ((Value) == TIM_CKD_DIV4)   || \
                                            ((Value) == TIM_CKD_DIV8)   || \
                                            ((Value) == TIM_CKD_DIV16)  || \
                                            ((Value) == TIM_CKD_DIV32)  || \
                                            ((Value) == TIM_CKD_DIV64)  || \
                                            ((Value) == TIM_CKD_DIV128) || \
                                            ((Value) == TIM_CKD_DIV256) || \
                                            ((Value) == TIM_CKD_DIV512))
/**  @} */   
  
 


/** @defgroup DeadZone CLK Division config
  * @{  */ 
#define TIM_DTCK_DIV1                       _TIM_DTCK_DIV1                    /* TMx_DTCK = TMRx_CLK/1 */
#define TIM_DTCK_DIV2                       _TIM_DTCK_DIV2                    /* TMx_DTCK = TMRx_CLK/2 */
#define TIM_DTCK_DIV4                       _TIM_DTCK_DIV4                    /* TMx_DTCK = TMRx_CLK/4 */
#define TIM_DTCK_DIV8                       _TIM_DTCK_DIV8                    /* TMx_DTCK = TMRx_CLK/8 */
#define TIM_DTCK_DIV16                      _TIM_DTCK_DIV16                   /* TMx_DTCK = TMRx_CLK/16 */
                                            
#define IS_TIM_DTCK_DIV(Value)              (((Value) == TIM_DTCK_DIV1)   || \
                                             ((Value) == TIM_DTCK_DIV2)   || \
                                             ((Value) == TIM_DTCK_DIV4)   || \
                                             ((Value) == TIM_DTCK_DIV8)   || \
                                             ((Value) == TIM_DTCK_DIV16))
/**  @} */   



/** @defgroup TIM_Exported_constants 
  * @{ */
  

#define IS_TIM_ALL_PERIPH(PERIPH)            (((PERIPH) == TIM0) || \
                                              ((PERIPH) == TIM1) || \
                                              ((PERIPH) == TIM2)) 

#define IS_TIM_TCMPR(Value)                  (((Value) >= 1) && ((Value) <= 0XFFFF))  

#define IS_TIM_Duty(Value)                   ((Value) <= 0XFFFF)

#define IS_TIM_DTCNTN(Value)                 ((Value) <= 7) 
#define IS_TIM_DTCNTP(Value)                 ((Value) <= 7) 

/**  @} */  



/* Exported types ------------------------------------------------------------*/
/** 
  * @brief  TIM InitType definition */
  
typedef struct
{
    uint32_t  TIM_CKD;                  /*!< Config the timer rate  . 
                                          This parameter can be a value of @ref TIM_Clock_Division_CKD */
    uint32_t  TIM_TCMPR;                /*!< Config the Spillover Value  . 
                                          This parameter can be 1~FFFFH */    
    uint32_t  TIM_PWMDuty;              /*!< Config the PWMDuty Value  . 
                                          This parameter can be 0~TIM_Period */ 
    FunctionalState  TIM_PWMInvertOut;  /*!< Config the PWM invert output  . 
                                          This parameter can be DISABLE or ENABLE */    
}TIM_InitTypeDef;

/** 
  * @brief  TIM DTInitType definition */
  
typedef struct
{
    uint32_t  DTCNTP_Number;            /*!<  dead zone time config of ComplementaryPWM rising edge: 0~7  */                                         
    uint32_t  DTCNTN_Number;            /*!<  dead zone time config of ComplementaryPWM falling edge 0~7  */ 
    uint32_t  DTCK_Number;              /*!<  dead zone clk rate value bits 
                                              This parameter can be a value of @ref DeadZone CLK Division config  */
    FunctionalState  ComplementaryPWM;          /*!< Config the ComplementaryPWM  output  . 
                                                  This parameter can be DISABLE or ENABLE */   
    FunctionalState  ComplementaryPWMH_Invert;  /*!< Config the ComplementaryPWM invert output  . 
                                                  This parameter can be DISABLE or ENABLE */  
    FunctionalState  ComplementaryPWML_Invert;  /*!< Config the ComplementaryPWM invert output  . 
                                                  This parameter can be DISABLE or ENABLE */                                       
}TIM_DTInitTypeDef;

/** 
  * @brief  TIM HWENInitType definition */
  
typedef struct
{
     uint32_t HWENTRGSource;            /*!<  HW EN Trigger source 
                                              This parameter can be a value of @ref HW EN trigger source config  */
     uint32_t HWENFTR;                  /*!<  HW EN filtration CONFIG 
                                              This parameter can be a value of @ref HW EN filtration config  */
     FunctionalState HWEN;              /*!<  HW EN modual enable or not */
                                 
}TIM_HWENInitTypeDef;



/** 
  * @brief  TIM HWDISInitType definition */
  
typedef struct
{
     uint32_t HWDISTRGSource;            /*!<  HW DIS Trigger source 
                                              This parameter can be a value of @ref HW Close trigger source config  */
     uint32_t HWDISFTR;                  /*!<  HW DIS filtration CONFIG 
                                              This parameter can be a value of @ref HW Close filtration config */
     FunctionalState HWDIS;              /*!<  HW DIS modual enable or not */

    
}TIM_HWDISInitTypeDef;


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
/* TimeBase management ********************************************************/

void TIM_DeInit(TIM_TypeDef* TIMx);
void TIM_Init(TIM_TypeDef* TIMx, TIM_InitTypeDef* TIM_InitStruct); 
void TIM_SetClockDivision(TIM_TypeDef* TIMx, uint32_t TIM_CKD_DIV); 
void TIM_SetTCMPR(TIM_TypeDef* TIMx ,uint16_t TCMPR); 
void TIM_SetPWMDuty(TIM_TypeDef* TIMx, uint16_t Duty);  
void TIM_PWMInvertOutPutCmd(TIM_TypeDef* TIMx, FunctionalState NewState) ;

void TIM_DTInit(TIM_TypeDef* TIMx, TIM_DTInitTypeDef* TIM_DTInitStruct); 
void TIM_SetDTCNT(TIM_TypeDef* TIMx ,uint16_t  DTCNTP, uint16_t  DTCNTN);  
void TIM_SetDTClockDivision(TIM_TypeDef* TIMx, uint16_t DTCK); 
void TIM_ComplementaryPWMCmd(TIM_TypeDef* TIMx, FunctionalState NewState); 
void TIM_ComplementaryPWMInvertOutPutCmd(TIM_TypeDef* TIMx, FunctionalState PWMxH_OUT, FunctionalState PWMxL_OUT);

void TIM_HWENInit (TIM_TypeDef* TIMx, TIM_HWENInitTypeDef* TIM_HWENInitStruct) ; 
void TIM_HWENCmd(TIM_TypeDef* TIMx, FunctionalState NewState);  
void TIM_SelectHWENFTR(TIM_TypeDef* TIMx, uint32_t TIM_HW_EN_FTR);
void TIM_SelectHWENSource(TIM_TypeDef* TIMx, uint32_t TIM_HW_EN_TRGSource);

void TIM_HWDISInit (TIM_TypeDef* TIMx, TIM_HWDISInitTypeDef* TIM_HWDISInitStruct);
void TIM_HWDISCmd(TIM_TypeDef* TIMx, FunctionalState NewState); 
void TIM_SelectHWDISSource(TIM_TypeDef* TIMx, uint32_t TIM_HW_DIS_TRGSource);
void TIM_SelectHWDISFTR(TIM_TypeDef* TIMx, uint32_t TIM_HW_DIS_FTR);

void TIM_ITConfig(TIM_TypeDef* TIMx, FunctionalState NewState); 
void TIM_Cmd(TIM_TypeDef* TIMx, FunctionalState NewState); 
FlagStatus  TIM_GetFlagStatus(TIM_TypeDef* TIMx);
void TIM_ClearCount(TIM_TypeDef* TIMx);
void TIM_ClearITflag(TIM_TypeDef* TIMx);
void TIM_ClkSourceConfig(TIM_TypeDef* TIMx, FunctionalState NewState);
uint16_t  TIM_GetCNTValue(TIM_TypeDef* TIMx);
void TIM_CNTRCmd(TIM_TypeDef* TIMx, FunctionalState NewState);




#ifdef  __cplusplus
}
#endif
#endif /*__csa36fx30_TIM_H */
/**  @} */   

/**  @} */  

/************************ (C) COPYRIGHT CHIPSEA *****END OF FILE**************/

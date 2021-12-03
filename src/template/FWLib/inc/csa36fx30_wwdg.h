/**
  ******************************************************************************
  * @file    csa36fx30_wwdg.h
  * @author  Chipsea Application Team
  * @version V1.0.0
  * @date    29-January-2018
  * @brief   This file contains all the functions prototypes for the TIM 
  *          firmware library. 
  ******************************************************************************  
  */

#ifndef __csa36fx30_WWDG_H
#define __csa36fx30_WWDG_H

#ifdef  __cplusplus
extern "C" {
#endif
    
/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"
/** @addtogroup csa36fx30_StdPeriph_Driver
  * @{ */
  

/** @addtogroup WWDG
  * @{ */

/******************************************************************************/
/*                                                                            */
/*                              WWDG    Bit   Defination                      */
/*                                                                            */
/******************************************************************************/
/****************  Bit definition for WWDTCR register  ************************/    
#define WINCMP                              ((uint32_t)0x003F0000)             /*!< compare window config bits */
#define PERIODSEL                           ((uint32_t)0x00000F00)             /*!< WWDG Periodsel config bits */
#define WWDTIE                              ((uint32_t)0x00000002)             /*!< WWDG interrupt enble config bit */
#define WWDTEN                              ((uint32_t)0x00000001)             /*!< WWDG modual enble config bit */

/****************  Bit definition for WWDTSR register  ************************/    
#define WWDTRF                              ((uint32_t)0x00000002)             /*!< WWDG reset flag bit */
#define WWDTIF                              ((uint32_t)0x00000001)             /*!< WWDG interrupt flag bit */

/****************  Bit definition for WWDTCVR register  ***********************/    
#define WWDTCVAL                            ((uint32_t)0x0000003F)             /*!< WWDG count bits */ 

/******************************************************************************/
/*                                                                            */
/*                  WWDG    Interal  constants Defination                     */
/*                                                                            */
/******************************************************************************/ 
/******************************  select Periodsel  ****************************/ 
#define _WWDG_PERIODSEL_0                   ((uint32_t)0x00000000)             /* Periodsel = 1 * 64 * TWWDT */ 
#define _WWDG_PERIODSEL_1                   ((uint32_t)0x00000100)             /* Periodsel = 2 * 64 * TWWDT */  
#define _WWDG_PERIODSEL_2                   ((uint32_t)0x00000200)             /* Periodsel = 4 * 64 * TWWDT */ 
#define _WWDG_PERIODSEL_3                   ((uint32_t)0x00000300)             /* Periodsel = 8 * 64 * TWWDT */ 
#define _WWDG_PERIODSEL_4                   ((uint32_t)0x00000400)             /* Periodsel = 16 * 64 * TWWDT */ 
#define _WWDG_PERIODSEL_5                   ((uint32_t)0x00000500)             /* Periodsel = 32* 64 * TWWDT */  
#define _WWDG_PERIODSEL_6                   ((uint32_t)0x00000600)             /* Periodsel = 64 * 64 * TWWDT */ 
#define _WWDG_PERIODSEL_7                   ((uint32_t)0x00000700)             /* Periodsel = 128 * 64 * TWWDT */ 
#define _WWDG_PERIODSEL_8                   ((uint32_t)0x00000800)             /* Periodsel = 192* 64 * TWWDT */  
#define _WWDG_PERIODSEL_9                   ((uint32_t)0x00000900)             /* Periodsel = 256* 64 * TWWDT */ 
#define _WWDG_PERIODSEL_10                  ((uint32_t)0x00000A00)             /* Periodsel = 384* 64 * TWWDT */ 
#define _WWDG_PERIODSEL_11                  ((uint32_t)0x00000B00)             /* Periodsel = 512* 64 * TWWDT */ 
#define _WWDG_PERIODSEL_12                  ((uint32_t)0x00000C00)             /* Periodsel = 768* 64 * TWWDT */ 
#define _WWDG_PERIODSEL_13                  ((uint32_t)0x00000D00)             /* Periodsel = 1024* 64 * TWWDT */ 
#define _WWDG_PERIODSEL_14                  ((uint32_t)0x00000E00)             /* Periodsel = 1536* 64 * TWWDT */ 
#define _WWDG_PERIODSEL_15                  ((uint32_t)0x00000F00)             /* Periodsel = 2048* 64 * TWWDT */  



/* Exported constants --------------------------------------------------------*/  
/**
 * @defgroup select Periodsel  
 * @{ */
#define WWDG_PERIODSEL_0                    _WWDG_PERIODSEL_0                 /* Periodsel = 1 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_1                    _WWDG_PERIODSEL_1                 /* Periodsel = 2 * 64 * TWWDT */  
#define WWDG_PERIODSEL_2                    _WWDG_PERIODSEL_2                 /* Periodsel = 4 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_3                    _WWDG_PERIODSEL_3                 /* Periodsel = 8 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_4                    _WWDG_PERIODSEL_4                 /* Periodsel = 16 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_5                    _WWDG_PERIODSEL_5                 /* Periodsel = 32 * 64 * TWWDT */  
#define WWDG_PERIODSEL_6                    _WWDG_PERIODSEL_6                 /* Periodsel = 64 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_7                    _WWDG_PERIODSEL_7                 /* Periodsel = 128 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_8                    _WWDG_PERIODSEL_8                 /* Periodsel = 192 * 64 * TWWDT */  
#define WWDG_PERIODSEL_9                    _WWDG_PERIODSEL_9                 /* Periodsel = 256 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_10                   _WWDG_PERIODSEL_10                /* Periodsel = 384 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_11                   _WWDG_PERIODSEL_11                /* Periodsel = 512 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_12                   _WWDG_PERIODSEL_12                /* Periodsel = 768 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_13                   _WWDG_PERIODSEL_13                /* Periodsel = 1024 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_14                   _WWDG_PERIODSEL_14                /* Periodsel = 1536 * 64 * TWWDT */ 
#define WWDG_PERIODSEL_15                   _WWDG_PERIODSEL_15                /* Periodsel = 2048 * 64 * TWWDT */  

#define IS_WWDG_PERIODSEL(Value)            (((Value) == WWDG_PERIODSEL_0 )       || \
                                             ((Value) == WWDG_PERIODSEL_1 )      || \
                                             ((Value) == WWDG_PERIODSEL_2 )      || \
                                             ((Value) == WWDG_PERIODSEL_3 )      || \
                                             ((Value) == WWDG_PERIODSEL_4 )      || \
                                             ((Value) == WWDG_PERIODSEL_5 )      || \
                                             ((Value) == WWDG_PERIODSEL_6 )      || \
                                             ((Value) == WWDG_PERIODSEL_7 )      || \
                                             ((Value) == WWDG_PERIODSEL_8 )      || \
                                             ((Value) == WWDG_PERIODSEL_9 )      || \
                                             ((Value) == WWDG_PERIODSEL_10 )     || \
                                             ((Value) == WWDG_PERIODSEL_11 )     || \
                                             ((Value) == WWDG_PERIODSEL_12 )     || \
                                             ((Value) == WWDG_PERIODSEL_13 )     || \
                                             ((Value) == WWDG_PERIODSEL_14 )     || \
                                             ((Value) == WWDG_PERIODSEL_15 ))
/**  @} */   




/** @defgroup WWDG_Exported_constants 
  * @{ */
#define IS_WWDG_WWDTRLD_Value(Value)        (Value==0x00005AA5 )  
#define IS_WWDG_WINCMP_Value(Value)         ((Value<=0X3F))  
/**  @} */  


/* Exported types ------------------------------------------------------------*/
/** 
  * @brief  WDG InitType definition */
typedef struct{
    
   uint32_t  WWDG_WINCMP ;                                                     /*!< compare window config  */
   
   uint32_t  WWDG_PERIODSEL ;                                                  /*!< WWDG Periodsel config  */
    
}WWDG_InitTypeDef;



/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
/* WWDG management ************************************************************/
void WWDG_DeInit(void);
void WWDG_Init (WWDG_InitTypeDef*WWDG_InitStruct);
void WWDG_SetPeriodsel(uint32_t WWDG_PERIODSEL);
void WWDG_SetWindowValue(uint32_t WindowValue);    
void WWDG_Cmd(FunctionalState NewState);
void WWDG_ITConfig(FunctionalState NewState);
void WWDG_ClearRTFlag(void);
void WWDG_ClearITFlag(void);
FlagStatus  WWDG_GetITFlagStatus(void);
FlagStatus  WWDG_GetRTFlagStatus(void);
void WWDG_SetReload(void);
uint32_t  WWDG_GetCVR(void);



#ifdef  __cplusplus
}
#endif
#endif /*__csa36fx30_WWDG_H */
/**  @} */   

/**  @} */  


/************************ (C) COPYRIGHT CHIPSEA *****END OF FILE*************/


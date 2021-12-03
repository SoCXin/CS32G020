/**
  ******************************************************************************
  * @file    csa36fx30_iwdg.h
  * @author  Chipsea Application Team
  * @version V1.0.0
  * @date    29-January-2018
  * @brief   This file contains all the functions prototypes for the TIM 
  *          firmware library. 
  ******************************************************************************  
  */

#ifndef __csa36fx30_IWDG_H
#define __csa36fx30_IWDG_H

#ifdef  __cplusplus
extern "C" {
#endif
    
/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"
/** @addtogroup csa36fx30_StdPeriph_Driver
  * @{ */
  

/** @addtogroup IWDG
  * @{ */

/******************************************************************************/
/*                                                                            */
/*                        IWDG    Bit    Defination                           */
/*                                                                            */
/******************************************************************************/ 
/****************  Bit definition for WTSCR register  *************************/            
#define WTSIS                           ((uint32_t)0x00000700)                 /*!< overtime  config bits*/  
#define WTSE                            ((uint32_t)0x00000080)                 /*!< IWDG Modual enable config bit*/     

/******************************************************************************/
/*                                                                            */
/*                  IWDG    Interal  constants Defination                     */
/*                                                                            */
/******************************************************************************/ 
/*************************** select overtime  config  *************************/ 
#define _IWDG_WTSIS_0                   ((uint32_t)0x00000000)                 /* Overtime Space =  2 to the 13 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 13 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                                 
#define _IWDG_WTSIS_1                   ((uint32_t)0x00000100)                 /* Overtime Space =  2 to the 14 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 14 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 


#define _IWDG_WTSIS_2                   ((uint32_t)0x00000200)                 /* Overtime Space =  2 to the 15 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 15 power *TLIRC; when CDELAY[1:0]=10 or 11*/  

#define _IWDG_WTSIS_3                   ((uint32_t)0x00000300)                 /* Overtime Space =  2 to the 16 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 16 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 

#define _IWDG_WTSIS_4                   ((uint32_t)0x00000400)                 /* Overtime Space =  2 to the 12 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 13 power *TLIRC; when CDELAY[1:0]=10 or 11*/  

#define _IWDG_WTSIS_5                   ((uint32_t)0x00000500)                 /* Overtime Space =  2 to the 11 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 14 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 

#define _IWDG_WTSIS_6                   ((uint32_t)0x00000600)                 /* Overtime Space =  2 to the 10 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 15 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 

#define _IWDG_WTSIS_7                   ((uint32_t)0x00000700)                 /* Overtime Space =  2 to the  9 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                    2 to the 16 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                                                    



/* Exported constants --------------------------------------------------------*/  
/**
 * @defgroup select overtime  config
 * @{ */
#define IWDG_WTSIS_0                    _IWDG_WTSIS_0                         /* Overtime Space =  2 to the 13 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 13 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                                        
#define IWDG_WTSIS_1                    _IWDG_WTSIS_1                         /* Overtime Space =  2 to the 14 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 14 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                              
                                                                              
#define IWDG_WTSIS_2                    _IWDG_WTSIS_2                         /* Overtime Space =  2 to the 15 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 15 power *TLIRC; when CDELAY[1:0]=10 or 11*/  
                                                                              
#define IWDG_WTSIS_3                    _IWDG_WTSIS_3                         /* Overtime Space =  2 to the 16 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 16 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                              
#define IWDG_WTSIS_4                    _IWDG_WTSIS_4                         /* Overtime Space =  2 to the 12 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 13 power *TLIRC; when CDELAY[1:0]=10 or 11*/  
                                                                              
#define IWDG_WTSIS_5                    _IWDG_WTSIS_5                         /* Overtime Space =  2 to the 11 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 14 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                              
#define IWDG_WTSIS_6                    _IWDG_WTSIS_6                         /* Overtime Space =  2 to the 10 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 15 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 
                                                                              
#define IWDG_WTSIS_7                    _IWDG_WTSIS_7                         /* Overtime Space =  2 to the  9 power *TLIRC; when CDELAY[1:0]=00 or 01
                                                                                                   2 to the 16 power *TLIRC; when CDELAY[1:0]=10 or 11*/ 

#define IS_IWDG_WTSIS(Value)            (((Value) == IWDG_WTSIS_0 )           || \
                                         ((Value) == IWDG_WTSIS_1 )           || \
                                         ((Value) == IWDG_WTSIS_2 )           || \
                                         ((Value) == IWDG_WTSIS_3 )           || \
                                         ((Value) == IWDG_WTSIS_4 )           || \
                                         ((Value) == IWDG_WTSIS_5 )           || \
                                         ((Value) == IWDG_WTSIS_6 )           || \
                                         ((Value) == IWDG_WTSIS_7 ))
/**  @} */   




/* Exported types ------------------------------------------------------------*/
/** 
  * @brief  WDG InitType definition */
typedef struct{
    uint32_t  IWDG_WTSIS;            
}IWDG_InitTypeDef;




/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
/* IWDG management ************************************************************/
void IWDG_DeInit(void);
void IWDG_Init(IWDG_InitTypeDef* IWDG_InitStruct);
void IWDG_Cmd (FunctionalState NewState);
void IWDG_CLR(void);




#ifdef  __cplusplus
}
#endif
#endif /*__csa36fx30_IWDG_H */
/**  @} */   

/**  @} */  


/************************ (C) COPYRIGHT CHIPSEA *****END OF FILE**************/

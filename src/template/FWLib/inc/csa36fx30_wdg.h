/**
  ******************************************************************************
  * @file    csa36fx30_wdg.h
  * @author  Chipsea Application Team
  * @version V1.0.0
  * @date    29-January-2018
  * @brief   This file contains all the functions prototypes for the TIM 
  *          firmware library. 
  ******************************************************************************  
  */

#ifndef __csa36fx30_WDG_H
#define __csa36fx30_WDG_H

#ifdef  __cplusplus
extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup csa36fx30_StdPeriph_Driver
  * @{ */
  

/** @addtogroup WDG
  * @{ */
   
/******************************************************************************/
/*                                                                            */
/*                               WDG   Bit   Defination                       */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for WTCR register  ***********************/
#define WTIS                                ((uint32_t)0x00000700)             /*!< overtime config bits */
#define WTIS_0                              ((uint32_t)0x00000100)             /*!< Bit 0 */
#define WTIS_1                              ((uint32_t)0x00000200)             /*!< Bit 1 */
#define WTIS_2                              ((uint32_t)0x00000400)             /*!< Bit 2 */
#define WTE                                 ((uint32_t)0x00000080)             /*!< wdg EN state bit, read only */
#define WTIE                                ((uint32_t)0x00000040)             /*!< wdg interrupt enable config bit */
#define WTIF                                ((uint32_t)0x00000008)             /*!< wdg interrupt flag bit */
#define WTRF                                ((uint32_t)0x00000004)             /*!< wdg reset flag bit */   
#define WTRE                                ((uint32_t)0x00000002)             /*!< wdg reset enable config bit */      
#define WTR                                 ((uint32_t)0x00000001)             /*!< clear wdg config bit */          

/*******************  Bit definition for WTCRALT register  ********************/   
#define WTRDSEL                             ((uint32_t)0x00000003)             /*!< wdg reset delay time config bits */    
#define WTRDSEL_0                           ((uint32_t)0x00000001)             /*!< Bit 0 */        
#define WTRDSEL_1                           ((uint32_t)0x00000002)             /*!< Bit 1 */       

/******************************************************************************/
/*                                                                            */
/*                        WDG   Interal  constants Defination                 */
/*                                                                            */
/******************************************************************************/
/**************************   overtime config  ********************************/
#define _WDG_WTIS_16_WDK                    ((uint32_t)0x00000000)             /* Overtime Space = 16 WDGCLK */ 
#define _WDG_WTIS_64_WDK                    ((uint32_t)0x00000100)             /* Overtime Space = 64 WDGCLK */ 
#define _WDG_WTIS_256_WDK                   ((uint32_t)0x00000200)             /* Overtime Space = 256 WDGCLK */ 
#define _WDG_WTIS_1024_WDK                  ((uint32_t)0x00000300)             /* Overtime Space = 1024 WDGCLK */ 
#define _WDG_WTIS_4096_WDK                  ((uint32_t)0x00000400)             /* Overtime Space = 4096 WDGCLK */ 
#define _WDG_WTIS_16384_WDK                 ((uint32_t)0x00000500)             /* Overtime Space = 16384 WDGCLK */ 
#define _WDG_WTIS_65536_WDK                 ((uint32_t)0x00000600)             /* Overtime Space = 65536 WDGCLK */ 
#define _WDG_WTIS_262144_WDK                ((uint32_t)0x00000700)             /* Overtime Space = 262144 WDGCLK */ 





/* Exported constants --------------------------------------------------------*/  
/**
 * @defgroup overtime config  
 * @{ */
#define WDG_WTIS_16_WDK                     _WDG_WTIS_16_WDK                  /* Overtime Space = 16 WDGCLK */ 
#define WDG_WTIS_64_WDK                     _WDG_WTIS_64_WDK                  /* Overtime Space = 64 WDGCLK */ 
#define WDG_WTIS_256_WDK                    _WDG_WTIS_256_WDK                 /* Overtime Space = 256 WDGCLK */ 
#define WDG_WTIS_1024_WDK                   _WDG_WTIS_1024_WDK                /* Overtime Space = 1024 WDGCLK */ 
#define WDG_WTIS_4096_WDK                   _WDG_WTIS_4096_WDK                /* Overtime Space = 4096 WDGCLK */ 
#define WDG_WTIS_16384_WDK                  _WDG_WTIS_16384_WDK               /* Overtime Space = 16384 WDGCLK */ 
#define WDG_WTIS_65536_WDK                  _WDG_WTIS_65536_WDK               /* Overtime Space = 65536 WDGCLK */ 
#define WDG_WTIS_262144_WDK                 _WDG_WTIS_262144_WDK              /* Overtime Space = 262144 WDGCLK */ 

#define IS_WDG_WTIS(Value)                  (((Value) == WDG_WTIS_16_WDK )       || \
                                             ((Value) == WDG_WTIS_64_WDK )      || \
                                             ((Value) == WDG_WTIS_256_WDK )     || \
                                             ((Value) == WDG_WTIS_1024_WDK )    || \
                                             ((Value) == WDG_WTIS_4096_WDK )    || \
                                             ((Value) == WDG_WTIS_16384_WDK )   || \
                                             ((Value) == WDG_WTIS_65536_WDK )   || \
                                             ((Value) == WDG_WTIS_262144_WDK ))
/**  @} */   
  


/**
 * @defgroup wdg reset delay time config
 * @{ */
typedef enum
{   
    WDG_WTRDSEL_1026_WDK  = 0x00000000,                                        /* reset delay time=1026 WDGCLK */
    WDG_WTRDSEL_130_WDK   = 0x00000001,                                        /* reset delay time=130 WDGCLK  */
    WDG_WTRDSEL_18_WDK    = 0x00000002,                                        /* reset delay time=18 WDGCLK  */
    WDG_WTRDSEL_3_WDK     = 0x00000003,                                        /* reset delay time=3 WDGCLK  */
}
WDG_RDSelTypeDef;

#define IS_WDG_WTRDSEL(Value)               (((Value) == WDG_WTRDSEL_1026_WDK)       || \
                                             ((Value) == WDG_WTRDSEL_130_WDK )       || \
                                             ((Value) == WDG_WTRDSEL_18_WDK )        || \
                                             ((Value) == WDG_WTRDSEL_3_WDK ))

/**  @} */    



/* Exported types ------------------------------------------------------------*/
/** 
  * @brief  WDG InitType definition */
typedef struct{
    
   uint32_t  WDG_WTIS;                                                        /* Overtime Space Config */ 
   
   WDG_RDSelTypeDef  WDG_WTRDSEL;                                             /* reset delay time  Config*/
    
}WDG_InitTypeDef;


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
/* WDG management *************************************************************/
void WDG_DeInit(void);
void WDG_SetWTIS(uint32_t WDG_WTIS);
void WDG_SetWTRDSEL (WDG_RDSelTypeDef WDG_WTRDSEL);
void WDG_ITConfig(FunctionalState NewState);
void WDG_ResetConfig(FunctionalState NewState);
void WDG_ClearRTFlag(void);
void WDG_ClearITFlag(void);
FlagStatus  WDG_GetITFlagStatus(void);
FlagStatus  WDG_GetRTFlagStatus(void);
void WDG_ClearWDG(void);
FlagStatus  WDG_GetWTEStatus(void);
void WDG_Init(WDG_InitTypeDef*WDG_InitStruct);


#ifdef  __cplusplus
}
#endif
#endif /*__csa36fx30_WDG_H */
/**  @} */   

/**  @} */  


/************************ (C) COPYRIGHT CHIPSEA *****END OF FILE*************/


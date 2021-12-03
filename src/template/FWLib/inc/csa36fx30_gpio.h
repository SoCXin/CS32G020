    /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __cs32fx031_GPIO_H
#define __cs32fx031_GPIO_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup GPIO
  * @{
  */
/* Exported types ------------------------------------------------------------*/

#define GPIO_PMD_RST        ((u32)0x00000000)
#define GPIO_OFFD_RST       ((u32)0x00000000)
#define GPIO_DOUT_RST       ((u32)0x00000000)
#define GPIO_DMASK_RST      ((u32)0x00000000)
#define GPIO_PIN_RST        ((u32)0x00000000)
#define GPIO_DBEN_RST       ((u32)0x00000000)
#define GPIO_IMD_RST        ((u32)0x00000000)
#define GPIO_IER_RST        ((u32)0x00000000)
#define GPIO_ISRC_RST       ((u32)0x00000000)
#define GPIO_PUEN_RST       ((u32)0x00000000)
#define GPIO_PDEN_RST       ((u32)0x00000000)
#define GPIO_TYPEn_RST      ((u32)0x00000000)
#define GPIO_DBNCECON_RST   ((u32)0x00000000)
#define GPIO_nDOUT_RST      ((u32)0x00000000)

/*******************  Bit definition for GPIO_PMD register  ********************/
#define GPIO_PMD_IN         ((u32)0x00000000)
#define GPIO_PMD_OUT_PP     ((u32)0x00000001)
#define GPIO_PMD_OUT_OD     ((u32)0x00000002)
#define GPIO_PMD_PMD0       ((u32)0x00000003)
/*******************  Bit definition for GPIO_DBNCECON register  ********************/
#define GPIO_DBNCECON_DBCLKSRC_10KHZ        ((u8)0x10)
#define GPIO_DBNCECON_DBCLKSRC_HCLK         ((u8)0x00)
#define GPIO_DBNCECON_DBCLKSRC_ALL          ((u8)0x10)

#define GPIO_DBNCECON_DBCLK_ON_EN           ((u8)0x20)

#define GPIO_DBNCECON_DBCLKSEL_CLKDIV1      ((u8)0x00)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV2      ((u8)0x01)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV4      ((u8)0x02)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV8      ((u8)0x03)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV16     ((u8)0x04)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV32     ((u8)0x05)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV64     ((u8)0x06)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV128    ((u8)0x07)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV256    ((u8)0x08)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV512    ((u8)0x09)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV1024   ((u8)0x0A)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV2048   ((u8)0x0B)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV4096   ((u8)0x0C)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV8192   ((u8)0x0D)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV16384  ((u8)0x0E)
#define GPIO_DBNCECON_DBCLKSEL_CLKDIV32768  ((u8)0x0F)
#define GPIO_DBNCECON_DBCLKSEL_ALL          ((u8)0x0F)
/*******************  Bit definition for SYSMU_MFP register  ********************/
#define GPIO_AFIO_GPIO             ((u8)0x00)
#define GPIO_AFIO_ADCAIN           ((u8)0x01)
#define GPIO_AFIO_TIMPWM           ((u8)0x02)
#define GPIO_AFIO_CKO              ((u8)0x02)
#define GPIO_AFIO_WKUP             ((u8)0x03)
#define GPIO_AFIO_EXIT             ((u8)0x03)
#define GPIO_AFIO_TIMTRG           ((u8)0x03)
#define GPIO_AFIO_STADC            ((u8)0x04)
#define GPIO_AFIO_I2C              ((u8)0x04)
#define GPIO_AFIO_UART             ((u8)0x05)
#define GPIO_AFIO_SPI              ((u8)0x06)
#define GPIO_AFIO_TIMPWMHL         ((u8)0x07)
#define GPIO_AFIO_INTVREF          ((u8)0x08)
#define GPIO_AFIO_EXTVREF          ((u8)0x09)
#define GPIO_AFIO_TYPEC_ADC        ((u8)0x09)
#define GPIO_AFIO_TYPEC_ACMP       ((u8)0x0a)
#define GPIO_AFIO_CMPVREF          ((u8)0x0a)
#define GPIO_AFIO_DAC              ((u8)0x0a)
#define GPIO_AFIO_ACMP             ((u8)0x0b)
#define GPIO_AFIO_QC               ((u8)0x0c)
//#define GPIO_AFIO_TYPEC            ((u8)0x0c)
#define GPIO_AFIO_SARVREF          ((u8)0x0c)
#define GPIO_AFIO_QCVREF           ((u8)0x0d)
#define GPIO_AFIO_LOAD             ((u8)0x0e)
#define GPIO_AFIO_OSC              ((u8)0x0e)
#define GPIO_AFIO_SW               ((u8)0x0f)



/** @defgroup Bit_SET_and_Bit_RESET_enumeration
  * @{
  */
typedef enum
{
    Bit_RESET = 0,
    Bit_SET = 1
}BitAction;

#define IS_GPIO_BIT_ACTION(ACTION) (((ACTION) == Bit_RESET) || ((ACTION) == Bit_SET))

/** @defgroup Configuration_Mode_enumeration
  * @{
  */
typedef enum
{
    GPIO_Mode_IN      = GPIO_PMD_IN,      /*!< GPIO Input Mode              */
    GPIO_Mode_OUT_PP  = GPIO_PMD_OUT_PP,  /*!< GPIO Output PUSH-PULL Mode   */
    GPIO_Mode_OUT_OD  = GPIO_PMD_OUT_OD,  /*!< GPIO Output OPEN-DRAIN Mode  */
}GPIOMode_TypeDef;

#define IS_GPIO_MODE(MODE) (((MODE) == GPIO_Mode_IN)|| ((MODE) == GPIO_Mode_OUT_PP) || \
                            ((MODE) == GPIO_Mode_OUT_OD))
/** @defgroup Configuration_Pull-Up_Pull-Down_enumeration
  * @{
  */
typedef enum
{
    GPIO_PuPd_NOPULL = 0x00,
    GPIO_PuPd_UP     = 0x01,
    GPIO_PuPd_DOWN   = 0x02
}GPIOPuPd_TypeDef;

#define IS_GPIO_PUPD(PUPD)      ((PUPD) < 0X04)
//(((PUPD) == GPIO_PuPd_NOPULL) || ((PUPD) == GPIO_PuPd_UP) || \
//                            ((PUPD) == GPIO_PuPd_DOWN))

/**
  * @brief  GPIO Init structure definition
  */
typedef struct
{
	u16 GPIO_Pin;                   /*!< Specifies the GPIO pins to be configured.
                                       This parameter can be any value of @ref GPIO_pins_define */
	GPIOMode_TypeDef GPIO_Mode;     /*!< Specifies the operating mode for the selected pins.
                                       This parameter can be a value of @ref GPIOMode_TypeDef   */
	GPIOPuPd_TypeDef GPIO_PuPd;     /*!< Specifies the operating Pull-up/Pull down for the selected pins.
                                       This parameter can be a value of @ref GPIOPuPd_TypeDef   */
}GPIO_InitTypeDef;

/** @defgroup GPIO_pins_define
  * @{
  */
#define GPIO_Pin_0     ((u16)0x0001)  /*!< Pin 0 selected    */
#define GPIO_Pin_1     ((u16)0x0002)  /*!< Pin 1 selected    */
#define GPIO_Pin_2     ((u16)0x0004)  /*!< Pin 2 selected    */
#define GPIO_Pin_3     ((u16)0x0008)  /*!< Pin 3 selected    */
#define GPIO_Pin_4     ((u16)0x0010)  /*!< Pin 4 selected    */
#define GPIO_Pin_5     ((u16)0x0020)  /*!< Pin 5 selected    */
#define GPIO_Pin_6     ((u16)0x0040)  /*!< Pin 6 selected    */
#define GPIO_Pin_7     ((u16)0x0080)  /*!< Pin 7 selected    */
#define GPIO_Pin_8     ((u16)0x0100)  /*!< Pin 8 selected    */
#define GPIO_Pin_9     ((u16)0x0200)  /*!< Pin 9 selected    */
#define GPIO_Pin_10    ((u16)0x0400)  /*!< Pin 10 selected   */
#define GPIO_Pin_11    ((u16)0x0800)  /*!< Pin 11 selected   */
#define GPIO_Pin_12    ((u16)0x1000)  /*!< Pin 12 selected   */
#define GPIO_Pin_13    ((u16)0x2000)  /*!< Pin 13 selected   */
#define GPIO_Pin_14    ((u16)0x4000)  /*!< Pin 14 selected   */
#define GPIO_Pin_15    ((u16)0x8000)  /*!< Pin 15 selected   */
#define GPIO_Pin_All   ((u16)0xFFFF)  /*!< All pins selected */

#define IS_GPIO_PIN(PIN) ((PIN) != (u16)0x00)

#define IS_GET_GPIO_PIN(PIN) (((PIN) == GPIO_Pin_0) || ((PIN) == GPIO_Pin_1) || \
                              ((PIN) == GPIO_Pin_2) || ((PIN) == GPIO_Pin_3) || \
                              ((PIN) == GPIO_Pin_4) || ((PIN) == GPIO_Pin_5) || \
                              ((PIN) == GPIO_Pin_6) || ((PIN) == GPIO_Pin_7) || \
                              ((PIN) == GPIO_Pin_8) || ((PIN) == GPIO_Pin_9) || \
                              ((PIN) == GPIO_Pin_10) || ((PIN) == GPIO_Pin_11) || \
                              ((PIN) == GPIO_Pin_12) || ((PIN) == GPIO_Pin_13) || \
                              ((PIN) == GPIO_Pin_14) || ((PIN) == GPIO_Pin_15))

/** @defgroup GPIO_Pin_sources
  * @{
  */
#define GPIO_PinSource0       ((u8)0x00)
#define GPIO_PinSource1       ((u8)0x01)
#define GPIO_PinSource2       ((u8)0x02)
#define GPIO_PinSource3       ((u8)0x03)
#define GPIO_PinSource4       ((u8)0x04)
#define GPIO_PinSource5       ((u8)0x05)
#define GPIO_PinSource6       ((u8)0x06)
#define GPIO_PinSource7       ((u8)0x07)
#define GPIO_PinSource8       ((u8)0x08)
#define GPIO_PinSource9       ((u8)0x09)
#define GPIO_PinSource10      ((u8)0x0A)
#define GPIO_PinSource11      ((u8)0x0B)
#define GPIO_PinSource12      ((u8)0x0C)
#define GPIO_PinSource13      ((u8)0x0D)
#define GPIO_PinSource14      ((u8)0x0E)
#define GPIO_PinSource15      ((u8)0x0F)

#define IS_GPIO_PIN_SOURCE(PINSOURCE) (((PINSOURCE) == GPIO_PinSource0) || \
                                       ((PINSOURCE) == GPIO_PinSource1) || \
                                       ((PINSOURCE) == GPIO_PinSource2) || \
                                       ((PINSOURCE) == GPIO_PinSource3) || \
                                       ((PINSOURCE) == GPIO_PinSource4) || \
                                       ((PINSOURCE) == GPIO_PinSource5) || \
                                       ((PINSOURCE) == GPIO_PinSource6) || \
                                       ((PINSOURCE) == GPIO_PinSource7) || \
                                       ((PINSOURCE) == GPIO_PinSource8) || \
                                       ((PINSOURCE) == GPIO_PinSource9) || \
                                       ((PINSOURCE) == GPIO_PinSource10) || \
                                       ((PINSOURCE) == GPIO_PinSource11) || \
                                       ((PINSOURCE) == GPIO_PinSource12) || \
                                       ((PINSOURCE) == GPIO_PinSource13) || \
                                       ((PINSOURCE) == GPIO_PinSource14) || \
                                       ((PINSOURCE) == GPIO_PinSource15))

#define IS_GPIO_ALL_PERIPH(PERIPH) (((PERIPH) == GPIOA) || ((PERIPH) == GPIOB))

#define Trigger_Disable                     ((u8)0x00)  /*!< Disable EXIT    */
#define Trigger_Low_Debounce_Enable         ((u8)0x01)  /*!< Trigger on Low level and Enable Debounce */
#define Trigger_High_Debounce_Enable        ((u8)0x02)  /*!< Trigger on High level and Enable Debounce */
#define Trigger_Low_Debounce_Disable        ((u8)0x03)  /*!< Trigger on Low level and Disable Debounce */
#define Trigger_High_Debounce_Disable       ((u8)0x04)  /*!< Trigger on High level and Disable Debounce */
#define Trigger_Falling_Debounce_Enable     ((u8)0x05)  /*!< Trigger on Falling and Enable Debounce */
#define Trigger_Rising_Debounce_Enable      ((u8)0x06)  /*!< Trigger on Rising and Enable Debounce */
#define Trigger_Falling_Debounce_Disable    ((u8)0x07)  /*!< Trigger on Falling and Disable Debounce */
#define Trigger_Rising_Debounce_Disable     ((u8)0x08)  /*!< Trigger on Rising and Disable Debounce */
#define Trigger_RisFall_Debounce_Enable     ((u8)0x09)  /*!< Trigger on Rising or Falling and Enable Debounce */
#define Trigger_RisFall_Debounce_Disable    ((u8)0x0a)  /*!< Trigger on Rising or Falling and Disable Debounce */

#define IS_EXIT_TRIGGER(PERIPH) ((PERIPH) <= (u8)0x0a)

#define GPIO_DBCLKSRC_10KHZ GPIO_DBNCECON_DBCLKSRC_10KHZ
#define GPIO_DBCLKSRC_HCLK  GPIO_DBNCECON_DBCLKSRC_HCLK

#define IS_GPIO_DBCLKSRC(PERIPH) (((PERIPH) == GPIO_DBCLKSRC_10KHZ) || ((PERIPH) == GPIO_DBCLKSRC_HCLK))

#define GPIO_DBCLKSEL_CLKDIV1       GPIO_DBNCECON_DBCLKSEL_CLKDIV1
#define GPIO_DBCLKSEL_CLKDIV2       GPIO_DBNCECON_DBCLKSEL_CLKDIV2
#define GPIO_DBCLKSEL_CLKDIV4       GPIO_DBNCECON_DBCLKSEL_CLKDIV4
#define GPIO_DBCLKSEL_CLKDIV8       GPIO_DBNCECON_DBCLKSEL_CLKDIV8
#define GPIO_DBCLKSEL_CLKDIV16      GPIO_DBNCECON_DBCLKSEL_CLKDIV16
#define GPIO_DBCLKSEL_CLKDIV32      GPIO_DBNCECON_DBCLKSEL_CLKDIV32
#define GPIO_DBCLKSEL_CLKDIV64      GPIO_DBNCECON_DBCLKSEL_CLKDIV64
#define GPIO_DBCLKSEL_CLKDIV128     GPIO_DBNCECON_DBCLKSEL_CLKDIV128
#define GPIO_DBCLKSEL_CLKDIV256     GPIO_DBNCECON_DBCLKSEL_CLKDIV256
#define GPIO_DBCLKSEL_CLKDIV512     GPIO_DBNCECON_DBCLKSEL_CLKDIV512
#define GPIO_DBCLKSEL_CLKDIV1024    GPIO_DBNCECON_DBCLKSEL_CLKDIV1024
#define GPIO_DBCLKSEL_CLKDIV2048    GPIO_DBNCECON_DBCLKSEL_CLKDIV2048
#define GPIO_DBCLKSEL_CLKDIV4096    GPIO_DBNCECON_DBCLKSEL_CLKDIV4096
#define GPIO_DBCLKSEL_CLKDIV8192    GPIO_DBNCECON_DBCLKSEL_CLKDIV8192
#define GPIO_DBCLKSEL_CLKDIV16384   GPIO_DBNCECON_DBCLKSEL_CLKDIV16384
#define GPIO_DBCLKSEL_CLKDIV32768   GPIO_DBNCECON_DBCLKSEL_CLKDIV32768

#define IS_GPIO_DBCLKSEL(PERIPH) (((PERIPH) == GPIO_DBCLKSEL_CLKDIV1) || ((PERIPH) == GPIO_DBCLKSEL_CLKDIV2)       || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV4) || ((PERIPH) == GPIO_DBCLKSEL_CLKDIV8)       || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV16)|| ((PERIPH) == GPIO_DBCLKSEL_CLKDIV32)      || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV64)|| ((PERIPH) == GPIO_DBCLKSEL_CLKDIV128)     || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV256)|| ((PERIPH) == GPIO_DBCLKSEL_CLKDIV512)    || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV1024)|| ((PERIPH) == GPIO_DBCLKSEL_CLKDIV2048)  || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV4096)|| ((PERIPH) == GPIO_DBCLKSEL_CLKDIV8192)  || \
                                  ((PERIPH) == GPIO_DBCLKSEL_CLKDIV16384)|| ((PERIPH) == GPIO_DBCLKSEL_CLKDIV32768))

#define GPIO_AF_GPIO               GPIO_AFIO_GPIO
#define GPIO_AF_ADCAIN             GPIO_AFIO_ADCAIN
#define GPIO_AF_TIMPWM             GPIO_AFIO_TIMPWM
#define GPIO_AF_CKO                GPIO_AFIO_CKO
#define GPIO_AF_WKUP               GPIO_AFIO_WKUP
#define GPIO_AF_EXIT               GPIO_AFIO_EXIT
#define GPIO_AF_TIMTRG             GPIO_AFIO_TIMTRG
#define GPIO_AF_STADC              GPIO_AFIO_STADC
#define GPIO_AF_I2C                GPIO_AFIO_I2C
#define GPIO_AF_UART               GPIO_AFIO_UART
#define GPIO_AF_SPI                GPIO_AFIO_SPI
#define GPIO_AF_TIMPWMHL           GPIO_AFIO_TIMPWMHL
#define GPIO_AF_INTVREF            GPIO_AFIO_INTVREF
#define GPIO_AF_EXTVREF            GPIO_AFIO_EXTVREF
#define GPIO_AF_TYPEC_ADC          GPIO_AFIO_TYPEC_ADC
#define GPIO_AF_TYPEC_ACMP         GPIO_AFIO_TYPEC_ACMP
#define GPIO_AF_CMPVREF            GPIO_AFIO_CMPVREF
#define GPIO_AF_DAC                GPIO_AFIO_DAC
#define GPIO_AF_ACMP               GPIO_AFIO_ACMP
#define GPIO_AF_QC                 GPIO_AFIO_QC
//#define GPIO_AF_TYPEC              GPIO_AFIO_TYPEC
#define GPIO_AF_SARVREF            GPIO_AFIO_SARVREF
#define GPIO_AF_QCVREF             GPIO_AFIO_QCVREF
#define GPIO_AF_LOADIN             GPIO_AFIO_LOAD
#define GPIO_AF_OSC                GPIO_AFIO_OSC
#define GPIO_AF_SW                 GPIO_AFIO_SW

#define IS_GPIO_AF(PERIPH) (((PERIPH) == GPIO_AF_GPIO)    || ((PERIPH) == GPIO_AF_ADCAIN)     || \
                           ((PERIPH) == GPIO_AF_TIMPWM)   || ((PERIPH) == GPIO_AF_CKO)        || \
                           ((PERIPH) == GPIO_AF_WKUP)     || ((PERIPH) == GPIO_AF_EXIT)       || \
                           ((PERIPH) == GPIO_AF_TIMTRG)   || ((PERIPH) == GPIO_AF_STADC)      || \
                           ((PERIPH) == GPIO_AF_I2C)      || ((PERIPH) == GPIO_AF_UART)       || \
                           ((PERIPH) == GPIO_AF_SPI)      || ((PERIPH) == GPIO_AF_TIMPWMHL)   || \
                           ((PERIPH) == GPIO_AF_INTVREF)  || ((PERIPH) == GPIO_AF_EXTVREF)    || \
                           ((PERIPH) == GPIO_AF_TYPEC_ADC)|| ((PERIPH) == GPIO_AF_TYPEC_ACMP) || \
                           ((PERIPH) == GPIO_AF_CMPVREF)  || ((PERIPH) == GPIO_AF_DAC)        || \
                           ((PERIPH) == GPIO_AF_ACMP)     || ((PERIPH) == GPIO_AF_QC)         || \
                           ((PERIPH) == GPIO_AF_SARVREF)  || \
                           ((PERIPH) == GPIO_AF_QCVREF)   || ((PERIPH) == GPIO_AF_LOADIN)     || \
                           ((PERIPH) == GPIO_AF_OSC)      || ((PERIPH) == GPIO_AF_SW))

void GPIO_DeInit(GPIO_TypeDef* GPIOx);
void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);
void GPIO_StructInit(GPIO_InitTypeDef* GPIO_InitStruct);
u8 GPIO_ReadInputDataBit(GPIO_TypeDef* GPIOx, u8 GPIO_PinSource);
u16 GPIO_ReadInputData(GPIO_TypeDef* GPIOx);
u8 GPIO_ReadOutputDataBit(GPIO_TypeDef* GPIOx, u8 GPIO_PinSource);
u16 GPIO_ReadOutputData(GPIO_TypeDef* GPIOx);
void GPIO_WriteBit(GPIO_TypeDef* GPIOx, u8 GPIO_PinSource, BitAction BitVal);
void GPIO_Write(GPIO_TypeDef* GPIOx, u16 PortVal);
void GPIO_PinInDisableCmd(GPIO_TypeDef* GPIOx,u16 GPIO_Pin,FunctionalState NewState);
void GPIO_PinOutDisableCmd(GPIO_TypeDef* GPIOx,u16 GPIO_Pin,FunctionalState NewState);
void GPIO_EXITConfig(GPIO_TypeDef* GPIOx,u16 GPIO_Pin,u8 Trigger);
ITStatus GPIO_GetEXITFlagStatus(GPIO_TypeDef* GPIOx, u16 GPIO_Pin);
void GPIO_ClearEXITFlag(GPIO_TypeDef* GPIOx, u16 GPIO_Pin);
void GPIO_SchmiCmd(GPIO_TypeDef* GPIOx,u16 GPIO_Pin,FunctionalState NewState);
void GPIO_DebnCLKConfig(GPIO_TypeDef* GPIOx,u8 DBCLKSRC,u8 DBCLKSEL);
void GPIO_DebnCLKCmd(GPIO_TypeDef* GPIOx,FunctionalState NewState);
void GPIO_PinAFConfig(GPIO_TypeDef* GPIOx, u16 GPIO_PinSource, u8 GPIO_AF);
void GPIO_ModeConfig(GPIO_TypeDef* GPIOx,u8 GPIO_PinSource,GPIOMode_TypeDef mode);

#endif

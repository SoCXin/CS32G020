    /* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __csa36fx30_ACMP_H
#define __csa36fx30_ACMP_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"
     
/** @addtogroup ACMP
  * @{
  */
     
 
typedef enum
{
    ACMP0 = 0,
    ACMP1 = 1
}ACMP_TYPE;

typedef struct
{
    uint32_t ACMP_PS;         //This parameter can be a value of @ref ACMP_PS
    uint32_t ACMP_NS;         //This parameter can be a value of @ref ACMP_NS
    uint32_t ACMPOFLTS;       //This parameter can be a value of @ref ACMPOFLTS
    FunctionalState ACMPOINV;//This parameter can be a value of ENABLE or DISABLE
}ACMP_InitTypedef;


/* Exported types ------------------------------------------------------------*/
#define ACMP_CR0_RST                ((u32)0x78100000)
#define ACMP_SR0_RST                ((u32)0x00000000)     
#define ACMP_CR1_RST                ((u32)0x78100000)
#define ACMP_SR1_RST                ((u32)0x00000000) 

#define RSTMU_IPRSTC2_ACMP01_RST    ((u32)0x01000000) 
     
#define IS_ACMP_Check(ACMPx)        (((ACMPx) == ACMP0) || ((ACMPx) == ACMP1))     
#define IS_ACMP_CALcnt(CALcnt)      ((CALcnt) <= 63)

     
/*******************  Bit definition for ACMP_CR0&1 register  ********************/
#define ACMP_CR_ACMPEN              ((u32)0x00000001)
#define ACMP_CR_ACMPIE              ((u32)0x00000002)	
#define ACMP_CR_HYSEN               ((u32)0x00000004)
#define ACMP_CR_ACMPOINV            ((u32)0x00000040)
#define ACMP_CR_CALEN               ((u32)0x01000000)
#define ACMP_CR_CAL_FT              ((u32)0x02000000)

#define ACMP_CR_ACMPOFT_LSB         ((u8)0x10)
#define ACMP_CR_ACMPOFT_FF          ((u32)0x0000001F)
#define ACMP_CR_INSHTEN_LSB         ((u8)0x16)
#define ACMP_CR_INSHTEN_FF          ((u32)0x00000003)
#define ACMP_CR_CAL_CNT_LSB         ((u8)0x1A)	
#define ACMP_CR_CAL_CNT_FF          ((u32)0x0000003F)

/*******************  Bit definition for ACMP_SR0&1 register  ********************/
#define ACMP_SR_ACMPF               ((u32)0x00000001)
#define ACMP_SR_ACMPO               ((u32)0x00000002)	



/** @defgroup ACMP0 PS input signal define
  * @{
  */
#define ACMP0_PS_PA4      ((u32)0x00000000)  /*!< PA4 selected    */
#define ACMP0_PS_PA6      ((u32)0x00001000)  /*!< PA6 selected    */
#define ACMP0_PS_PA10     ((u32)0x00002000)  /*!< PA10 selected   */
#define ACMP0_PS_PB0      ((u32)0x00003000)  /*!< PB0 selected   */
#define ACMP0_PS_Int_Vref ((u32)0x00004000)  /*!< internal Int_Vref selected   */
#define ACMP0_PS_CMP_Vref ((u32)0x00005000)  /*!< internal CMP0_Vref selected   */
#define ACMP0_PS_GND      ((u32)0x00006000)  /*!< GND selected   */
#define ACMP0_PS_DAC      ((u32)0x00007000)  /*!< DAC output selected   */
#define ACMP0_PS_PA15     ((u32)0x00008000)  /*!< PA15(CC1_A) selected   */
#define ACMP0_PS_PA14     ((u32)0x00009000)  /*!< PA14(CC2_A) selected   */
#define ACMP0_PS_PA12     ((u32)0x0000A000)  /*!< PA12(CC1_B) selected   */
#define ACMP0_PS_PA13     ((u32)0x0000B000)  /*!< PA13(CC2_B) selected   */

/** @defgroup ACMP1 PS input signal define
  * @{
  */
#define ACMP1_PS_PA1      ((u32)0x00000000)  /*!< PA1 selected    */
#define ACMP1_PS_PA3      ((u32)0x00001000)  /*!< PA3 selected    */
#define ACMP1_PS_PB3      ((u32)0x00002000)  /*!< PB3 selected    */
#define ACMP1_PS_LDO      ((u32)0x00003000)  /*!< LDO selected    */
#define ACMP1_PS_Int_Vref ((u32)0x00004000)  /*!< Internal 1v reference input selected    */
#define ACMP1_PS_CMP_Vref ((u32)0x00005000)  /*!< internal CMP1_Vref selected    */
#define ACMP1_PS_GND      ((u32)0x00006000)  /*!< GND selected    */
#define ACMP1_PS_DAC      ((u32)0x00007000)  /*!< DAC output selected   */
#define ACMP1_PS_PA4      ((u32)0x00008000)  /*!< PA4 selected   */
#define ACMP1_PS_PA6      ((u32)0x0000A000)  /*!< PA6 selected   */
#define ACMP1_PS_PA15     ((u32)0x0000C000)  /*!< PA15(CC1_A) selected   */
#define ACMP1_PS_PA14     ((u32)0x0000D000)  /*!< PA14(CC2_A) selected   */
#define ACMP1_PS_PA12     ((u32)0x0000E000)  /*!< PA12(CC1_B) selected   */
#define ACMP1_PS_PA13     ((u32)0x0000F000)  /*!< PA13(CC2_B) selected   */

#define ACMP_CR_ACMPPS    ((u32)0xFFFF0FFF)

#define IS_ACMP_PS_INPUT(PS_INPUT) (((PS_INPUT) == ACMP0_PS_PA4)      || ((PS_INPUT) == ACMP0_PS_PA6)       || \
                                    ((PS_INPUT) == ACMP0_PS_PA10)     || ((PS_INPUT) == ACMP0_PS_PB0)       || \
                                    ((PS_INPUT) == ACMP0_PS_Int_Vref) || ((PS_INPUT) == ACMP0_PS_CMP_Vref)  || \
                                    ((PS_INPUT) == ACMP0_PS_GND)      || ((PS_INPUT) == ACMP0_PS_DAC)       || \
                                    ((PS_INPUT) == ACMP0_PS_PA15)     || ((PS_INPUT) == ACMP0_PS_PA14)      || \
                                    ((PS_INPUT) == ACMP0_PS_PA12)     || ((PS_INPUT) == ACMP0_PS_PA13)      || \
                                    ((PS_INPUT) == ACMP1_PS_PA1)      || ((PS_INPUT) == ACMP1_PS_PA3)       || \
                                    ((PS_INPUT) == ACMP1_PS_PB3)      || ((PS_INPUT) == ACMP1_PS_LDO)       || \
                                    ((PS_INPUT) == ACMP1_PS_Int_Vref) || ((PS_INPUT) == ACMP1_PS_CMP_Vref)  || \
                                    ((PS_INPUT) == ACMP1_PS_PA4)      || ((PS_INPUT) == ACMP1_PS_PA6)       || \
                                    ((PS_INPUT) == ACMP1_PS_PA15)     || ((PS_INPUT) == ACMP1_PS_PA14)      || \
                                    ((PS_INPUT) == ACMP1_PS_PA12)     || ((PS_INPUT) == ACMP1_PS_PA13))


/** @defgroup ACMP0 NS input signal define
  * @{
  */
#define ACMP0_NS_PA5      ((u32)0x00000000)  /*!< PA5 selected    */
#define ACMP0_NS_PA7      ((u32)0x00000100)  /*!< PA7 selected    */
#define ACMP0_NS_PA11      ((u32)0x00000200)  /*!< PA11 selected    */
#define ACMP0_NS_Int_Vref ((u32)0x00000400)  /*!< internal Int_Vref selected   */
#define ACMP0_NS_CMP_Vref ((u32)0x00000500)  /*!< internal CMP0_Vref selected   */
#define ACMP0_NS_DAC      ((u32)0x00000600)  /*!< DAC output selected   */

/** @defgroup ACMP1 NS input signal define
  * @{
  */
#define ACMP1_NS_PA0      ((u32)0x00000000)  /*!< PA5 selected    */
#define ACMP1_NS_PA7      ((u32)0x00000100)  /*!< PA7 selected    */
#define ACMP1_NS_PA11     ((u32)0x00000200)  /*!< PA11 selected    */
#define ACMP1_NS_Int_Vref ((u32)0x00000400)  /*!< internal Int_Vref selected   */
#define ACMP1_NS_CMP_Vref ((u32)0x00000500)  /*!< internal CMP1_Vref selected   */
#define ACMP1_NS_DAC      ((u32)0x00000600)  /*!< DAC output selected   */

#define ACMP_CR_ACMPNS    ((u32)0xFFFFF0FF)

#define IS_ACMP_NS_INPUT(NS_INPUT) (((NS_INPUT) == ACMP0_NS_PA5)      || ((NS_INPUT) == ACMP0_NS_PA7)      || \
                                    ((NS_INPUT) == ACMP0_NS_PA11)     || ((NS_INPUT) == ACMP0_NS_Int_Vref) || \
                                    ((NS_INPUT) == ACMP0_PS_Int_Vref) || ((NS_INPUT) == ACMP0_PS_CMP_Vref) || \
                                    ((NS_INPUT) == ACMP0_NS_CMP_Vref) || ((NS_INPUT) == ACMP0_NS_DAC)      || \
                                    ((NS_INPUT) == ACMP1_NS_PA0)      || ((NS_INPUT) == ACMP1_NS_PA7)      || \
                                    ((NS_INPUT) == ACMP1_NS_PA11)     || ((NS_INPUT) == ACMP1_NS_Int_Vref) || \
                                    ((NS_INPUT) == ACMP1_NS_CMP_Vref) || ((NS_INPUT) == ACMP1_NS_DAC))


/** @defgroup ACMP0/1 Filtering time define
  * @{
  */
#define ACMPOFLTS_NoFlt      ((u32)0x00000000)  /*!< Not for filtering operation   */
#define ACMPOFLTS_4Tpclk     ((u32)0x00000008)  /*!< Filtering time 4 * TPCLK   */
#define ACMPOFLTS_8Tpclk     ((u32)0x00000010)  /*!< Filtering time 8 * TPCLK   */
#define ACMPOFLTS_16Tpclk    ((u32)0x00000018)  /*!< Filtering time 16 * TPCLK   */
#define ACMPOFLTS_32Tpclk    ((u32)0x00000020)  /*!< Filtering time 32 * TPCLK   */
#define ACMPOFLTS_64Tpclk    ((u32)0x00000028)  /*!< Filtering time 64 * TPCLK   */
#define ACMPOFLTS_128Tpclk   ((u32)0x00000030)  /*!< Filtering time 128 * TPCLK   */
#define ACMPOFLTS_256Tpclk   ((u32)0x00000038)  /*!< Filtering time 256 * TPCLK   */

#define ACMP_CR_ACMPOFT      ((u32)0xFFE0FFFF)

#define IS_ACMP_ACMPOFT(ACMPOFT)   (((ACMPOFT) == ACMPOFLTS_NoFlt)    || ((ACMPOFT) == ACMPOFLTS_4Tpclk)  || \
                                    ((ACMPOFT) == ACMPOFLTS_8Tpclk)   || ((ACMPOFT) == ACMPOFLTS_16Tpclk) || \
                                    ((ACMPOFT) == ACMPOFLTS_32Tpclk)  || ((ACMPOFT) == ACMPOFLTS_64Tpclk) || \
                                    ((ACMPOFT) == ACMPOFLTS_128Tpclk) || ((ACMPOFT) == ACMPOFLTS_256Tpclk))

#define IS_ACMP_ACMPOINV(ACMPOINV) (((ACMPOINV) == DISABLE) || ((ACMPOINV) == ENABLE))

#define IS_ACMP_NewState(NewState) (((NewState) == DISABLE) || ((NewState) == ENABLE))

/** @defgroup ACMP0/1 INSHTEN
  * @{
  */
#define ACMP_INSHTEN_Disable    ((u8)0x00)
#define ACMP_INSHTEN_GND        ((u8)0x03)
#define ACMP_INSHTEN_Positive   ((u8)0x02)
#define ACMP_INSHTEN_Negative   ((u8)0x01)

#define IS_ACMP_INSHTEN(ACMP_INSHTENType) (((ACMP_INSHTENType) == ACMP_INSHTEN_Disable)  || ((ACMP_INSHTENType) == ACMP_INSHTEN_GND) || \
                                           ((ACMP_INSHTENType) == ACMP_INSHTEN_Positive) || ((ACMP_INSHTENType) == ACMP_INSHTEN_Negative)) 

/** @defgroup ACMP0/1 Offset voltage calibration input parameters
  * @{
  */
#define ACMP_OFTConfig_N75    ((u8)0x00)
#define ACMP_OFTConfig_N70    ((u8)0x01)
#define ACMP_OFTConfig_N65    ((u8)0x02)
#define ACMP_OFTConfig_N60    ((u8)0x03)
#define ACMP_OFTConfig_N55    ((u8)0x04)
#define ACMP_OFTConfig_N50    ((u8)0x05)
#define ACMP_OFTConfig_N45    ((u8)0x06)
#define ACMP_OFTConfig_N40    ((u8)0x07)
#define ACMP_OFTConfig_N35    ((u8)0x08)
#define ACMP_OFTConfig_N30    ((u8)0x09)
#define ACMP_OFTConfig_N25    ((u8)0x0A)
#define ACMP_OFTConfig_N20    ((u8)0x0B)
#define ACMP_OFTConfig_N15    ((u8)0x0C)
#define ACMP_OFTConfig_N10    ((u8)0x0D)
#define ACMP_OFTConfig_N05    ((u8)0x0E)
#define ACMP_OFTConfig_0      ((u8)0x0F)
#define ACMP_OFTConfig_P05    ((u8)0x11)
#define ACMP_OFTConfig_P10    ((u8)0x12)
#define ACMP_OFTConfig_P15    ((u8)0x13)
#define ACMP_OFTConfig_P20    ((u8)0x14)
#define ACMP_OFTConfig_P25    ((u8)0x15)
#define ACMP_OFTConfig_P30    ((u8)0x16)
#define ACMP_OFTConfig_P35    ((u8)0x17)
#define ACMP_OFTConfig_P40    ((u8)0x18)
#define ACMP_OFTConfig_P45    ((u8)0x19)
#define ACMP_OFTConfig_P50    ((u8)0x1A)
#define ACMP_OFTConfig_P55    ((u8)0x1B)
#define ACMP_OFTConfig_P60    ((u8)0x1C)
#define ACMP_OFTConfig_P65    ((u8)0x1D)
#define ACMP_OFTConfig_P70    ((u8)0x1E)
#define ACMP_OFTConfig_P75    ((u8)0x1F)

#define IS_ACMP_OFTConfig(ACMP_OFTConfigType)  (((ACMP_OFTConfigType) == ACMP_OFTConfig_N75) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N70) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N65) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N60) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N55) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N50) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N45) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N40) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N35) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N30) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N25) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N20) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N15) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_N10) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_N05) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_0)   || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P05) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P10) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P15) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P20) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P25) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P30) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P35) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P40) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P45) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P50) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P55) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P60) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P65) || ((ACMP_OFTConfigType) == ACMP_OFTConfig_P70) || \
                                                ((ACMP_OFTConfigType) == ACMP_OFTConfig_P75)) 

void ACMP_Cmd(ACMP_TYPE ACMPx, FunctionalState NewState);
void ACMP_Init(ACMP_TYPE ACMPx, ACMP_InitTypedef* ACMP_InitStruct);
uint8_t ACMP_GetResult(ACMP_TYPE ACMPx);

#endif



#ifndef __CSA36FX30_TYPEC_H
#define __CSA36FX30_TYPEC_H

#ifdef __cplusplus
 extern "C" {
#endif
#include "csa36fx30.h"

typedef struct
{
  FunctionalState VCONN_PD;
  FunctionalState TypeC_CCPD100K;
  FunctionalState TypeC_CCPU6K;
  FunctionalState TypeC_CC2PUN;
  FunctionalState TypeC_CC1PUN;
  FunctionalState TypeC_CC2VCON;
  FunctionalState TypeC_CC1VCON;
  uint32_t TypeC_Current;
  FunctionalState TypeC_PD5P1K;
  uint16_t TypeC_CCGAP;
  FunctionalState TypeC_CC_DRP;
} TypeC_InitTypeDef;




#define TypeC_CCIE_RST                      ((uint32_t)0x00000000)
#define TypeC_CCIF_RST                      ((uint32_t)0x00000000)
#define TypeC_CCACTL_RST                    ((uint32_t)0x00000000)
#define TypeC_CCBCTL_RST                    ((uint32_t)0x00000000)
#define TypeC_AUTODEF_RST                   ((uint32_t)0x00000000)
#define TypeC_CCDRP_RST                     ((uint32_t)0x00753A00)
#define TypeC_FRSDET_RST                    ((uint32_t)0x00003000)

  /*******************  Bit definition for IPRSTC2 register  ********************/
#define RSTMU_IPRSTC2_TYPEC_RST             ((uint32_t)0x08000000)

  /********************  Bits definition for CC_IE register  ******************/
#define TypeC_IE_FSR                         ((uint32_t)0x00000010)        /*!< Fast role swap interrupt */
#define TypeC_IE_SCNB                        ((uint32_t)0x00000008)        /*!< CCB Scan interrupt */
#define TypeC_IE_SCNA                        ((uint32_t)0x00000004)        /*!< CCA Scan interrupt */
#define TypeC_IE_DETB                        ((uint32_t)0x00000002)        /*!< CCB Detect interrupt */
#define TypeC_IE_DETA                        ((uint32_t)0x00000001)        /*!< CCA Detect interrupt*/
  /********************  Bits definition for CC_IF register  ******************/
#define TypeC_FLAG_FSR                         ((uint32_t)0x00000010)        /*!< Fast role swap flag */
#define TypeC_FLAG_SCNB                        ((uint32_t)0x00000008)        /*!< CCB Scan flag */
#define TypeC_FLAG_SCNA                        ((uint32_t)0x00000004)        /*!< CCA Scan flag */
#define TypeC_FLAG_DETB                        ((uint32_t)0x00000002)        /*!< CCB Detect flag */
#define TypeC_FLAG_DETA                        ((uint32_t)0x00000001)        /*!< CCA Detect flag*/
  /********************  Bits definition for CC_CTL register  ******************/
#define TypeC_VCONPD                         ((uint32_t)0x00008000)        /*!< Vconn 5.1K pull-down register */
#define TypeC_CC_PD100K                      ((uint32_t)0x00000200)        /*!< CC 100K pull-down Register */
#define TypeC_CC_PU6K                        ((uint32_t)0x00000100)        /*!< CC 6K pull-up Register */
#define TypeC_CC2_PU_N_DIS                   ((uint32_t)0x00000080)        /*!< CC2 pull-down or pull-up */
#define TypeC_CC1_PU_N_DIS                   ((uint32_t)0x00000040)        /*!< CC1 pull-down or pull-up */
#define TypeC_CC1AVCON_EN                    ((uint32_t)0x00000020)        /*!< VCONN connect to CC1 */
#define TypeC_CC2AVCON_EN                    ((uint32_t)0x00000010)        /*!< VCONN connect to CC2 */
#define TypeC_Current_OFF                     ((uint32_t)0x00000000)        /*!< 80uA pull-up */
#define TypeC_Current_80uA                    ((uint32_t)0x00000004)        /*!< 80uA pull-up */
#define TypeC_Current_180uA                   ((uint32_t)0x00000008)        /*!< 180uA pull-up */
#define TypeC_Current_330uA                   ((uint32_t)0x0000000C)        /*!< 330uA pull-up */
#define TypeC_CC_PD5P1K                    ((uint32_t)0x00000002)        /*!< 5.1K pull-down register*/
  /********************  Bits definition for AUTO_DET register  *****************/
#define TypeC_CCA_DET                        ((uint32_t)0x00000080)        /*!< CCA detect */
#define TypeC_CCB_DET                        ((uint32_t)0x00000040)        /*!< CCB detect */
#define TypeC_CC_DETRST                      ((uint32_t)0x00000010)        /*!< CC detect teset */
#define TypeC_CC_GAP_20CLK                   ((uint32_t)0x00000000)        /*!< 20 TypeC clock gap */
#define TypeC_CC_GAP_50CLK                   ((uint32_t)0x00000001)        /*!< 50 TypeC clock gap */
#define TypeC_CC_GAP_100CLK                  ((uint32_t)0x00000002)        /*!< 100 TypeC clock gap */
#define TypeC_CC_GAP_200CLK                  ((uint32_t)0x00000003)        /*!< 200 TypeC clock gap */
#define TypeC_CC_GAP_500CLK                  ((uint32_t)0x00000004)        /*!< 500 TypeC clock gap */
#define TypeC_CC_GAP_1000CLK                 ((uint32_t)0x00000005)        /*!< 1000 TypeC clock gap */
  /********************  Bits definition for CC_DRP register  ******************/
#define TypeC_CC_DRP_SCNPRD_LSB              ((uint8_t)16)
#define TypeC_CC_DRP_SCNDUTY_LSB             ((uint8_t)8)
#define TypeC_CCA_DRP                        ((uint32_t)0x00000080)        /*!< CCA Role detect */
#define TypeC_CCB_DRP                        ((uint32_t)0x00000040)        /*!< CCB Role detect */
  /********************  Bits definition for FSR_DET register  ******************/
#define TypeC_FSR_CKS_LSB                    ((uint8_t)8)
#define TypeC_FSR_OUT                        ((uint32_t)0x00000008)        /*!< CC Voltage greater than 0.49V */
#define TypeC_FSR_SELB                       ((uint32_t)0x00000002)        /*!< select ccb/cca channel fast role swap singal detect*/
#define TypeC_FSR_DET                        ((uint32_t)0x00000001)        /*!< Fast role swap singal detect enable*/

#define TypeCA 0X00 //???TypeCA
#define TypeCB 0X01//???TypeCB
#define IS_TypeC_ALL_PERIPH(Group)(((Group) == TypeCA) || ((Group) == TypeCB))


#define CC_Channel1       0x04
#define CC_Channel2       0x05
#define IS_TypeC_VCON_CCchannel(Channel)(((Channel) == CC_Channel1) || ((Channel) == CC_Channel2))

#define TypeC_CCGAP_20CLK         TypeC_CC_GAP_20CLK
#define TypeC_CCGAP_50CLK         TypeC_CC_GAP_50CLK
#define TypeC_CCGAP_100CLK        TypeC_CC_GAP_100CLK
#define TypeC_CCGAP_200CLK        TypeC_CC_GAP_200CLK
#define TypeC_CCGAP_500CLK        TypeC_CC_GAP_500CLK
#define TypeC_CCGAP_1000CLK       TypeC_CC_GAP_1000CLK
#define IS_TypeC_CCGAP(GAPCLk)(((GAPCLk) == TypeC_CCGAP_20CLK) || ((GAPCLk) == TypeC_CCGAP_50CLK) || \
                              ((GAPCLk) == TypeC_CCGAP_100CLK) || ((GAPCLk) == TypeC_CCGAP_200CLK) || \
                              ((GAPCLk) == TypeC_CCGAP_500CLK) || ((GAPCLk) == TypeC_CCGAP_1000CLK))


#define IS_TypeC_Current(Current) ( ((Current) < 0xffffff))

#define IS_TypeC_FRS_CLOCK(CLOCK)(((CLOCK)>0)&&((CLOCK)<128))
#define IS_TypeC_DRP_CONFIG(DUTY,PRD)   (((DUTY) > 6) && (PRD - DUTY) > 6)

#define IS_TypeC_CC_Current(Current)(((Current) == TypeC_Current_OFF)||((Current) == TypeC_Current_80uA)|| \
                                  ((Current) == TypeC_Current_180uA) || ((Current) == TypeC_Current_330uA))


#define TypeC_IF_FSR          TypeC_FLAG_FSR
#define TypeC_IF_SCNB         TypeC_FLAG_SCNB
#define TypeC_IF_SCNA         TypeC_FLAG_SCNA
#define TypeC_IF_DetB         TypeC_FLAG_DETB
#define TypeC_IF_DetA         TypeC_FLAG_DETA
#define IS_TypeC_FLAG(FLAG)(((FLAG) == TypeC_IF_FSR)||((FLAG) == TypeC_IF_SCNB))|| \
                                  ((FLAG) == TypeC_IF_SCNA) || ((FLAG) == TypeC_IF_DetA) || \
                                  ((FLAG) == TypeC_IF_DetB)

#define IS_TypeC_CLEAR_FLAG(FLAG)(((FLAG) == TypeC_IF_FSR)||((FLAG) == TypeC_IF_SCNB))|| \
                                    ((FLAG) == TypeC_IF_SCNA) || ((FLAG) == TypeC_IF_DetA) || \
                                    ((FLAG) == TypeC_IF_DetB)


#define TypeC_IT_FSR           TypeC_IE_FSR
#define TypeC_IT_SCNB          TypeC_IE_SCNB
#define TypeC_IT_SCNA          TypeC_IE_SCNA
#define TypeC_IT_DetA          TypeC_IE_DETA
#define TypeC_IT_DetB          TypeC_IE_DETB
#define IS_TypeC_CONFIG_IT(IT)(((IT) == TypeC_IT_FSR)||((IT) == TypeC_IT_SCNB)|| \
                                ((IT) == TypeC_IT_SCNA) || ((IT) == TypeC_IT_DetA) || \
                                ((IT) == TypeC_IT_DetB))



void TypeC_DeInit(void);
void TypeC_Init(uint8_t TypeCx,TypeC_InitTypeDef* TypeC_InitStruct);
void TypeC_StructInit(TypeC_InitTypeDef* TypeC_InitStruct);
void TypeC_Cmd(uint8_t TypeCx, FunctionalState NewState);
uint8_t TypeC_GetAutoDetResult (uint8_t TypeCx);
void TypeC_ITConfig(uint32_t TypeC_IT, FunctionalState NewState);
FlagStatus TypeC_GetITStatus(uint32_t TypeC_FLAG);
void TypeC_ClearITFlag(uint32_t TypeC_IF);
void TypeC_DRPConfig(uint8_t SCN_DUTY,uint8_t SCN_PRD);
void TypeC_DRPCmd(uint8_t TypeCx,FunctionalState NewState);
void TypeC_FSRConfig(uint8_t TypeCx,uint8_t FRS_CKS);
void Typec_FSRCmd(FunctionalState NewState);
FlagStatus Typec_GetFSRDetResult(void);
void Typec_VconConfig(uint8_t TypeCx,uint8_t CC_Channel,FunctionalState NewState);
void Typec_PD51K(uint8_t TypeCx,FunctionalState NewState);
void Typec_CCCurrent(uint8_t TypeCx,uint32_t Typec_Current);
void Typec_CCTrim1 (uint8_t TypeCx, uint32_t Trim1_Data);
void Typec_CCTrim1 (uint8_t TypeCx, uint32_t Trim1_Data);
#ifdef __cplusplus
}
#endif

#endif /* __CSA36FX30_TYPEC_H_ */

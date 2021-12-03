#ifndef __CSA36FX30_PWR_H
#define __CSA36FX30_PWR_H
#ifdef __cplusplus
 extern "C" {
#endif
#include "csa36fx30.h"
#define     REGWRPROT_A   ((uint32_t *)(GCR_BASE+0x100))	 
#define     REGPROTDIS  0
#define		WakeUpPin7		0
#define		WakeUpPin15 	1


	 /******************  Bit definition for PWR_CON register  *******************/
#define  PWR_CON_SLP1WKSTS                 ((uint32_t)0x40000000)           
#define  PWR_CON_SLP1WKIE                  ((uint32_t)0x20000000)            
#define  PWR_CON_SLP1WKDLY                 ((uint32_t)0x10000000)
#define  PWR_CON_SLPMOD                    ((uint32_t)0x00800000) 
#define  PWR_CON_SLP2WKSTS                 ((uint32_t)0x00400000)           
#define  PWR_CON_SLP2WKIE                  ((uint32_t)0x00200000)            
#define  PWR_CON_SLP2WKDLY                 ((uint32_t)0x00100000) 
#define  PWR_CON_PDEN               	   ((uint32_t)0x00008000)            
#define  PWR_CON_PDWKDLY                   ((uint32_t)0x00001000)	 
	
	 /******************  Bit definition for VRINCON register  *******************/	 
#define  PWR_VRINCON_CMPVR                 ((uint32_t)0x00008000)           
#define  PWR_VRINCON_CMP1VRS_0_2V          ((uint32_t)0x00000000)  
#define  PWR_VRINCON_CMP1VRS_0_4V          ((uint32_t)0x00001000) 
#define  PWR_VRINCON_CMP1VRS_0_66V         ((uint32_t)0x00002000) 
#define  PWR_VRINCON_CMP1VRS_0_8V          ((uint32_t)0x00003000) 
#define  PWR_VRINCON_CMP1VRS_1_23V         ((uint32_t)0x00004000) 
#define  PWR_VRINCON_CMP1VRS_1_58V         ((uint32_t)0x00005000) 
#define  PWR_VRINCON_CMP1VRS_2_18V         ((uint32_t)0x00006000) 
#define  PWR_VRINCON_CMP1VRS_2_6V          ((uint32_t)0x00007000) 
#define  PWR_VRINCON_CMP0VRS_0V            ((uint32_t)0x00000000)  
#define  PWR_VRINCON_CMP0VRS_0_32V         ((uint32_t)0x00000100) 
#define  PWR_VRINCON_CMP0VRS_0_6V          ((uint32_t)0x00000200) 
#define  PWR_VRINCON_CMP0VRS_1_0V          ((uint32_t)0x00000300) 
#define  PWR_VRINCON_CMP0VRS_2_0V          ((uint32_t)0x00000400) 
#define  PWR_VRINCON_CMP0VRS_2_7V          ((uint32_t)0x00000500) 
#define  PWR_VRINCON_CMP0VRS_3_0V          ((uint32_t)0x00000600) 
#define  PWR_VRINCON_CMP0VRS_3_3V          ((uint32_t)0x00000700) 
#define  PWR_VRINCON_CMP0VRS_1_2V          ((uint32_t)0x00000800)
#define  PWR_VRINCON_CMP0VRS_2_4V          ((uint32_t)0x00000c00)
#define  PWR_VRINCON_VRINSEL_Vdd	       ((uint32_t)0x00000006)
#define  PWR_VRINCON_VRINSEL_1V	           ((uint32_t)0x00000008)
#define  PWR_VRINCON_VRINSEL_2V            ((uint32_t)0x0000000a)
#define  PWR_VRINCON_VRINSEL_3V            ((uint32_t)0x0000000c)
#define  PWR_VRINCON_VRINSEL_4V     	   ((uint32_t)0x0000000e)
#define  PWR_VRINCON_VRIN				   ((uint32_t)0x00000001)


	 /******************  Bit definition for WKUP_CTL register  *******************/	           
#define  PWR_WKUP0          							((uint32_t)0x00000001)  
#define  PWR_WKUP1          							((uint32_t)0x00000002) 



#define	 PWR_WKUP_PA7									PWR_WKUP0				
#define	 PWR_WKUP_PA15	 							PWR_WKUP1
#define IS_PWR_WKUP_Pin(Pin) (((Pin) == PWR_WKUP_PA7) || ((Pin) == PWR_WKUP_PA15))

#define	 PWR_CMP1VREFLevel_0V2									PWR_VRINCON_CMP1VRS_0_2V				
#define	 PWR_CMP1VREFLevel_0V4	 								PWR_VRINCON_CMP1VRS_0_4V
#define	 PWR_CMP1VREFLevel_0V66									PWR_VRINCON_CMP1VRS_0_66V				
#define	 PWR_CMP1VREFLevel_0V8	 								PWR_VRINCON_CMP1VRS_0_8V
#define	 PWR_CMP1VREFLevel_1V23									PWR_VRINCON_CMP1VRS_1_23V				
#define	 PWR_CMP1VREFLevel_1V58	 								PWR_VRINCON_CMP1VRS_1_58V
#define	 PWR_CMP1VREFLevel_2V18									PWR_VRINCON_CMP1VRS_2_18V				
#define	 PWR_CMP1VREFLevel_2V6	 								PWR_VRINCON_CMP1VRS_2_6V
#define IS_Compare1VoltageReference(voltage) (((voltage) == PWR_CMP1VREFLevel_0V2) || ((voltage) == PWR_CMP1VREFLevel_0V4) || \
                                                            ((voltage) == PWR_CMP1VREFLevel_0V66) || ((voltage) == PWR_CMP1VREFLevel_0V8) || \
                                                            ((voltage) == PWR_CMP1VREFLevel_1V23) || ((voltage) == PWR_CMP1VREFLevel_1V58) || \
                                                            ((voltage) == PWR_CMP1VREFLevel_2V18) || ((voltage) == PWR_CMP1VREFLevel_2V6)) 

#define	 PWR_CMP0VREFLevel_0V									PWR_VRINCON_CMP0VRS_0V				
#define	 PWR_CMP0VREFLevel_0V32	 								PWR_VRINCON_CMP0VRS_0_32V
#define	 PWR_CMP0VREFLevel_0V6									PWR_VRINCON_CMP0VRS_0_6V	
#define	 PWR_CMP0VREFLevel_1V									PWR_VRINCON_CMP0VRS_1_0V	
#define	 PWR_CMP0VREFLevel_2V	 								PWR_VRINCON_CMP0VRS_2_0V
#define	 PWR_CMP0VREFLevel_2V7									PWR_VRINCON_CMP0VRS_2_7V				
#define	 PWR_CMP0VREFLevel_3V	 								PWR_VRINCON_CMP0VRS_3_0V
#define	 PWR_CMP0VREFLevel_3V3									PWR_VRINCON_CMP0VRS_3_3V				
#define	 PWR_CMP0VREFLevel_1V2	 								PWR_VRINCON_CMP0VRS_1_2V
#define	 PWR_CMP0VREFLevel_2V4	 								PWR_VRINCON_CMP0VRS_2_4V
#define IS_Compare0VoltageReference(voltage) (((voltage) == PWR_CMP0VREFLevel_0V) || ((voltage) == PWR_CMP0VREFLevel_0V32) || \
                                                ((voltage) == PWR_CMP0VREFLevel_0V6) || ((voltage) == PWR_CMP0VREFLevel_1V) || \
                                                ((voltage) == PWR_CMP0VREFLevel_2V) || ((voltage) == PWR_CMP0VREFLevel_2V7) || \
                                                ((voltage) == PWR_CMP0VREFLevel_3V) || ((voltage) == PWR_CMP0VREFLevel_3V3) || \
                                                ((voltage) == PWR_CMP0VREFLevel_1V2) || ((voltage) == PWR_CMP0VREFLevel_2V4))
																					
#define	 PWR_INVREFLevel_1V										PWR_VRINCON_VRINSEL_1V				
#define	 PWR_INVREFLevel_2V	 									PWR_VRINCON_VRINSEL_2V
#define	 PWR_INVREFLevel_3V										PWR_VRINCON_VRINSEL_3V	
#define	 PWR_INVREFLevel_4V										PWR_VRINCON_VRINSEL_4V	
#define	 PWR_INVREFLevel_VDD									PWR_VRINCON_VRINSEL_Vdd		
#define IS_INVREFLeve(voltage) (((voltage) == PWR_INVREFLevel_1V) || ((voltage) == PWR_INVREFLevel_2V) || \
                                ((voltage) == PWR_INVREFLevel_3V) || ((voltage) == PWR_INVREFLevel_4V) || \
                                ((voltage) == PWR_INVREFLevel_VDD))

#define	 PWR_Sleep1WakeUP_Flag										PWR_CON_SLP1WKSTS	
#define	 PWR_Sleep2WakeUP_Flag										PWR_CON_SLP2WKSTS		
#define IS_SleepWakeUP_Flag(Flag) (((Flag) == PWR_Sleep1WakeUP_Flag) || ((Flag) == PWR_Sleep2WakeUP_Flag))


uint8_t DisRegProt( void );
uint8_t EnRegProt( void );
void PWR_EnterNormalsleep(void);
void PWR_EnterDeepsleepOne(void);
void PWR_EnterDeepsleepTwo(void);
void PWR_EnterPowerdown(void);
uint32_t PWR_BackUpP0(void);
void PWR_WakeUpPinCmd(uint32_t PWR_WakeUpPin,FunctionalState NewState);
void PWR_VRINCmd(FunctionalState NewState);
void PWR_CMP1VREFLevelConfig(uint32_t PWR_CMP1VREFLevel);
void PWR_CMP0VREFLevelConfig(uint32_t PWR_CMP0VREFLevel);
void PWR_INVREFLevelConfig (uint32_t PWR_INVREFLevel);
FlagStatus PWR_GetCONFlag(uint8_t CON_FLAG);
void PWR_ClearCONFlag ( uint8_t CON_FLAG);
void PWR_CONCmd(FunctionalState NewState);
void PWR_CMPVRCmd ( FunctionalState NewState);
#ifdef __cplusplus
}
#endif
#endif

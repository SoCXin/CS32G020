/* 
 * Copyright(C)
 * By Chipsea Technology Ltd.
 * All right reserved..
 */

#ifndef __CSA36FX30_FSMC_H
#define __CSA36FX30_FSMC_H

#ifdef  __cplusplus
extern "C" {
#endif

#include "csa36fx30.h"
	
typedef enum     
{       
	Hardware_ID = 0x04,
	Unique_ID = 0x0B
}IDTypeDef;

  /********************  Bits definition for ISPCON register  ******************/
#define ISP_Freq_48M                         ((uint32_t)0x00000000)      
#define ISP_Freq_36M                         ((uint32_t)0x00000100) 
#define ISP_Freq_24M                         ((uint32_t)0x00000200)
#define ISP_Freq_16M                         ((uint32_t)0x00000300)
#define ISP_Freq_12M                         ((uint32_t)0x00000400)
#define ISP_Freq_8M                          ((uint32_t)0x00000500)	
#define ISP_Freq_4M                          ((uint32_t)0x00000600)
#define ISP_Freq_1M                          ((uint32_t)0x00000700)
#define ISP_Standby                          ((uint32_t)0x00000080)
#define ISP_Lock                        		 ((uint32_t)0x00000040)
#define ISP_LDU                        		   ((uint32_t)0x00000020)
#define ISP_CFGU                        		 ((uint32_t)0x00000010)       
#define ISP_APU                       			 ((uint32_t)0x00000008)        
#define ISP_BS_AP                       		 ((uint32_t)0x00000000) 
#define ISP_BS_SR                       		 ((uint32_t)0x00000004)
#define ISP_BS_LD                       		 ((uint32_t)0x00000002)
#define ISP_EN                       		 		 ((uint32_t)0x00000001)
  /********************  Bits definition for ISPTRG register  ******************/
#define ISP_TRG_GO                         	 ((uint32_t)0x00000001)      
  /********************  Bits definition for ISPSTA register  ******************/
#define ISP_STA_WERR                         ((uint32_t)0x80000000) 
#define ISP_STA_PGERR                        ((uint32_t)0x40000000)	
#define ISP_STA_UNLOCKERR                    ((uint32_t)0x40000000)
#define ISP_STA_FStandby                     ((uint32_t)0x00000080)
#define ISP_STA_FF                        	 ((uint32_t)0x00000040)
#define ISP_STA_ProtectFlag                  ((uint32_t)0x00000020)
#define ISP_STA_UNVLDFlag                  	 ((uint32_t)0x00000010)
#define ISP_STA_LockFlag                  	 ((uint32_t)0x00000008)
#define ISP_STA_GO                  	 			 ((uint32_t)0x00000001)
  /********************  Bits definition for CFGSTS register  ******************/
#define CFG_STS_RDCFGSTS                     ((uint32_t)0x80000001) 


/*#define	 ISP_48M									ISP_Freq_48M	
#define	 ISP_36M									ISP_Freq_36M	
#define	 ISP_24M									ISP_Freq_24M	
#define	 ISP_16M									ISP_Freq_16M	
#define	 ISP_12M									ISP_Freq_12M	
#define	 ISP_8M										ISP_Freq_8M	
#define	 ISP_4M										ISP_Freq_4M	
#define	 ISP_1M										ISP_Freq_1M	*/
typedef enum     
{       
	ISP_48M = 0,
    ISP_36M = 1,
	ISP_24M ,             
	ISP_16M ,            
	ISP_12M , 
	ISP_8M ,
	ISP_4M ,
    ISP_1M 
} ISPCLKType; 

typedef enum     
{       
	M0 = 1,
	M1
}MarginMode;

#define IS_ISP_CLK(freq) (((freq) == ISP_48M) || ((freq) == ISP_36M)||\
                            ((freq) == ISP_24M) || ((freq) == ISP_16M)||\
                            ((freq) == ISP_12M) || ((freq) == ISP_8M)||\
                            ((freq) == ISP_4M) || ((freq) == ISP_1M))

#define IS_Flash_ID(number) (((number) == Hardware_ID) || ((number) == Unique_ID))	


#define	 FMC_SR_AP										ISP_BS_AP	
#define	 FMC_SR_LD										ISP_BS_LD	
#define	 FMC_SR_RA										ISP_BS_SR	
#define IS_ROM(ROM) (((ROM) == FMC_SR_AP) || ((FMC_SR_LD) == ISP_36M)||((ROM) == FMC_SR_RA))

#define	 FMC_CP_ENISP									ISP_EN	
#define	 FMC_CP_ENCFG									ISP_CFGU	
#define IS_ISP_CFG_Protect(command) (((command) == FMC_CP_ENISP) || ((command) == FMC_CP_ENCFG))

#define IS_Margin_Mode(Mar) (((Mar) == M0) || ((Mar) == M1))	

uint8_t DisISPRegProt( void );
uint8_t EnISPRegProt( void );
void FMC_Init(void);
ErrorStatus FMC_ErasePage(uint32_t adr,ISPCLKType ispclk );
ErrorStatus FMC_EraseMorePage(uint32_t adr, uint8_t num,ISPCLKType ispclk );
ErrorStatus FMC_WriteWords(uint32_t adr, uint16_t sz, uint32_t *buf,ISPCLKType ispclk );
void FMC_ReadWords (uint32_t adr, uint16_t sz, uint32_t *buf);
uint32_t FMC_ReadID(IDTypeDef ID, ISPCLKType ispclk );
void FMC_SwitchROM(uint32_t FMC_SR);
ErrorStatus FMC_ReMap(uint32_t addr);
void FMC_ConfigProt(uint8_t FMC_CP,FunctionalState NewState);
void FMC_FlashDeepStandBy (FunctionalState NewState);
uint8_t FMC_WriteDataFlashAdd (uint32_t DFBADDR);
uint32_t FMC_ReadDataFlashAdd( void );
uint8_t FMC_MarginRead (MarginMode mode);

#ifdef __cplusplus
}
#endif
#endif

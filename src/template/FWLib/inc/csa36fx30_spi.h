#ifndef __CSA36FX30_SPI_H
#define __CSA36FX30_SPI_H
#ifdef __cplusplus
 extern "C" {
#endif	 
	 
#include "csa36fx30.h"
	 
	 /******************  Bit definition for SPIx_CR register  *******************/
#define  SPI_CR_MSTEN                 		 ((uint32_t)0x00001000)           
#define  SPI_CR_CKPHA               	 		 ((uint32_t)0x00000800)            
#define  SPI_CR_CKPOL                      ((uint32_t)0x00000400)
#define  SPI_CR_WIREMOD                 	 ((uint32_t)0x00000100) 
	 
	 	 /******************  Bit definition for SPIx_SR register  *******************/
#define  SPI_SR_RXTXIF                 		 ((uint32_t)0x00000010)           
#define  SPI_SR_SLVSEL               	 		 ((uint32_t)0x00000008)            
#define  SPI_SR_WCOL                       ((uint32_t)0x00000004)
#define  SPI_SR_SPIBSY                 	 	 ((uint32_t)0x00000001) 
	 
	 	 /******************  Bit definition for SPIx_IER register  *******************/
#define  SPI_IER_RXTXIE                 		 ((uint32_t)0x00000010)           
#define  SPI_IER_WCOLIE               	 		 ((uint32_t)0x00000004)   
	 

typedef struct
{
  uint32_t SPI_Mode; 
  uint32_t SPI_CPOL; 
  uint32_t SPI_CPHA;
  uint32_t SPI_WIREMOD;
  uint32_t SPI_BateRate;
}SPI_InitTypedef;

#define SPI_Mode_Master       SPI_CR_MSTEN
#define SPI_Mode_Slave       	0x0
#define	IS_SPI_MODE(mode)(((mode) == SPI_Mode_Master) || ((mode) == SPI_Mode_Slave))
	 
#define SPI_CPHA_EvenEdge       SPI_CR_CKPHA
#define SPI_CPHA_OddEdge       	0x0
#define	IS_SPI_Position(pos)(((pos) == SPI_CPHA_EvenEdge) || ((pos) == SPI_CPHA_OddEdge))

#define SPI_Three_Mode       SPI_CR_WIREMOD
#define SPI_Four_Mode       	0x0
#define	IS_SPI_WireMOD(number)(((number) == SPI_Three_Mode) || ((number) == SPI_Four_Mode))

#define SPI_CPOL_High       SPI_CR_CKPOL
#define SPI_CPOL_Low       	0x0
#define	IS_SPI_IdelPolarity(Polarity)(((Polarity) == SPI_CPOL_High) || ((Polarity ) == SPI_CPOL_Low))

#define IS_SPI_BateRate(BateRate) (((BateRate) > 0) && ((BateRate) < 0xff))

#define SPI_RXTXIE        SPI_IER_RXTXIE
#define SPI_WCOLIE       	SPI_IER_WCOLIE
#define	IS_SPI_ITSource(Source)(((Source) == SPI_RXTXIE) || ((Source) == SPI_WCOLIE))

#define SPI_RXTXIF        				SPI_SR_RXTXIF
#define SPI_SLVSEL_SELFALG       	    SPI_SR_SLVSEL
#define SPI_WCOL_FLAG        			SPI_SR_WCOL
#define SPI_BUSY_FLAG       			SPI_SR_SPIBSY
#define	IS_SPI_FlagStatus(Flag)(((Flag) == SPI_RXTXIF) || ((Flag) == SPI_SLVSEL_SELFALG)|| \
                                  ((Flag) == SPI_WCOL_FLAG) || ((Flag) == SPI_BUSY_FLAG))
																
void SPI_StructInit(SPI_InitTypedef* SPI_InitStruct);
void SPI_Init(SPI_InitTypedef* SPI_InitStruct);
void SPI_Cmd(FunctionalState NewState);
void SPI_ITConfig(uint32_t SPI_IT, FunctionalState NewState);
void SPI_SendData(uint8_t Data);
uint8_t SPI_ReadData(uint8_t Data);
FlagStatus SPI_GetFlagStatus(uint8_t SPI_FLAG);
void SPI_ClearFlag(uint8_t SPI_FLAG);	
	
#ifdef __cplusplus
}
#endif

#endif

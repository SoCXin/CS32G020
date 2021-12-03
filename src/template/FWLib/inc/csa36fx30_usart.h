#ifndef __CSA36FX30_USART_H
#define __CSA36FX30_USART_H
#ifdef __cplusplus
 extern "C" {
#endif
#include "csa36fx30.h"

typedef struct
{
	uint32_t BaudRate;
	uint32_t Parity; 
	uint32_t Mode; 
	uint32_t RXFIFOThreshold;
	uint32_t TXFIFOThreshold;
} UART_InitTypeDef;

typedef enum
{
    UART0_FRQDIV_1,
    UART0_FRQDIV_2,
    UART0_FRQDIV_4,
    UART0_FRQDIV_8,
    UART0_FRQDIV_16,
    UART0_FRQDIV_32,
    UART0_FRQDIV_64,
    UART0_FRQDIV_128,
}UART0_FRQDIV_TypeDef;
/** @defgroup UART_Word_Length 
  * @{
  */ 

#define UART_WordLength_8b                 ((uint32_t)0x00000000)
#define UART_TXWordLength_9b               UART_CR_TransmitM
#define UART_RXWordLength_9b 							 UART_CR_RecieveM					
#define IS_UART_WORD_LENGTH(LENGTH) (((LENGTH) == UART_WordLength_8b) || \
                                      ((LENGTH) == UART_TXWordLength_9b))|| \
                                      ((LENGTH) == UART_RXWordLength_9b))

/**
  * @}
  */ 

/** @defgroup UART_Parity 
  * @{
  */ 

#define UART_Parity_No                      0x0
#define UART_Parity_Odd                     0x01
#define UART_Parity_Even                    0x02
#define IS_UART_PARITY(PARITY) (((PARITY) == UART_Parity_No) || ((PARITY) == UART_Parity_Even) || \
								((PARITY) == UART_Parity_Odd))
/**							
  * @}
  */ 

/** @defgroup UART_Mode 
  * @{
  */ 																	   

#define UART_Mode_Rx                        UART_CR_RE
#define UART_Mode_Tx                        UART_CR_TE
#define IS_UART_MODE(MODE) ((((MODE) & (uint32_t)0xFFFFFFF3) == 0x00) && \
								((MODE) != (uint32_t)0x00))

/**
  * @}
  */ 

/** @defgroup UART_Interrupt_definition 
  * @brief UART Interrupt definition
  * UART_IT possible values
  * @{
  */
#define UART_IT_WU							UART_IER_WakeUP
#define UART_IT_ERR						    UART_IER_Error
#define UART_IT_RHF						    UART_IER_RecieveHalf
#define UART_IT_RNE						    UART_IER_RecieveNONEmpty	
#define UART_IT_THE						    UART_IER_TransmitHalf
#define UART_IT_TE							UART_IER_TransmitEmpty

#define IS_UART_CONFIG_IT(IT)       (((IT) > 0) && ((IT) < 0x40))

//#define IS_UART_CONFIG_IT(IT) (((IT) == UART_IT_WU) || ((IT) == UART_IT_ERR) || \
//                        ((IT) == UART_IT_RHF) || ((IT) == UART_IT_RNE) || \
//                        ((IT) == UART_IT_THE) || ((IT) == UART_IT_TE)) 

/**
  * @}
  */ 

/** @defgroup UART_Flags 
  * @{
  */
#define UART_Flag_RX_BUSY					UART_IFR_RecieveBusy					
#define UART_Flag_TX_BUSY 					UART_IFR_TransmitBusy				
#define UART_Flag_RXOV_ERR					UART_IFR_RecieveOverFlow			
#define UART_Flag_STOP_ERR 				    UART_IFR_StopError				
#define UART_Flag_WU						UART_IFR_WakeUP
#define UART_Flag_ERR						UART_IFR_Error
#define UART_Flag_RHF						UART_IFR_RecieveHalf
#define UART_Flag_RNE						UART_IFR_RecieveNONEmpty	
#define UART_Flag_THE						UART_IFR_TransmitHalf
#define UART_Flag_TE						UART_IFR_TransmitEmpty
#define IS_UART_FLAG(FLAG) (((FLAG) == UART_Flag_RX_BUSY) || ((FLAG) == UART_Flag_TX_BUSY) || \
                             ((FLAG) == UART_Flag_RXOV_ERR) || ((FLAG) == UART_Flag_STOP_ERR) || \
                             ((FLAG) == UART_Flag_WU) || ((FLAG) == UART_Flag_ERR) || \
                             ((FLAG) == UART_Flag_RHF) || ((FLAG) == UART_Flag_RNE) || \
                             ((FLAG) == UART_Flag_THE) || ((FLAG) == UART_Flag_TE))

#define IS_UART_CLEAR_FLAG(FLAG) ((FLAG) == UART_Flag_RXOV_ERR) || ((FLAG) == UART_Flag_STOP_ERR) || \
                                   ((FLAG) == UART_Flag_WU) || ((FLAG) == UART_Flag_ERR) 




/******************  Bit definition for UART_CR register  *******************/
#define  UART_CR_UE                        ((uint32_t)0x00000001)            /*!< UART Enable */
#define  UART_CR_TE                        ((uint32_t)0x00000004)            /*!< Receiver Enable */
#define  UART_CR_RE                        ((uint32_t)0x00000008)            /*!< Transmitter Enable */
#define  UART_CR_TransmitM                 ((uint32_t)0x00000020)            /*!< TX Word length9 */
#define  UART_CR_RecieveM                  ((uint32_t)0x00000010)            /*!< RX Word length9 */

/******************  Bit definition for UART_IER register  *******************/
#define  UART_IER_WakeUP                   ((uint32_t)0x00000020)			  /*!< Wake UP Enable */
#define  UART_IER_Error                    ((uint32_t)0x00000010)			  /*!< Error Interrupt Enable */
#define  UART_IER_RecieveHalf              ((uint32_t)0x00000008)				
#define  UART_IER_RecieveNONEmpty          ((uint32_t)0x00000004)
#define  UART_IER_TransmitHalf             ((uint32_t)0x00000002)				
#define  UART_IER_TransmitEmpty            ((uint32_t)0x00000001)

/******************  Bit definition for UART_IFR register  *******************/
#define  UART_IFR_RecieveBusy				((uint32_t)0x00000800)
#define  UART_IFR_TransmitBusy				((uint32_t)0x00000400)
#define  UART_IFR_RecieveOverFlow			((uint32_t)0x00000200)
#define  UART_IFR_StopError				((uint32_t)0x00000100)
#define  UART_IFR_WakeUP					((uint32_t)0x00000020)
#define  UART_IFR_Error					((uint32_t)0x00000010)			  /*!< Error Interrupt Enable */
#define  UART_IFR_RecieveHalf				((uint32_t)0x00000008)				
#define  UART_IFR_RecieveNONEmpty			((uint32_t)0x00000004)
#define  UART_IFR_TransmitHalf				((uint32_t)0x00000002)				
#define  UART_IFR_TransmitEmpty			((uint32_t)0x00000001)

/******************  Bit definition for UART_IFR register  *******************/
#define  UART_BRR_AutoBandRate				((uint32_t)0x00008000)


#define IS_UART_BAUDRATE(BAUDRATE) (((BAUDRATE) > 0) && ((BAUDRATE) < 0xffffff))
#define IS_UART_FIFONnmber(FIFONnmber)  (((FIFONnmber)>0)&&((FIFONnmber)<8))
#define IS_UART_DATA(DATA) ((DATA) <= 0x1FF)

void UART_DeInit(void);
void UART_Init( UART_InitTypeDef* UART_InitStruct);
void UART_Cmd( FunctionalState NewState);
void UART_RXEN( FunctionalState NewState);
void UART_TXEN( FunctionalState NewState);
void UART_SendData(uint16_t Data);
uint16_t UART_ReceiveData(void);
void UART_ITConfig(uint32_t UART_IT, FunctionalState NewState);
FlagStatus UART_GetFlagStatus(uint32_t UART_FLAG);
void UART_ClearFlag( uint32_t UART_FLAG);
void UART_AutoBaudRateCmd(FunctionalState NewState);
ErrorStatus UART_GetAutoBaudRateFlag(void);


#ifdef __cplusplus
}
#endif

#endif /* __STM32F0XX_USART_H_ */


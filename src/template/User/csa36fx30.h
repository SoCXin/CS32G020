/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* Copyright(c) 2015 SHENZHEN CHIPSEA TECHNOLOGIES CO.,LTD. All rights reserved.                           */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

#ifndef __CSA36FX30_H__
#define __CSA36FX30_H__

#include <stdint.h>                     /* Include standard types */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <absacc.h>

#define     __I     volatile const      /*!< defines 'read only' permissions     */
#define     __O     volatile            /*!< defines 'write only' permissions    */
#define     __IO    volatile            /*!< defines 'read / write' permissions  */


typedef int32_t  s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t   sc32;       /*!< Read Only */
typedef const int16_t   sc16;       /*!< Read Only */
typedef const int8_t    sc8;        /*!< Read Only */

typedef __IO int32_t    vs32;
typedef __IO int16_t    vs16;
typedef __IO int8_t     vs8;

typedef __I int32_t     vsc32;      /*!< Read Only */
typedef __I int16_t     vsc16;      /*!< Read Only */
typedef __I int8_t      vsc8;       /*!< Read Only */

typedef uint32_t        u32;
typedef uint16_t        u16;
typedef uint8_t         u8;

typedef const uint32_t  uc32;       /*!< Read Only */
typedef const uint16_t  uc16;       /*!< Read Only */
typedef const uint8_t   uc8;        /*!< Read Only */

typedef __IO uint32_t   vu32;
typedef __IO uint16_t   vu16;
typedef __IO uint8_t    vu8;

typedef __I uint32_t    vuc32;      /*!< Read Only */
typedef __I uint16_t    vuc16;      /*!< Read Only */
typedef __I uint8_t     vuc8;       /*!< Read Only */

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;

typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;


#define USE_FULL_ASSERT 1

/* Exported macro ------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT

/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function
  *   which reports the name of the source file and the source
  *   line number of the call that failed.
  *   If expr is true, it returns no value.
  * @retval None
  */
  #define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
      
/* Exported functions ------------------------------------------------------- */
  void assert_failed(uint8_t* file, uint32_t line);
#else
  #define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */
  
  
/*******************************************************************************/
/*                 Register Abstraction                                        */
/*******************************************************************************/

typedef struct
{
    __IO uint32_t RMCON;                    //00
            
} RMC_TypeDef;      
        
        
typedef struct      
{       
    __IO uint32_t ISPCON;                   //00
    __IO uint32_t ISPADR;                   //04
    __IO uint32_t ISPDAT;                   //08
    __IO uint32_t ISPCMD;                   //0C
    __IO uint32_t ISPTRG;                   //10
    __I  uint32_t DFBADR;                   //14
    __IO uint32_t ISPSTA;                   //18
    __IO uint32_t ISPEWEN;                  //1C    
    __O  uint32_t ISPKEYR;                  //20
    __O  uint32_t CFGKEYR;                  //24
    __I  uint32_t RDCFGSTS;                 //28
    __IO uint32_t MGR_CTL;                  //2c
} ISP_TypeDef;      
        
typedef struct      
{       
    __IO uint32_t NVIC_ISER;                //100
         uint32_t RESERVED0[31];            //100 ~ 17C Reserved
    __IO uint32_t NVIC_ICER;                //180
         uint32_t RESERVED1[31];            //184 ~ 1FC Reserved
    __IO uint32_t NVIC_ISPR;                //200
         uint32_t RESERVED2[31];            //200 ~ 27C Reserved
    __IO uint32_t NVIC_ICPR;                //280
         uint32_t RESERVED3[95];            //284 ~ 3FC Reserved
    __IO uint32_t NVIC_IPR0;                //400
    __IO uint32_t NVIC_IPR1;                //404
    __IO uint32_t NVIC_IPR2;                //408
    __IO uint32_t NVIC_IPR3;                //40C
    __IO uint32_t NVIC_IPR4;                //410
    __IO uint32_t NVIC_IPR5;                //414
    __IO uint32_t NVIC_IPR6;                //418
    __IO uint32_t NVIC_IPR7;                //41C
        
} NVIC_TypeDef;     
        
        
typedef struct      
{       
    __IO uint32_t IRQ0_SRC;                 //000    
    __IO uint32_t IRQ1_SRC;                 //004    
    __IO uint32_t IRQ2_SRC;                 //008    
    __IO uint32_t IRQ3_SRC;                 //00c    
    __IO uint32_t IRQ4_SRC;                 //010    
    __IO uint32_t IRQ5_SRC;                 //014    
    __IO uint32_t IRQ6_SRC;                 //018    
    __IO uint32_t IRQ7_SRC;                 //01c    
    __IO uint32_t IRQ8_SRC;                 //020    
    __IO uint32_t IRQ9_SRC;                 //024    
    __IO uint32_t IRQ10_SRC;                //028    
    __IO uint32_t IRQ11_SRC;                //02c    
    __IO uint32_t IRQ12_SRC;                //030    
    __IO uint32_t IRQ13_SRC;                //034    
    __IO uint32_t IRQ14_SRC;                //038    
    __IO uint32_t IRQ15_SRC;                //03c    
    __IO uint32_t IRQ16_SRC;                //040    
    __IO uint32_t IRQ17_SRC;                //044    
    __IO uint32_t IRQ18_SRC;                //048    
    __IO uint32_t IRQ19_SRC;                //04c    
    __IO uint32_t IRQ20_SRC;                //050        
         uint32_t RESERVED0[11];            //054 ~ 07c Reserved    
    __IO uint32_t NMI_SEL;                  //080
    __IO uint32_t MCU_IRQ;                  //084    
            
} INT_TypeDef;      
        
        
typedef struct      
{       
    __I  uint32_t PDID;                     //00
    __IO uint32_t PA_L_MFP;                 //04
    __IO uint32_t PA_H_MFP;                 //08
    __IO uint32_t PB_L_MFP;                 //0C
    __IO uint32_t PB_H_MFP;                 //10
         uint32_t RESERVED0[7];             //14 ~ 2C Reserved
    __IO uint32_t QCCON;                    //30    
         uint32_t RESERVED1[3];             //34 ~ 3C Reserved    
    __I  uint32_t PDID2;                    //40
         uint32_t RESERVED2[3];             //44 ~ 4C Reserved    
    __IO uint32_t TEMP_CR;                  //50
    __I  uint32_t TEMP_DR;                  //54
    __IO uint32_t TEMP_TRIM;                //58    
    __IO uint32_t DBG_CR;   		        //5c
		__IO uint32_t FCPCON;								//60
         uint32_t RESERVED3[39];            //64 ~ FC Reserved
    __IO uint32_t REGWRPROT;                //100
    __IO uint32_t METCH;                    //104    
         uint32_t RESERVED4[62];            //108 ~ 1FC Reserved    
    __IO uint32_t TESTCTRL;                 //200    
    __IO uint32_t TEST_TRIM;                //204    
} GCR_TypeDef;      
typedef struct      
{       
    __IO uint32_t SYST_CSR;                 //00
    __IO uint32_t SYST_RVR;                 //04
    __IO uint32_t SYST_CVR;                 //08
} SYST_TypeDef;     
        
        
typedef struct      
{       
    __I  uint32_t CPUID;                    //00
    __IO uint32_t ICSR;                     //04
         uint32_t RESERVED0[1];             //08 Reserved
    __IO uint32_t AIRCR;                    //0C
    __IO uint32_t SCR;                      //10
         uint32_t RESERVED1[1];             //14 Reserved
         uint32_t RESERVED2[1];             //18 Reserved
    __IO uint32_t SHPR2;                    //1C
    __IO uint32_t SHPR3;                    //20
} SYS_CONTROL_TypeDef;      
        
        
typedef struct      
{       
    __IO uint32_t PWRCON;                   //00
         uint32_t RESERVED0[6];             //04 ~ 18 Reserved
    __IO uint32_t BACKUP0;                  //1C
         uint32_t RESERVED1[4];             //20 ~ 2C Reserved
    __IO uint32_t VRINCON;                  //30
    __IO uint32_t WKUP_CTL;                 //34       
} PWRMU_TypeDef;        
        
        
typedef struct      
{       
    __IO uint32_t RST_SRC;                  //00
    __IO uint32_t IPRSTC1;                  //04
    __IO uint32_t IPRSTC2;                  //08
    __IO uint32_t BODCR;                    //0C
    __IO uint32_t PORCR;                    //10
} RSTMU_TypeDef;        
        
        
typedef struct      
{           
    __IO uint32_t CLKCON;                   //00
    __IO uint32_t AHBCLK;                   //04            
    __IO uint32_t APBCLK;                   //08
    __IO uint32_t CLKSTATUS;                //0C
    __IO uint32_t CLKSEL0;                  //10
    __IO uint32_t CLKSEL1;                  //14
    __IO uint32_t CLKSEL2;                  //18
    __IO uint32_t CLKDIV;                   //1C
    __IO uint32_t PLLCON;                   //20
    __IO uint32_t FRQDIV;                   //24
		__IO uint32_t HIRCTRIM;									//28
} CLKMU_TypeDef;        
        
        
typedef struct      
{       
    __I  uint32_t ADDR0;                    //00
    __I  uint32_t ADDR1;                    //04
    __I  uint32_t ADDR2;                    //08
    __I  uint32_t ADDR3;                    //0c
    __I  uint32_t ADDR4;                    //10
    __I  uint32_t ADDR5;                    //14
    __I  uint32_t ADDR6;                    //18
    __I  uint32_t ADDR7;                    //1c
    __I  uint32_t ADDR8;                    //20
    __I  uint32_t ADDR9;                    //24
    __I  uint32_t ADDR10;                   //28
    __I  uint32_t ADDR11;                   //2c
    __I  uint32_t ADDR12;                   //30
    __I  uint32_t ADDR13;                   //34
    __I  uint32_t ADDR14;                   //38
    __I  uint32_t ADDR15;                   //3c
    __I  uint32_t ADDR16;                   //40
    __I  uint32_t ADDR17;                   //44
    __I  uint32_t ADDR18;                   //48
    __I  uint32_t ADDR19;                   //4c
    __I  uint32_t ADDR20;                   //50
    __I  uint32_t ADDR21;                   //54
    __I  uint32_t ADDR22;                   //58
    __I  uint32_t ADDR23;                   //5C    
         uint32_t RESERVED0[8];             //60 ~ 7C Reserved
    __IO uint32_t ADCR;                     //80
    __IO uint32_t ADCHER;                   //84
    __IO uint32_t ADCR2;                    //88
    __IO uint32_t ADCMPR0;                  //8C
    __IO uint32_t ADCMPR1;                  //90
    __IO uint32_t ADSR;                     //94
    __IO uint32_t ADTDCR;                   //98
    __IO uint32_t ADCHSR;                   //100
} ADC_TypeDef;      
        
typedef struct      
{       
    __IO uint32_t DAC_CTL;                  //00
    __IO uint32_t DAC_DATA;                 //04
    __IO uint32_t DAC_STS;                  //08
} DAC_TypeDef;      
        
typedef struct      
{       
    __IO uint32_t ACMP_CR0;                 //00
    __IO uint32_t ACMP_SR0;                 //04
    __IO uint32_t ACMP_CR1;                 //08
    __IO uint32_t ACMP_SR1;                 //0C
} ACMP_TypeDef;     
        
        
typedef struct      
{       
    __IO uint32_t CC_IE;                    //00
    __IO uint32_t CC_IF;                    //04
    __IO uint32_t CCA_CTL;                  //08
    __IO uint32_t CCB_CTL;                  //0C
    __IO uint32_t AUTO_DET;                 //10
    __IO uint32_t CCA_RLT;                  //14
    __IO uint32_t CCB_RLT;                  //18
    __IO uint32_t CC_DRP;                   //1C
    __IO uint32_t FRS_DET;                  //20
    __IO uint32_t CCA_TRIM1;                  //24
    __IO uint32_t CCA_TRIM2;                  //28
    __IO uint32_t CCB_TRIM1;                  //2C
    __IO uint32_t CCB_TRIM2;                  //30
} TYPEC_TypeDef;        
        
        
typedef struct      
{       
    __IO uint32_t PDCTL;                    //00
    __IO uint32_t PD_INTE;                  //04
    __IO uint32_t PD_INTF;                  //08
    __IO uint32_t TX_HEAD;                  //0C
    __IO uint32_t RX_HEAD;                  //10
    __IO uint32_t TX_EX_HEAD;               //14
    __IO uint32_t RX_EX_HEAD;               //18
    __IO uint32_t PD_SOP;                   //1C
    __IO uint32_t FIFO_CTL;                 //20
    __IO uint32_t FIFO_STS;                 //24
    __IO uint32_t RX_CRC32;                 //28
    __IO uint32_t TX_CRC32;                 //2C
    __IO uint32_t BIST_CTL;                 //30
    __IO uint32_t SOFT_CTL;                 //34
    __IO uint32_t PD_CTL2;                  //38
    __IO uint32_t PD_CLKDIV;                //3C
    __I  uint32_t RX_MSG_ID;                //40
    __I  uint32_t TX_MSG_ID;                //44
    __IO uint32_t SOP_CTL;                  //48
    __IO uint32_t TX_ORDSET;                //4C
    __I  uint32_t RX_ORDSET;                //50
    __IO uint32_t RX_EX_ORDSET1;            //54
    __IO uint32_t RX_EX_ORDSET2;            //58
         uint32_t RESERVED0[41];            //5C ~ FC Reserved
    __IO uint32_t PD_DATA;                  //100
            
} UPD_TypeDef;      
        
typedef struct      
{       
    __IO uint32_t CRC_DR;                   //00
    __IO uint32_t CRC_IDR;                  //04
    __IO uint32_t CRC_CR;                   //08
    __IO uint32_t CRC_INIT;                 //0c
} CRC32_TypeDef;        
        
        
typedef struct      
{       
    __IO uint32_t DIVIDEND;                 //00
    __IO uint32_t DIVISOR;                  //04
    __IO uint32_t DIVQUO;                   //08
    __IO uint32_t DIVREM;                   //0C
    __IO uint32_t DIVSTS;                   //10
            
} HDIV_TypeDef;     
        
        
typedef union       
{       
    __IO uint32_t WORD;     
    __IO uint16_t HALFWORD[2];      
    __IO uint8_t  BYTE[4];      
            
} Data_TypeDef;     
        
        
typedef struct
{
    __IO uint32_t PX_PMD;		//00
	__IO uint32_t PX_OFFD;		//04
	__IO uint32_t PX_DOUT;    	//08
	__IO uint32_t PX_DMASK;   	//0c
	__I  uint32_t PX_PIN;     	//10
	__IO uint32_t PX_DBEN;    	//14
	__IO uint32_t PX_IMD;     	//18
	__IO uint32_t PX_IER;     	//1c
	__IO uint32_t PX_ISRC;    	//20
	__IO uint32_t PX_PUEN;    	//24
	__IO uint32_t PX_PDEN;    	//28
	__IO uint32_t PX_TYPEn;   	//2c
	     uint32_t RESERVED0[4]; //30 ~ 3C Reserved
	__IO uint32_t PX_DBNCE;     //40
	     uint32_t RESERVED1[47];//44 ~ FC Reserved
	__IO uint32_t PX0_DOUT;     //100
	__IO uint32_t PX1_DOUT;     //104
	__IO uint32_t PX2_DOUT;     //108
	__IO uint32_t PX3_DOUT;     //10c
	__IO uint32_t PX4_DOUT;     //110
	__IO uint32_t PX5_DOUT;     //114
	__IO uint32_t PX6_DOUT;     //118
	__IO uint32_t PX7_DOUT;     //11c
	__IO uint32_t PX8_DOUT;     //120
	__IO uint32_t PX9_DOUT;     //124
	__IO uint32_t PX10_DOUT;    //128
	__IO uint32_t PX11_DOUT;    //12c
	__IO uint32_t PX12_DOUT;    //130
	__IO uint32_t PX13_DOUT;    //134
	__IO uint32_t PX14_DOUT;    //138
	__IO uint32_t PX15_DOUT;    //13c

} GPIO_TypeDef;
        
        
        
        
typedef struct      
{       
    __IO uint32_t I2C_CON;                  //00
    __IO uint32_t I2C_TAR;                  //04
    __IO uint32_t I2C_SAR;                  //08
    __IO uint32_t I2C_HS_MADDR;             //0C
    __IO uint32_t I2C_DATA_CMD;             //10
    __IO uint32_t I2C_SS_SCL_HCNT;          //14
    __IO uint32_t I2C_SS_SCL_LCNT;          //18
    __IO uint32_t I2C_FS_SCL_HCNT;          //1C
    __IO uint32_t I2C_FS_SCL_LCNT;          //20
    __IO uint32_t I2C_HS_SCL_HCNT;          //24
    __IO uint32_t I2C_HS_SCL_LCNT;          //28
    __I  uint32_t I2C_INT_STAT;             //2C
    __IO uint32_t I2C_INT_MASK;             //30
    __I  uint32_t I2C_RAW_INT_ST;           //34
    __IO uint32_t I2C_RX_TL;                //38
    __IO uint32_t I2C_TX_TL;                //3C
    __I  uint32_t I2C_CLR_INT;              //40
    __I  uint32_t I2C_CLR_RX_UD;            //44
    __I  uint32_t I2C_CLR_RX_OV;            //48
    __I  uint32_t I2C_CLR_TX_OV;            //4C
    __I  uint32_t I2C_CLR_RD_REQ;           //50
    __I  uint32_t I2C_CLR_TX_ABRT;          //54
    __I  uint32_t I2C_CLR_RX_DONE;          //58
    __I  uint32_t I2C_CLR_ACTIVITY;         //5C
    __I  uint32_t I2C_CLR_STOP_DET;         //60
    __I  uint32_t I2C_CLR_START_DET;        //64
    __I  uint32_t I2C_CLR_GEN_CALL;         //68
    __IO uint32_t I2C_ENABLE;               //6C
    __I  uint32_t I2C_STATUS;               //70
    __I  uint32_t I2C_TXFLR;                //74
    __I  uint32_t I2C_RXFLR;                //78
    __IO uint32_t I2C_SDA_HOLD;             //7C
    __I  uint32_t I2C_TX_ABRT_SOURCE;       //80
    __IO uint32_t I2C_SLV_DATA_NACK;        //84
         uint32_t RESERVED0[3];             //88 ~ 90 Reserved
    __IO uint32_t I2C_SDA_SETUP;            //94
    __IO uint32_t I2C_ACK_GEN_CALL;         //98
    __I  uint32_t I2C_ENABLE_STATUS;        //9C
    __IO uint32_t I2C_FS_SPKLEN;            //A0
    __IO uint32_t I2C_HS_SPKLEN;            //A4
    __I  uint32_t I2C_CLR_RST_DET;          //A8
         uint32_t RESERVED1[1];             //AC
    __O  uint32_t I2C_CLR_MAT_SAR;          //B0
}    I2C_TypeDef;


typedef struct
{
    __IO uint32_t SPIx_DAT;                 //00
    __IO uint32_t SPIx_CR;                  //04
    __IO uint32_t SPIx_SR;                  //08
    __IO uint32_t SPIx_IER;                 //0C
    
} SPI_TypeDef;

typedef struct
{
    __IO uint32_t UARTx_CR;                 //00
    __IO uint32_t UARTx_FIFO_CR;            //04    
    __IO uint32_t UARTx_IER;                //08
    __IO uint32_t UARTx_IFR;                //0C    
    __IO uint32_t UARTx_BRR;                //10    
    __IO uint32_t UARTx_TXR;                //14            
    __IO uint32_t UARTx_RXR;                //18    
    
} UART_TypeDef;


typedef struct{
  __IO uint32_t TMx_CR;                     //00
    __IO uint32_t TMx_CMPR;                 //04
  __IO uint32_t TMx_DUTY;                   //08    
  __IO uint32_t TMx_CNTR;                   //0C
    __IO uint32_t TMx_SR;                   //10
  __IO uint32_t TMx_PWMR;                   //14
} TIM_TypeDef;

typedef struct{
    
    __IO uint32_t WTSCR;                    //00
    
} WDT_SMART_TypeDef;


typedef struct{
    
    __IO uint32_t WTCR;                     //00
    __IO uint32_t WTCRALT;                  //04
    
} WDT_TypeDef;


typedef struct{
    
    __IO uint32_t WWDTRLD;                  //00
    __IO uint32_t WWDTCR;                   //04
    __IO uint32_t WWDTSR;                   //08
    __IO uint32_t WWDTCVR;                  //0C
    
} WWDT_TypeDef;

typedef struct{
    
    __IO uint32_t END;                      //00
    
} END_SIM_TypeDef;

/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
//--- AHB
#define FLASH_BASE              ((uint32_t)0x00000000)
#define SRAM_BASE               ((uint32_t)0x20000000)
#define GCR_BASE                ((uint32_t)0x50000000)
#define PWR_BASE                ((uint32_t)0x50002000)
#define RST_BASE                ((uint32_t)0x50002400)
#define CLK_BASE                ((uint32_t)0x50002800)
#define INT_BASE                ((uint32_t)0x50003000)
#define GPIOA_BASE              ((uint32_t)0x50004000)
#define GPIOB_BASE              ((uint32_t)0x50004400)
#define FMC_BASE                ((uint32_t)0x5000C000)
#define RMC_BASE                ((uint32_t)0x5000E000)
#define HDIV_BASE               ((uint32_t)0x50014000)
#define CRC_BASE                ((uint32_t)0x50024000)
#define UPD0_BASE               ((uint32_t)0x50030000)
#define UPD1_BASE               ((uint32_t)0x50034000)
//--- APB

#define WDT_BASE                ((uint32_t)0x40004000)
#define WDT_SMART_BASE          ((uint32_t)0x40004800)
#define WWDT_BASE               ((uint32_t)0x40004400)
        
#define TMR0_BASE               ((uint32_t)0x40010000)
#define TMR1_BASE               ((uint32_t)0x40012000)
#define I2C0_BASE               ((uint32_t)0x40020000)
#define TYPEC_BASE              ((uint32_t)0x40070000)
#define DAC_BASE                ((uint32_t)0x400A0000)
#define ACMP_BASE               ((uint32_t)0x400D0000)
#define ADC_BASE                ((uint32_t)0x400E0000)
#define TMR2_BASE               ((uint32_t)0x40110000)
#define SPI0_BASE               ((uint32_t)0x40130000)
#define UART_BASE               ((uint32_t)0x40150000)
//--- SCS       
#define SCS1_BASE               ((uint32_t)0xE000E010)  // SYS_Tick 
#define SCS2_BASE               ((uint32_t)0xE000E100)  // NVIC
#define SCS3_BASE               ((uint32_t)0xE000ED00)  // SCB
        
#define END_BASE                ((uint32_t)0xE100f000)// reserve addr,end_sim_addr

/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/

#define RMC             ((RMC_TypeDef           *) RMC_BASE             )
                            
#define ISP             ((ISP_TypeDef           *) FMC_BASE             )
#define GCR             ((GCR_TypeDef           *) GCR_BASE             )
#define SYST            ((SYST_TypeDef          *) SCS1_BASE            )
#define NVIC            ((NVIC_TypeDef          *) SCS2_BASE            )
#define INT             ((INT_TypeDef           *) INT_BASE             )    
#define SCS             ((SYS_CONTROL_TypeDef   *) SCS3_BASE            )

#define PWRMU           ((PWRMU_TypeDef         *) PWR_BASE             )
#define RSTMU           ((RSTMU_TypeDef         *) RST_BASE             )
#define CLKMU           ((CLKMU_TypeDef         *) CLK_BASE             )
#define ADC             ((ADC_TypeDef           *) ADC_BASE             )
#define DAC             ((DAC_TypeDef           *) DAC_BASE             )
#define ACMP            ((ACMP_TypeDef          *) ACMP_BASE            )
#define TYPEC           ((TYPEC_TypeDef         *) TYPEC_BASE           )
#define UPD0            ((UPD_TypeDef           *) UPD0_BASE            )
#define UPD1            ((UPD_TypeDef           *) UPD1_BASE            )
#define CRC32           ((CRC32_TypeDef         *) CRC_BASE             )        
#define HDIV            ((HDIV_TypeDef          *) HDIV_BASE            )
#define GPIOA           ((GPIO_TypeDef         *) GPIOA_BASE           )
#define GPIOB           ((GPIO_TypeDef         *) GPIOB_BASE           )
#define I2C0            ((I2C_TypeDef           *) I2C0_BASE            )
#define SPI0            ((SPI_TypeDef           *) SPI0_BASE            )
#define UART            ((UART_TypeDef          *) UART_BASE           )

#define TIM0            ((TIM_TypeDef           *) TMR0_BASE            )
#define TIM1            ((TIM_TypeDef           *) TMR1_BASE            )
#define TIM2            ((TIM_TypeDef           *) TMR2_BASE            )


#define WDT_SMART       ((WDT_SMART_TypeDef     *) WDT_SMART_BASE       )
#define WDT             ((WDT_TypeDef           *) WDT_BASE             )
#define WWDT            ((WWDT_TypeDef          *) WWDT_BASE            )

#define END_SIM         ((END_SIM_TypeDef       *) END_BASE             )




    
/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/


/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for ADDR0~ADDR23 register  ********************/
#define  ADC_SR_VALID                      ((uint32_t)0x00020000)           /*!<Valid flag */
#define  ADC_SR_OVERRUN                    ((uint32_t)0x00010000)           /*!<Overflow  flag */
#define  ADC_SR_RSLT                       ((uint32_t)0x00000FFF)           /*!<the ADC conversion results*/

/*******************  Bit definition for ADC_CR1 register  ********************/
#define  ADC_CR_UNVLDRS                     ((uint32_t)0xF0000000)        /*!<UNVLD_RS[3:0] bits (Invalid burst mode and limited cycle scan mode conversion select bits) */
#define  ADC_CR_UNVLDRS_0                   ((uint32_t)0x10000000)        /*!<Bit 0 */
#define  ADC_CR_UNVLDRS_1                   ((uint32_t)0x20000000)        /*!<Bit 1 */
#define  ADC_CR_UNVLDRS_2                   ((uint32_t)0x40000000)        /*!<Bit 2 */
#define  ADC_CR_UNVLDRS_3                   ((uint32_t)0x80000000)        /*!<Bit 3 */
#define  ADC_CR_CAL_S                       ((uint32_t)0x08000000)        /*!<Limited cycle scan mode operation mode selection*/ 
#define  ADC_CR_VALIDNS                     ((uint32_t)0x07000000)        /*!<VALIDNS[2:0] bits (Limited period effective transformation frequency scanning mode choice)  */
#define  ADC_CR_VALIDNS_0                   ((uint32_t)0x01000000)        /*!<Bit 0 */
#define  ADC_CR_VALIDNS_1                   ((uint32_t)0x02000000)        /*!<Bit 1 */
#define  ADC_CR_VALIDNS_2                   ((uint32_t)0x04000000)        /*!<Bit 2 */
#define  ADC_CR_VRS                         ((uint32_t)0x000E0000)        /*!<VRS[2:0] bits (he ADC reference voltage source)  */
#define  ADC_CR_VRS_0                       ((uint32_t)0x00020000)        /*!<Bit 0 */
#define  ADC_CR_VRS_1                       ((uint32_t)0x00040000)        /*!<Bit 1 */
#define  ADC_CR_VRS_2                       ((uint32_t)0x00080000)        /*!<Bit 2 */
#define  ADC_CR_CHSAMPCNT                   ((uint32_t)0x001C0000)        /*!<CHSAMPCNT[2:0] bits (The channel counter sampling)  */
#define  ADC_CR_CHSAMPCNT_0                 ((uint32_t)0x00040000)        /*!<Bit 0 */
#define  ADC_CR_CHSAMPCNT_1                 ((uint32_t)0x00080000)        /*!<Bit 1 */
#define  ADC_CR_CHSAMPCNT_2                 ((uint32_t)0x00100000)        /*!<Bit 2 */
#define  ADC_CR_DMOF                        ((uint32_t)0x00010000)        /*!<The ADC data complement control signals */
#define  ADC_CR_OFFEX                       ((uint32_t)0x00008000)        /*!<Handshaking on both ends of the comparator, the only difference model is effective  */
#define  ADC_CR_CMPSEL                      ((uint32_t)0x00004000)        /*!<Choose A/D can make comparator source */
#define  ADC_CR_TMRSEL                      ((uint32_t)0x00003000)        /*!<TMRSEL[1:0] bits (Choose A/D source can make A timer)                            */
#define  ADC_CR_TMRSEL_0                    ((uint32_t)0x00001000)        /*!<Bit 0 */
#define  ADC_CR_TMRSEL_1                    ((uint32_t)0x00002000)        /*!<Bit 1 */
#define  ADC_CR_TRGCOND                     ((uint32_t)0x00000C00)        /*!<TRGCOND[1:0] bits (Hardware trigger condition)  */
#define  ADC_CR_TRGCOND_0                   ((uint32_t)0x01000400)        /*!<Bit 0 */
#define  ADC_CR_TRGCOND_1                   ((uint32_t)0x02000800)        /*!<Bit 1 */
#define  ADC_CR_DIFFENB                     ((uint32_t)0x00000080)         /*!<differential  enable   */
#define  ADC_CR_ADMD                        ((uint32_t)0x00000070)        /*!<TRGCOND[1:0] bits (A/D conversion control operation mode)                            */
#define  ADC_CR_ADMD_0                      ((uint32_t)0x01000010)        /*!<Bit 0 */
#define  ADC_CR_ADMD_1                      ((uint32_t)0x02000020)        /*!<Bit 1 */ 
#define  ADC_CR_ADMD_2                      ((uint32_t)0x02000040)        /*!<Bit 2 */ 
#define  ADC_CR_TRGEN                       ((uint32_t)0x00000008)        /*!<A/D Hardware trigger can control   */
#define  ADC_CR_ADST                        ((uint32_t)0x00000004)        /*!<A/D conversion start               */
#define  ADC_CR_ADIE                        ((uint32_t)0x00000002)        /*!<control A/D interrupt              */
#define  ADC_CR_ADEN                        ((uint32_t)0x00000001)        /*!<A/D converter enable */




/******************  Bit definition for ADC_CHER register  *******************/
#define  ADC_CHER_0                          ((uint32_t)0x00000001)        /*!<CHER bit (Channel 0  Ennable )  AINP 0    */
#define  ADC_CHER_1                          ((uint32_t)0x00000002)        /*!<CHER bit (Channel 1  Ennable )  AINN 0    */
#define  ADC_CHER_2                          ((uint32_t)0x00000004)        /*!<CHER bit (Channel 2  Ennable )  AINP 1    */
#define  ADC_CHER_3                          ((uint32_t)0x00000008)        /*!<CHER bit (Channel 3  Ennable )  AINN 1    */
#define  ADC_CHER_4                          ((uint32_t)0x00000010)        /*!<CHER bit (Channel 4  Ennable )  AINP 2    */
#define  ADC_CHER_5                          ((uint32_t)0x00000020)        /*!<CHER bit (Channel 5  Ennable )  AINN 2    */
#define  ADC_CHER_6                          ((uint32_t)0x00000040)        /*!<CHER bit (Channel 6  Ennable )  AINP 3    */
#define  ADC_CHER_7                          ((uint32_t)0x00000080)        /*!<CHER bit (Channel 7  Ennable )  AINN 3    */
#define  ADC_CHER_8                          ((uint32_t)0x00000100)        /*!<CHER bit (Channel 8  Ennable )  AINP 4     */
#define  ADC_CHER_9                          ((uint32_t)0x00000200)        /*!<CHER bit (Channel 9  Ennable )  AINN 4     */
#define  ADC_CHER_10                         ((uint32_t)0x00000400)        /*!<CHER bit (Channel 10 Ennable )  AINP 5     */
#define  ADC_CHER_11                         ((uint32_t)0x00000800)        /*!<CHER bit (Channel 11 Ennable )  AINN 5     */
#define  ADC_CHER_12                         ((uint32_t)0x00001000)        /*!<CHER bit (Channel 12 Ennable )  AINP 6     */
#define  ADC_CHER_13                         ((uint32_t)0x00002000)        /*!<CHER bit (Channel 13 Ennable )  AINN 6     */
#define  ADC_CHER_14                         ((uint32_t)0x00004000)        /*!<CHER bit (Channel 14 Ennable )  AINP 7     */
#define  ADC_CHER_15                         ((uint32_t)0x00008000)        /*!<CHER bit (Channel 15 Ennable )  AINN 7     */
#define  ADC_CHER_16                         ((uint32_t)0x00010000)        /*!<CHER bit (Channel 16 Ennable )  AINN 8    */
#define  ADC_CHER_17                         ((uint32_t)0x00020000)        /*!<CHER bit (Channel 17 Ennable )  AINP 8    */
#define  ADC_CHER_18                         ((uint32_t)0x00040000)        /*!<CHER bit (Channel 18 Ennable )  AINN 9    */
#define  ADC_CHER_19                         ((uint32_t)0x00080000)        /*!<CHER bit (Channel 19 Ennable )  AINP 9    */
#define  ADC_CHER_20                         ((uint32_t)0x00100000)        /*!<CHER bit (Channel 20 Ennable )  Int_VREF   */
#define  ADC_CHER_21                         ((uint32_t)0x00200000)        /*!<CHER bit (Channel 21 Ennable )  DAC_OUT   */
#define  ADC_CHER_22                         ((uint32_t)0x00400000)        /*!<CHER bit (Channel 22 Ennable )  Conversion VSS    */
#define  ADC_CHER_23                         ((uint32_t)0x00800000)        /*!<CHER bit (Channel 23 Ennable )  Conversion Within a short    */


/*******************  Bit definition for ADC_CR2 register  ********************/
#define  ADC_CR2_SARRES                      ((uint32_t)0x00000300)        /*!<SARRES[1:0] bits (The ADC reserved bit) */
#define  ADC_CR2_SARRES_0                    ((uint32_t)0x00000100)        /*!<Bit 0 */
#define  ADC_CR2_SARRES_1                    ((uint32_t)0x00000200)        /*!<Bit 1 */
#define  ADC_CR2_SETH_AZ0                    ((uint32_t)0x00000010)        /*!<The ADC internal comparator configuration    */
#define  ADC_CR2_BFMODE                      ((uint32_t)0x00000008)        /*!<SAR_VREF external 1 uf capacitance control   */
#define  ADC_CR2_LPOWER                      ((uint32_t)0x00000104)        /*!<SAR_ADC low-speed low-power mode enabled     */
#define  ADC_CR2_CKMODE                      ((uint32_t)0x00000003)        /*!<ADC_CR2_CKMODE[1:0] bits (SAR_ADC clock DUTY select register) */
#define  ADC_CR2_CKMODE_0                    ((uint32_t)0x00000001)        /*!<Bit 0 */
#define  ADC_CR2_CKMODE_1                    ((uint32_t)0x00000002)        /*!<Bit 1 */



/******************  Bit definition for ADC_CMPR0/ADC_CMPR1 register  *******************/
#define  ADC_CMPR_CMPD                      ((uint32_t)0x0FFF0000)        /*!<CMPD[11:0] bits (Comparing numerical) */
#define  ADC_CMPR_CMPMATCNT                 ((uint32_t)0x00006F00)        /*!<CMPMATCNT[5:0] bits(matching number) */    
#define  ADC_CMPR_CMPCH                     ((uint32_t)0x000000F8)        /*!<CMPCH[5:0] bits(matching number) */
#define  ADC_CMPR_CMPCH_0                   ((uint32_t)0x00000008)        /*!<Bit 0 */
#define  ADC_CMPR_CMPCH_1                   ((uint32_t)0x00000010)        /*!<Bit 1 */
#define  ADC_CMPR_CMPCH_2                   ((uint32_t)0x00000020)        /*!<Bit 2 */
#define  ADC_CMPR_CMPCH_3                   ((uint32_t)0x00000040)        /*!<Bit 3 */
#define  ADC_CMPR_CMPCH_4                   ((uint32_t)0x00000080)        /*!<Bit 4 */                                          
#define  ADC_CMPR_CMPCOND                   ((uint32_t)0x00000004)        /*!<Comparing conditions*/
#define  ADC_CMPR_CMPIE                     ((uint32_t)0x00000002)        /*!<compare interrupt Enable */
#define  ADC_CMPR_CMPEN                     ((uint32_t)0x00000001)        /*!<Comparison Enable */



/*******************  Bit definition for ADC_ADSR register  *******************/
#define  ADC_ADSR_CHANNEL                    ((uint32_t)0x000001F0)        /*!<SQ13[4:0] bits (13th conversion in regular sequence) */
#define  ADC_ADSR_CHANNEL_0                  ((uint32_t)0x00000010)        /*!<Bit 0 */
#define  ADC_ADSR_CHANNEL_1                  ((uint32_t)0x00000020)        /*!<Bit 1 */
#define  ADC_ADSR_CHANNEL_2                  ((uint32_t)0x00000040)        /*!<Bit 2 */
#define  ADC_ADSR_CHANNEL_3                  ((uint32_t)0x00000080)        /*!<Bit 3 */
#define  ADC_ADSR_CHANNEL_4                  ((uint32_t)0x00000100)        /*!<Bit 4 */
#define  ADC_ADSR_BUSY                       ((uint32_t)0x00000008)        /*!<ADC busy or free flag */
#define  ADC_ADSR_CMPF1                      ((uint32_t)0x00000004)        /*!<compare flag 1 */
#define  ADC_ADSR_CMPF0                      ((uint32_t)0x00000002)        /*!<compare flag 0  */
#define  ADC_ADSR_ADF                        ((uint32_t)0x00000001)        /*!<The end of the A/D conversion flags */


/*******************  Bit definition for ADC_TDCR register  ********************/
#define  ADC_TDCR_ETRDT                      ((uint32_t)0x000000FF)         /*!<External trigger delay time */



/*******************  Bit definition for ADC_CHSR register  *******************/
#define  ADC_CHSR_AINPN_S                     ((uint32_t)0x00000080)        /*!< Input channel selection */
#define  ADC_CHSR_AINS                        ((uint32_t)0x0000000F)        /*!< Input channel selection*/
#define  ADC_CHSR_AINS_0                      ((uint32_t)0x00000001)        /*!<Bit 0 */
#define  ADC_CHSR_AINS_1                      ((uint32_t)0x00000002)        /*!<Bit 1 */
#define  ADC_CHSR_AINS_2                      ((uint32_t)0x00000004)        /*!<Bit 2 */
#define  ADC_CHSR_AINS_3                      ((uint32_t)0x00000008)        /*!<Bit 3 */



/*******************  Bit definition for PDCTL register   ********************/
#define     UPD_PDCTL_USBPD_EN             0x80000000          /* USB PD module enable         */
#define     UPD_PDCTL_TXST                 0x40000000          /* Message send start           */
#define     UPD_PDCTL_PDRST                0x10000000          /* USB PD module reset          */
#define     UPD_PDCTL_SLOW                 0x03000000          /* PD communication edge select */
#define     UPD_PDCTL_PD_RXVSEL            0x00E00000          /* PD communication RX threshold*/
#define     UPD_PDCTL_PDVSEL               0x001C0000          /* PD TX BMC voltage            */
#define     UPD_PDCTL_CC_SEL               0x00010000          /* CC ports select              */
#define     UPD_PDCTL_PD_FTR               0x00003000          /* PD filter time select        */
#define     UPD_PDCTL_AUTO_RCLK            0x00000400          /* PD RX clock automatic select */
#define     UPD_PDCTL_PD_RES               0x00000300          /* PD serve register            */
#define     UPD_PDCTL_AUTO_RETRY           0x00000080          /* PD automatic retry           */
#define     UPD_PDCTL_RETRY_CNT            0x00000060          /* PD retry counter             */
#define     UPD_PDCTL_AUTO_CRC32           0x00000010          /* PD automatic calculate CRC32 */
#define     UPD_PDCTL_AUTO_CRC_SOP2        0x00000008          /* PD automatic ACK SOP'' MSG   */
#define     UPD_PDCTL_AUTO_CRC_SOP1        0x00000004          /* PD automatic ACK SOP' MSG    */
#define     UPD_PDCTL_AUTO_CRC_SOP         0x00000002          /* PD automatic ACK SOP MSG     */
#define     UPD_PDCTL_AUTO_ID              0x00000001          /* PD automatic calculate MSG ID*/


/*******************  Bit definition for PD_INTE register  ********************/
#define     PD_IT_CCIDLEIE           0x00010000          /* USB PD CC idle interrupt enable */
#define     PD_IT_BISTEXIE           0x00008000          /* BIST mode exit interrupt enable */
#define     PD_IT_RXBRKNIE           0x00004000          /* USB PD communication broken interrupt enable */
#define     PD_IT_RFIFOOVIE          0x00002000          /* PD RX FIFO overflow interrupt enable */
#define     PD_IT_TFIFOFIE           0x00000400          /* PD TX FIFO full interrupt enable */
#define     PD_IT_TFIFOTHIE          0x00000200          /* PD TX FIFO threshold interrupt enable */
#define     PD_IT_TFIFOEIE           0x00000100          /* PD TX FIFO empty interrupt enable */
#define     PD_IT_TMOUTIE            0x00000080          /* PD communication time out interrupt enable */
#define     PD_IT_TXIE               0x00000040          /* PD tx interrupt enable */
#define     PD_IT_RXIE               0x00000020          /* PD rx interrupt enable */
#define     PD_IT_RFIFOFIE           0x00000004          /* PD RX FIFO full interrupt enable */
#define     PD_IT_RFIFOTHIE          0x00000002          /* PD RX FIFO threshold interrupt enable */
#define     PD_IT_RFIFOEIE           0x00000001          /* PD RX FIFO empty interrupt enable */
#define     PD_IT_ALLENABLE          0x0001E7E7         /* PD All interrupt enable */



/*******************  Bit definition for PD_INTF register  ********************/
#define     UPD_PD_INTE_CCIDLEIF     0x00010000          /* USB PD CC idle interrupt flag */
#define     UPD_PD_INTE_BISTEXIF     0x00008000          /* BIST mode exit interrupt flag */
#define     UPD_PD_INTE_RXBRKNIF     0x00004000          /* USB PD communication broken interrupt flag */
#define     UPD_PD_INTE_RFIFOOVIF    0x00002000          /* PD RX FIFO overflow interrupt flag */
#define     UPD_PD_INTE_NO_EOP       0x00001000          /* PD RX MSG without EOP frame       */
#define     UPD_PD_INTE_MSGID_ERR    0x00000800          /* PD RX MSG ID error flag         */
#define     UPD_PD_INTE_TFIFOFIF     0x00000400          /* PD TX FIFO full interrupt flag */
#define     UPD_PD_INTE_TFIFOTHIF    0x00000200          /* PD TX FIFO threshold interrupt flag */
#define     UPD_PD_INTE_TFIFOEIF     0x00000100          /* PD TX FIFO empty interrupt flag */
#define     UPD_PD_INTE_TMOUTIF      0x00000080          /* PD communication time out interrupt flag */
#define     UPD_PD_INTE_TXIF         0x00000040          /* PD tx interrupt flag */
#define     UPD_PD_INTE_RXIF         0x00000020          /* PD rx interrupt flag */
#define     UPD_PD_INTE_CRCERR       0x00000010          /* PD rx CRC error flag */
#define     UPD_PD_INTE_BUSY         0x00000008          /* PD busy flag         */
#define     UPD_PD_INTE_RFIFOFIF     0x00000004          /* PD RX FIFO full interrupt flag */
#define     UPD_PD_INTE_RFIFOTHIF    0x00000002          /* PD RX FIFO threshold interrupt flag */
#define     UPD_PD_INTE_RFIFOEIF     0x00000001          /* PD RX FIFO empty interrupt flag */

/*******************  Bit definition for TX_HEAD register  ********************/
#define     UPD_TX_HEAD_TXD_EXTD     0x00008000          /* USB PD tx extended msg  */
#define     UPD_TX_HEAD_TXD_LEN      0x00007000          /* USB PD tx data length   */
#define     UPD_TX_HEAD_TXD_MSG_ID   0x00000E00          /* USB PD tx message id    */
#define     UPD_TX_HEAD_TXD_PWRR     0x00000100          /* USB PD tx power role    */
#define     UPD_TX_HEAD_TXD_SPEC_REV 0x000000C0          /* USB PD tx spec revision */
#define     UPD_TX_HEAD_TXD_DATR     0x00000020          /* USB PD tx data role     */
#define     UPD_TX_HEAD_TXD_CMD      0x0000001F          /* USB PD tx command       */

/*******************  Bit definition for RX_HEAD register  ********************/
#define     UPD_RX_HEAD_RCV_EXTD     0x00008000          /* USB PD rx extended msg  */
#define     UPD_RX_HEAD_RCV_LEN      0x00007000          /* USB PD rx data length   */
#define     UPD_RX_HEAD_RCV_MSG_ID   0x00000E00          /* USB PD rx message id    */
#define     UPD_RX_HEAD_RCV_PWRR     0x00000100          /* USB PD rx power role    */
#define     UPD_RX_HEAD_RCV_SPEC_REV 0x000000C0          /* USB PD rx spec revision */
#define     UPD_RX_HEAD_RCV_DATR     0x00000020          /* USB PD rx data role     */
#define     UPD_RX_HEAD_RCV_CMD      0x0000001F          /* USB PD rx command       */

/*******************  Bit definition for TX_EX_HEAD register  ********************/
#define     UPD_TX_EX_HEAD_TXD_CHUNK 	 0x00008000          /* USB PD tx chunk control bit */
#define     UPD_TX_EX_HEAD_TXD_CNK_NUM 	 0x00007800          /* USB PD tx chunk number */
#define     UPD_TX_EX_HEAD_TXD_REQ_CHK	 0x00000400          /* USB PD tx chunk request/ack */
#define     UPD_TX_EX_HEAD_TXD_DATA_SIZE 0x000001FF          /* USB PD tx chunk data size */

/*******************  Bit definition for RX_EX_HEAD register  ********************/
#define     UPD_RX_EX_HEAD_RCV_CHUNK     0x00008000          /* USB PD rx chunk control bit */
#define     UPD_RX_EX_HEAD_RCV_CNK_NUM 	 0x00007800          /* USB PD rx chunk number */
#define     UPD_RX_EX_HEAD_RCV_REQ_CHK	 0x00000400          /* USB PD rx chunk request/ack */
#define     UPD_RX_EX_HEAD_RCV_DATA_SIZE 0x000001FF          /* USB PD rx chunk data size */

/*******************  Bit definition for PD_SOP register  ********************/
#define     UPD_PD_SOP_RCV_SOP       		 0x00000F00          /* USB PD receive sop packet   */
#define     UPD_PD_SOP_TXD_SOP       		 0x00000007          /* USB PD transmited sop packet */

/*******************  Bit definition for FIFO_CTL register  ********************/
#define     UPD_FIFO_CTL_RXFIFO_CLR      0x00008000          /* Clear RX FIFO                  */
#define     UPD_FIFO_CTL_RXFIFO_TH     	 0x00001F00          /* RX FIFO threshold              */
#define     UPD_FIFO_CTL_TXFIFO_CLR      0x00000080          /* Clear TX FIFO                  */
#define     UPD_FIFO_CTL_TXFIFO_TH     	 0x0000001F          /* TX FIFO threshold              */

/*******************  Bit definition for FIFO_STS register  ********************/
#define     UPD_FIFO_STS_TFIFODOV        0x00001000          /* TX FIFO down overflow         */
#define     UPD_FIFO_STS_RFIFOUOV        0x00000800          /* RX FIFO up wn overflow        */
#define     UPD_FIFO_STS_TFIFOF          0x00000400          /* TX FIFO full flag             */
#define     UPD_FIFO_STS_TFIFOTH         0x00000200          /* TX FIFO threshold            */
#define     UPD_FIFO_STS_TFIFOE          0x00000100          /* TX FIFO empty                */
#define     UPD_FIFO_STS_RFIFOF          0x00000004          /* RX FIFO full flag             */
#define     UPD_FIFO_STS_RFIFOTH         0x00000002          /* RX FIFO threshold            */
#define     UPD_FIFO_STS_RFIFOE          0x00000001          /* RX FIFO empty                */

/*******************  Bit definition for RX_CRC32 register  ********************/

/*******************  Bit definition for TX_CRC32 register  ********************/

/*******************  Bit definition for BIST_CTL register  ********************/
#define     UPD_BIST_CTL_BIST_MODE       0x00000003          /* BIST mode select              */
/*******************  Bit definition for SOFT_CTL register  ********************/
#define     UPD_SOFT_CTL_SOFT_PD         0x0000000F          /* PD soft mode enable           */
/*******************  Bit definition for PD_CKDIV register  ********************/
#define     UPD_PD_CKDIV_RCLK_DIV        0x0000FF00          /* PD receive clkdiv             */
#define     UPD_PD_CKDIV_PD_CKDIV        0x000000FF          /* PD clock divide control       */

/*******************  Bit definition for SOP_CTL register  ********************/
#define     UPD_SOP_CTL_AUTO_CRC_SOPEX2  0x01000000          /* Automatic ACK Extended SOP2 */
#define     UPD_SOP_CTL_AUTO_CRC_SOPEX   0x00800000          /* Automatic ACK Extended SOP  */
#define     UPD_SOP_CTL_AUTO_CRC_SOP2D   0x00400000          /* Automatic ACK Extended SOP'' debug*/
#define     UPD_SOP_CTL_AUTO_CRC_SOP1D   0x00200000          /* Automatic ACK Extended SOP' debug*/
#define     UPD_SOP_CTL_SOPEX2_EN        0x00000100          /* Extended SOP2 receive enable*/
#define     UPD_SOP_CTL_SOPEX1_EN        0x00000080          /* Extended SOP1 receive enable*/
#define     UPD_SOP_CTL_SOP2D_EN         0x00000040          /* SOP'' debug receive enable*/
#define     UPD_SOP_CTL_SOP1D_EN         0x00000020          /* SOP' debug receive enable*/
#define     UPD_SOP_CTL_CRST_EN          0x00000010          /* Cable reset receive enable*/
#define     UPD_SOP_CTL_HRST_EN          0x00000008          /* Hard reset receive enable*/
#define     UPD_SOP_CTL_SOP2_EN          0x00000004          /* SOP'' packet receive enable*/
#define     UPD_SOP_CTL_SOP1_EN          0x00000002          /* SOP' packet receive enable*/
#define     UPD_SOP_CTL_SOP_EN           0x00000001          /* SOP packet receive enable*/



/*******************  Bit definition for RX_ MSG_ID register  ********************/


#define     UPD_RX_MSG_ID_SOP2      0x00007000         /* Clear RX FIFO                  */
#define     UPD_RX_MSG_ID_SOP1      0x00000070         /* RX FIFO threshold              */
#define     UPD_RX_MSG_ID_SOP       0x00000007         /* Clear TX FIFO                  */

/*******************  Bit definition for TX_ MSG_ID register  ********************/

#define     UPD_TX_MSG_ID_SOP2      0x00007000         /* Clear RX FIFO                  */
#define     UPD_TX_MSG_ID_SOP1      0x00007000         /* RX FIFO threshold              */
#define     UPD_TX_MSG_ID_SOP       0x00007000         /* Clear TX FIFO                  */


/*******************************************************************************
 *                Hardware Abstraction Layer
 ****************************************************************************** */
#if defined ( __CC_ARM   )
    #define __ASM               __asm               /*!< asm keyword for ARM Compiler          */
    #define __INLINE            __inline            /*!< inline keyword for ARM Compiler       */
#elif defined ( __ICCARM__ )
    #define __ASM               __asm               /*!< asm keyword for IAR Compiler           */
    #define __INLINE            inline              /*!< inline keyword for IAR Compiler. Only avaiable in High optimization mode! */
    #define __NOP               __no_operation      /*!< no operation intrinsic in IAR Compiler */
#elif defined   (  __GNUC__  )
    #define __ASM               asm                 /*!< asm keyword for GNU Compiler          */
    #define __INLINE            inline              /*!< inline keyword for GNU Compiler       */
#endif

/* ###################  Compiler specific Intrinsics  ########################### */

#if defined ( __CC_ARM   ) /*------------------RealView Compiler -----------------*/
/* ARM armcc specific functions */

    #define __enable_fault_irq                __enable_fiq
    #define __disable_fault_irq               __disable_fiq

    #define __NOP                             __nop
    #define __WFI                             __wfi
    #define __WFE                             __wfe
    #define __SEV                             __sev
    #define __ISB()                           __isb(0)
    #define __DSB()                           __dsb(0)
    #define __DMB()                           __dmb(0)
    #define __REV                             __rev


#elif (defined (__ICCARM__)) /*------------------ ICC Compiler -------------------*/
/* IAR iccarm specific functions */

    #define __enable_irq                              __enable_interrupt        /*!< global Interrupt enable */
    #define __disable_irq                             __disable_interrupt       /*!< global Interrupt disable */

    static __INLINE void __enable_fault_irq()         { __ASM ("cpsie f"); }
    static __INLINE void __disable_fault_irq()        { __ASM ("cpsid f"); }

    static __INLINE  void __WFI()                     { __ASM ("wfi"); }
    static __INLINE  void __WFE()                     { __ASM ("wfe"); }
    static __INLINE  void __SEV()                     { __ASM ("sev"); }


#elif (defined (__GNUC__)) /*------------------ GNU Compiler ---------------------*/
/* GNU gcc specific functions */

    static __INLINE void __NOP()                      { __ASM volatile ("nop"); }
    static __INLINE void __enable_irq()               { __ASM volatile ("cpsie i"); }
    static __INLINE void __disable_irq()              { __ASM volatile ("cpsid i"); }

    static __INLINE void __enable_fault_irq()         { __ASM volatile ("cpsie f"); }
    static __INLINE void __disable_fault_irq()        { __ASM volatile ("cpsid f"); }

    static __INLINE void __WFI()                      { __ASM volatile ("wfi"); }
    static __INLINE void __WFE()                      { __ASM volatile ("wfe"); }
    static __INLINE void __SEV()                      { __ASM volatile ("sev"); }
    static __INLINE void __ISB(arg)                   { __ASM volatile ("isb"); }
    static __INLINE void __DSB(arg)                   { __ASM volatile ("dsb"); }
    static __INLINE void __DMB(arg)                   { __ASM volatile ("dmb"); }


#endif

#endif

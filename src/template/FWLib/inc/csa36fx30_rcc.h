/* 
 * Copyright(C)
 * By Chipsea Technology Ltd.
 * All right reserved..
 */

#ifndef __cs37FX61_RCC_H
#define __cs37FX61_RCC_H

#ifdef  __cplusplus
extern "C" {
#endif

#include "csa36fx30.h"

/*******************  Bit definition for RCC_CLKCON register  ********************/ 
#define     RCC_CLKCON_LATENCY              0x80000000          /* Flash instruciton cycle config */
#define     RCC_CLKCON_XSEDUTY_EN           0x00000400          /* HSE or LSE DUT check enable*/
#define     RCC_CLKCON_LSECFG_EN            0x00000100          /* LSE control in DeepSleep mode */
#define     RCC_CLKCON_XSE_GM               0x000000E0          /* HSE or LSE current control*/
#define     RCC_CLKCON_XSE_SCNT             0x00000010          /* HSE or LSE stable time delay*/
#define     RCC_CLKCON_LSI_EN               0x00000008          /* LSI(10K) enable control bit*/
#define     RCC_CLKCON_HSI_EN               0x00000004          /* HSI(24M/8M) enable control bit*/
#define     RCC_CLKCON_XSE_EN               0x00000001          /* HSE or LSE enable control bit*/



/*******************  Bit definition for AHBCLK register  ********************/ 
#define     RCC_AHBCLK_UPD1_EN              0x00000040          /* USB PD1 clock enable control bit*/
#define     RCC_AHBCLK_UPD0_EN              0x00000020          /* USB PD0 clock enable control bit*/
#define     RCC_AHBCLK_TICK_EN              0x00000010          /* Syctem Tick clock enable control bit*/
#define     RCC_AHBCLK_CRC_EN               0x00000008          /* CRC clock enable control bit*/
#define     RCC_AHBCLK_HDIV_EN              0x00000004          /* HDIV clock enable control bit*/
#define     RCC_AHBCLK_ISP_EN               0x00000002          /* ISP clock enable control bit*/
#define     RCC_AHBCLK_GPIO_EN              0x00000001          /* GPIO clock enable control bit*/




/*******************  Bit definition for APBCLK register  ********************/ 
#define     RCC_APBCLK_DAC_EN               0x20000000          /* DAC clock enable control bit*/
#define     RCC_APBCLK_ADC_EN               0x10000000          /* ADC clock enable control bit*/
#define     RCC_APBCLK_TYPEC_EN             0x08000000          /* TYPEC clock enable control bit*/
#define     RCC_APBCLK_ACMP01_EN            0x01000000          /* ACMP01 clock enable control bit*/
#define     RCC_APBCLK_TMR2_EN              0x00040000          /* TMR2 clock enable control bit*/
#define     RCC_APBCLK_TMR1_EN              0x00020000          /* TMR1 clock enable control bit*/
#define     RCC_APBCLK_TMR0_EN              0x00010000          /* TMR0 clock enable control bit*/
#define     RCC_APBCLK_SPI0_EN              0x00000800          /* SPI0 clock enable control bit*/
#define     RCC_APBCLK_I2C0_EN              0x00000080          /* I2C0 clock enable control bit*/
#define     RCC_APBCLK_FDIV_EN              0x00000004          /* FDIV clock enable control bit*/
#define     RCC_APBCLK_WWDT_EN              0x00000002          /* WWDT clock enable control bit*/
#define     RCC_APBCLK_WDT_EN               0x00000001          /* WDT clock enable control bit*/


/*******************  Bit definition for CLKSTATUS register  ********************/ 
#define    RCC_CLKSTATUS_DUTY_STB           0x00000100           /* HSE & LSE DUTY clock stable flag*/
#define    RCC_CLKSTATUS_CLK_SWFAIL         0x00000080           /* clock switch successful flag*/
#define    RCC_CLKSTATUS_HSI_STB            0x00000001           /* HSI stable flag*/
#define    RCC_CLKSTATUS_LSI_STB            0x00000008           /* LSI stable flag*/
#define    RCC_CLKSTATUS_PLL_STB            0x00000004           /* PLL stable flag*/
#define    RCC_CLKSTATUS_XSE_STB            0x00000001           /* HSE & LSE stable flag*/


/*******************  Bit definition for CLKSEL012 register  ********************/ 
#define    RCC_CLKSEL_STCLIK_S              0x00000038           /* SysTick clock source selection*/
#define    RCC_CLKSEL_HCLIK_S               0x00000007           /* HCLK clock source selection*/
#define    RCC_CLKSEL_TMR2_S                0x00000700           /* TMR2 clock source selection*/
#define    RCC_CLKSEL_TMR1_S                0x00000070           /* TMR1 clock source selection*/
#define    RCC_CLKSEL_TMR0_S                0x00000007           /* TMR0 clock source selection*/
#define    RCC_CLKSEL_TYPEC_S               0x0C000000           /* TYPEC clock source selection*/
#define    RCC_CLKSEL_UPD01_S               0x03000000           /* USBPD01 clock source selection*/
#define    RCC_CLKSEL_I2C0_S                0x00C00000           /* I2C clock source selection*/
#define    RCC_CLKSEL_SPI0_S                0x00300000           /* SPI clock source selection*/
#define    RCC_CLKSEL_UART0_S               0x00030000           /* USART clock source selection*/
#define    RCC_CLKSEL_FRQDIV_S              0x00000700           /* FRQDIV clock source selection*/
#define    RCC_CLKSEL_ADC_S                 0x00000030           /* ADC clock source selection*/
#define    RCC_CLKSEL_WWDT_S                0x0000000C           /* WWDT clock source selection*/
#define    RCC_CLKSEL_WDT_S                 0x00000003           /* WDT clock source selection*/


/*******************  Bit definition for CLKDIV register  ********************/ 
#define    RCC_CLKDIV_UPD01_N               0x1F000000           /* USB PD01 clock divider */
#define    RCC_CLKDIV_ADC_N                 0x000F0000           /* ADC clock divider */
#define    RCC_CLKDIV_UART0_N               0x00000F00           /* UART0 clock divider */
#define    RCC_CLKDIV_PCLK_N                0x000000F0           /* PCLK clock divider */
#define    RCC_CLKDIV_HCLK_N                0x0000000F           /* HCLK clock divider */


/*******************  Bit definition for PLLCON register  ********************/ 
#define    RCC_PLLCON_PLL_EN                0x00800000           /* PLL Enable control bit */ 
#define    RCC_PLLCON_PLL_SRC               0x00400000           /* PLL clock source selection */ 
#define    RCC_PLLCON_OE                    0x00200000           /* PLL OE control bit */ 
#define    RCC_PLLCON_BP                    0x00100000           /* PLL bypass control bit */ 
#define    RCC_PLLCON_OUT_DV                0x00007000           /* PLL out div control bit */ 
#define    RCC_PLLCON_IN_DV                 0x00000700           /* PLL in div control bit */ 
#define    RCC_PLLCON_FB_DV                 0x0000000F           /* PLL feedback control bit */ 


/*******************  Bit definition for FRQDIV register  ********************/ 
#define    RCC_FRQDIV_PUMP_CLKDIV           0x00001F00           /* charge pump clock div bits */
#define    RCC_FRQDIV_DIVDER1               0x00000020           /* FRQDIV1 enable control bit */
#define    RCC_FRQDIV_DIVDER_EN             0x00000010           /* FRQDIV enable control bit */
#define    RCC_FRQDIV_FSEL                  0x0000000F           /* FRQDIV div control bits */


/*******************  Bit definition for HIRCTRIM register  ********************/ 
#define     RCC_HIRCTRIM                    0x00000007           /* HIRC temperature trim data */



/**
 * @group: HSE & LSE config 
 * @{ */
typedef struct
{
    uint32_t RCC_XT_CFG;  			//0/1: 在DEEPSLEEP模式是否关闭外部低速晶振 
	uint32_t RCC_XT_GM;              //16M以下配置为XT_GM_000，16M以上配置为XT_GM_111		
    uint32_t RCC_XT_SCNT;  		    //在外部晶振 时钟输出之前延时时钟个数
} RCC_HSXInitTypeDef;

/**
 * @Brief: RCC_XT_CFG 
 * @{ */
#define     RCC_XT_CFG_ON                   RCC_CLKCON_LSECFG_EN
#define     RCC_XT_CFG_OFF                  ~RCC_CLKCON_LSECFG_EN
#define     IS_RCC_XT_CFG(RCC_XT_CFG) (((RCC_XT_CFG) == RCC_XT_CFG_ON) || ((RCC_XT_CFG) == RCC_XT_CFG_OFF))
/**  @} */

/**
 * @Brief: RCC_XT_GM
 * @{ */
#define     RCC_XT_GM_L                     ~RCC_CLKCON_XSE_GM
#define     RCC_XT_GM_H                     RCC_CLKCON_XSE_GM
#define     IS_RCC_XT_GM(RCC_XT_GM) (((RCC_XT_GM) == RCC_XT_GM_L) || ((RCC_XT_GM) == RCC_XT_GM_H))
/**  @} */

/**
 * @Brief: RCC_XT_SCNT
 * @{ */
#define      RCC_XT_SCNT_4096               ~RCC_CLKCON_XSE_SCNT
#define      RCC_XT_SCNT_8192               RCC_CLKCON_XSE_SCNT
#define      IS_RCC_XT_SCNT(RCC_XT_SCNT) (((RCC_XT_SCNT) == RCC_XT_SCNT_4096) || ((RCC_XT_SCNT) == RCC_XT_SCNT_8192))
/**  @} */
/**  @} */


/**
 * @group: RCC_AHBPeriph
 * @{ */
#define    RCC_AHBPeriph_UPD1               0x00000040          /* USB PD1 Clock enable control bit */    
#define    RCC_AHBPeriph_UPD0               0x00000020          /* USB PD0 Clock enable control bit */
#define    RCC_AHBPeriph_TICK               0x00000010          /* SycTick Clock enable control bit */
#define    RCC_AHBPeriph_CRC                0x00000008          /* CRC Clock enable control bit */
#define    RCC_AHBPeriph_HDIV               0x00000004          /* HDIV Clock enable control bit */
#define    RCC_AHBPeriph_ISP                0x00000002          /* ISP Clock enable control bit */
#define    RCC_AHBPeriph_GPIO               0x00000001          /* GPIO Clock enable control bit */
#define    IS_RCC_AHBPERIPH(AHBPERIPHB) (AHBPERIPHB & 0x7F)
/**  @} */



/**
 * @group: RCC_APBPeriph
 * @{ */
#define     RCC_APBPeriph_DAC               0x20000000          /* DAC Clock Enable control bit */
#define     RCC_APBPeriph_ADC               0x10000000          /* ADC Clock Enable control bit */
#define     RCC_APBPeriph_TYPEC             0x08000000          /* Type-C Clock Enable control bit */
#define     RCC_APBPeriph_ACMP01            0x01000000          /* ACMP01 Clock Enable control bit */
#define     RCC_APBPeriph_TMR2              0x00040000          /* Timer2 Clock Enable control bit */
#define     RCC_APBPeriph_TMR1              0x00020000          /* Timer1 Clock Enable control bit */
#define     RCC_APBPeriph_TMR0              0x00010000          /* Timer0 Clock Enable control bit */
#define     RCC_APBPeriph_SPI0              0x00000800          /* SPI0 Clock Enable control bit */
#define     RCC_APBPeriph_I2C               0x00000100          /* I2C Clock Enable control bit */
#define     RCC_APBPeriph_FDIV              0x00000080          /* FDIV Clock Enable control bit */
#define     RCC_APBPeriph_UART0             0x00000004          /* UART0 Clock Enable control bit */
#define     RCC_APBPeriph_WWDT              0x00000002          /* WWDT Clock Enable control bit */
#define     RCC_APBPeriph_WDT               0x00000001          /* WDT Clock Enable control bit */
#define    IS_RCC_APBPERIPH(APBPERIPHB) (APBPERIPHB & 0x39070987)
/**  @} */
        
/**
 * @group: RCC_Flag
 * @{ */
#define     RCC_FLAG_DUTYSTB                0x00000100          /* HSE & LSI DUTY if stable flag */
#define     RCC_FLAG_CLKSWFAIL              0x00000080          /* clock switch successful flag */
#define     RCC_FLAG_HSISTB                 0x00000010          /* HSI clock stable flag */
#define     RCC_FLAG_LSISTB                 0x00000008          /* LSI clock stable flag */
#define     RCC_FLAG_PLLSTB                 0x00000004          /* PLL clock stable flag */
#define     RCC_FLAG_XSESTB                 0x00000001          /* HSE & LSI clock stable flag */
#define     IS_RCC_FLAG(FLAG) (((FLAG) == RCC_FLAG_DUTYSTB) || ((FLAG) == RCC_FLAG_CLKSWFAIL) || \
                               ((FLAG) == RCC_FLAG_HSISTB)  || ((FLAG) == RCC_FLAG_LSISTB)    || \
                               ((FLAG) == RCC_FLAG_PLLSTB)  || ((FLAG) == RCC_FLAG_XSESTB))
/**  @} */


/**
 * @group   SysTickClk Config
 * @{ */
#define     RCC_SysTickCLK_HSE              0x00000000          /* HSE as Systick clock source */
#define     RCC_SysTickCLK_HSE_DIV2         0x00000010          /* HSE/2 as Systick clock source */
#define     RCC_SysTickCLK_HCLK_DIV2        0x00000018          /* HCLK/2 as Systick clock source */
#define     RCC_SysTickCLK_LSI              0x00000028          /* LSI(10K) as Systick clock source */
#define     RCC_SysTickCLK_HSI_DIV2         0x00000038          /* HSI(24M/8M)  as Systick clock source */
#define     RCC_SysTickCLK_HCLK             0x000000AA          /* HCLK as Systick clock source */
#define     IS_RCC_SYSTICKCLK(CLK) (((CLK) == RCC_SysTickCLK_HSE)       || ((CLK) == RCC_SysTickCLK_HSE_DIV2) || \
                                    ((CLK) == RCC_SysTickCLK_HCLK_DIV2) || ((CLK) == RCC_SysTickCLK_LSI)      || \
                                    ((CLK) == RCC_SysTickCLK_HSI_DIV2)  || ((CLK) == RCC_SysTickCLK_HCLK))
/**  @} */

/**
 * @group : HCLK config
 * @{ */
//#define     RCC_HCLK_HSE                    0x00000000          /* HSE as HCLK clock source */
//#define     RCC_HCLK_PLL                    0x00000002          /* PLL as HCLK clock source */
//#define     RCC_HCLK_LSI                    0x00000003          /* LSI as HCLK clock source */
//#define     RCC_HCLK_HSI                    0x00000007          /* HSI as HCLK clock source */
#define     RCC_HCLK_HSE                    0xFFFFFFF8          /* HSE as HCLK clock source */
#define     RCC_HCLK_PLL                    0xFFFFFFFA          /* PLL as HCLK clock source */
#define     RCC_HCLK_LSI                    0xFFFFFFFB          /* LSI as HCLK clock source */
#define     RCC_HCLK_HSI                    0xFFFFFFFF          /* HSI as HCLK clock source */
#define     IS_RCC_HCLKCLK(CLK) (((CLK) == RCC_HCLK_HSE) || ((CLK) == RCC_HCLK_PLL) || ((CLK) == RCC_HCLK_LSI) || ((CLK) == RCC_HCLK_HSI))

#define     RCC_HCLKDIV_1                   0x00000000          /* Freq(HCLK) = HCLK/1 */ 
#define     RCC_HCLKDIV_2                   0x00000001          /* Freq(HCLK) = HCLK/2 */ 
#define     RCC_HCLKDIV_4                   0x00000002          /* Freq(HCLK) = HCLK/4 */ 
#define     RCC_HCLKDIV_8                   0x00000003          /* Freq(HCLK) = HCLK/8 */ 
#define     RCC_HCLKDIV_16                  0x00000004          /* Freq(HCLK) = HCLK/16 */ 
#define     RCC_HCLKDIV_32                  0x00000005          /* Freq(HCLK) = HCLK/32 */ 
#define     RCC_HCLKDIV_64                  0x00000006          /* Freq(HCLK) = HCLK/64 */ 
#define     RCC_HCLKDIV_128                 0x00000007          /* Freq(HCLK) = HCLK/128 */ 
#define     RCC_HCLKDIV_256                 0x00000008          /* Freq(HCLK) = HCLK/256 */ 
#define     RCC_HCLKDIV_512                 0x00000009          /* Freq(HCLK) = HCLK/512 */ 
#define     IS_RCC_HCLKDIV(DIV) (((DIV) == RCC_HCLKDIV_1) || ((DIV) == RCC_HCLKDIV_2) || ((DIV) == RCC_HCLKDIV_4) || ((DIV) == RCC_HCLKDIV_8) || ((DIV) == RCC_HCLKDIV_16) || ((DIV) == RCC_HCLKDIV_32) || ((DIV) == RCC_HCLKDIV_64) || ((DIV) == RCC_HCLKDIV_128) || ((DIV) == RCC_HCLKDIV_256) || ((DIV) == RCC_HCLKDIV_512))
/**  @} */

/**
 * @group   :   TM2Clock config
 * @{ */
#define     RCC_TMR2CLK_HSE                 0x00000000          /* HSE as TM2 clock source */
#define     RCC_TMR2CLK_LSE                 0x00000100          /* LSE as TM2 clock source */
#define     RCC_TMR2CLK_HCLK                0x00000200          /* HCLK as TM2 clock source */
#define     RCC_TMR2CLK_HSI                 0x00000300          /* HSI as TM2 clock source */
#define     RCC_TMR2CLK_PLL                 0x00000400          /* PLL as TM2 clock source */
#define     RCC_TMR2CLK_LSI                 0x00000700          /* LSI as TM2 clock source */
#define     IS_RCC_TM2CLK(CLK) (((CLK) == RCC_TMR2CLK_HSE) || ((CLK) == RCC_TMR2CLK_LSE) || ((CLK) == RCC_TMR2CLK_HCLK) || ((CLK) == RCC_TMR2CLK_HSI) || ((CLK) == RCC_TMR2CLK_PLL) || ((CLK) == RCC_TMR2CLK_LSI))
/**  @} */

/**
 * @group   :   TM1Clock config
 * @{ */
#define     RCC_TMR1CLK_HSE                 0x00000000          /* HSE as TM1 clock source */
#define     RCC_TMR1CLK_LSE                 0x00000010          /* LSE as TM1 clock source */
#define     RCC_TMR1CLK_HCLK                0x00000020          /* HCLK as TM1 clock source */
#define     RCC_TMR1CLK_HSI                 0x00000030          /* HSI as TM1 clock source */
#define     RCC_TMR1CLK_PLL                 0x00000040          /* PLL as TM1 clock source */
#define     RCC_TMR1CLK_LSI                 0x00000070          /* LSI as TM1 clock source */
#define     IS_RCC_TM1CLK(CLK) (((CLK) == RCC_TMR1CLK_HSE) || ((CLK) == RCC_TMR1CLK_LSE) || ((CLK) == RCC_TMR1CLK_HCLK) || ((CLK) == RCC_TMR1CLK_HSI) || ((CLK) == RCC_TMR1CLK_PLL) || ((CLK) == RCC_TMR1CLK_LSI))
/**  @} */



/**
 * @group   :   TM0Clock config
 * @{ */
#define     RCC_TMR0CLK_HSE                 0x00000000          /* HSE as TM0 clock source */
#define     RCC_TMR0CLK_LSE                 0x00000001          /* LSE as TM0 clock source */
#define     RCC_TMR0CLK_HCLK                0x00000002          /* HCLK as TM0 clock source */
#define     RCC_TMR0CLK_HSI                 0x00000003          /* HSI as TM0 clock source */
#define     RCC_TMR0CLK_PLL                 0x00000004          /* PLL as TM0 clock source */
#define     RCC_TMR0CLK_LSI                 0x00000007          /* LSI as TM0 clock source */
#define     IS_RCC_TM0CLK(CLK) (((CLK) == RCC_TMR0CLK_HSE) || ((CLK) == RCC_TMR0CLK_LSE) || ((CLK) == RCC_TMR0CLK_HCLK) || ((CLK) == RCC_TMR0CLK_HSI) || ((CLK) == RCC_TMR0CLK_PLL) || ((CLK) == RCC_TMR0CLK_LSI))
/**  @} */



/**
 * @group   :   TypeCClock config
 * @{ */
#define     RCC_TypeCCLK_LSE                0x00000000          /* LSE as TypeC clock source */
#define     RCC_TypeCCLK_HCLK_DIV1024       0x08000000          /* HCLK/1024 as TypeC clock source */
#define     RCC_TypeCCLK_LSI                0x0C000000          /* LSI as TypeC clock source */
#define     IS_RCC_TYPECCLK(CLK) (((CLK) == RCC_TypeCCLK_LSE) || ((CLK) == RCC_TypeCCLK_HCLK_DIV1024) || ((CLK) == RCC_TypeCCLK_LSI))
/**  @} */



/**
 * @group   :   USBPDClk config
 * @{ */

#define     RCC_UPD01CLK_HSI                0x00000000          /* HSI as USB PD01 clock source */
#define     RCC_UPD01CLK_PLL                0x01000000          /* PLL as USB PD01 clock source */
#define     RCC_UPD01CLK_HCLK               0x02000000          /* HCLK as USB PD01 clock source */
#define     RCC_UPD01CLK_HSE                0x03000000          /* HSE as USB PD01 clock source */
#define     IS_RCC_UPDCLK(CLK) (((CLK) == RCC_UPD01CLK_HSI) || ((CLK) == RCC_UPD01CLK_PLL) || ((CLK) == RCC_UPD01CLK_HCLK) || ((CLK) == RCC_UPD01CLK_HSE))
/**  @} */


#define     IS_RCC_UPDDIV(CLKDIV)  ((CLKDIV<0x1F))   

/**
 * @group   :   I2CCLK config
 * @{ */
#define     RCC_I2CCLK_HSE                  0x00000000          /* HSE as I2C clock source */
#define     RCC_I2CCLK_PLL                  0x00400000          /* PLL as I2C clock source */
#define     RCC_I2CCLK_HCLK                 0x00800000          /* HCLK as I2C clock source */
#define     RCC_I2CCLK_HSI                  0x00C00000          /* HSI as I2C clock source */
#define     IS_RCC_I2CCLK(CLK) (((CLK) == RCC_I2CCLK_HSE) || ((CLK) == RCC_I2CCLK_PLL) || ((CLK) == RCC_I2CCLK_HCLK) || ((CLK) == RCC_I2CCLK_HSI))

/**  @} */


/**
 * @group   :   SPICLK config
 * @{ */
#define     RCC_SPICLK_HSE                  0x00000000          /* HSE as SPI clock source */
#define     RCC_SPICLK_PLL                  0x00100000          /* PLL as SPI clock source */
#define     RCC_SPICLK_HCLK                 0x00200000          /* HCLK as SPI clock source */
#define     RCC_SPICLK_HSI                  0x00300000          /* HSI as SPI clock source */
#define     IS_RCC_SPICLK(CLK) (((CLK) == RCC_SPICLK_HSE) || ((CLK) == RCC_SPICLK_PLL) || ((CLK) == RCC_SPICLK_HCLK) || ((CLK) == RCC_SPICLK_HSI))

/**  @} */


/**
 * @group   :   UARTClk config
 * @{ */
#define     RCC_UARTCLK_HSE                 0x00000000          /* HSE as UART clock source */
#define     RCC_UARTCLK_PLL                 0x00010000          /* PLL as UART clock source */
#define     RCC_UARTCLK_HCLK                0x00020000          /* HCLK as UART clock source */
#define     RCC_UARTCLK_HSI                 0x00030000          /* HSI as UART clock source */
#define     IS_RCC_UARTCLK(CLK) (((CLK) == RCC_UARTCLK_HSE) || ((CLK) == RCC_UARTCLK_PLL) || ((CLK) == RCC_UARTCLK_HCLK) || ((CLK) == RCC_UARTCLK_HSI))

#define     RCC_UARTDIV_1                   0x00000000          /* CLK(USART) = CLK(USART)/1 */
#define     RCC_UARTDIV_2                   0x00000100          /* CLK(USART) = CLK(USART)/2 */
#define     RCC_UARTDIV_4                   0x00000200          /* CLK(USART) = CLK(USART)/4 */
#define     RCC_UARTDIV_8                   0x00000300          /* CLK(USART) = CLK(USART)/8 */
#define     RCC_UARTDIV_16                  0x00000400          /* CLK(USART) = CLK(USART)/16 */
#define     RCC_UARTDIV_32                  0x00000500          /* CLK(USART) = CLK(USART)/32 */
#define     RCC_UARTDIV_64                  0x00000600          /* CLK(USART) = CLK(USART)/64 */
#define     RCC_UARTDIV_128                 0x00000700          /* CLK(USART) = CLK(USART)/128 */
#define     IS_RCC_UARTDIV(DIV) (((DIV) == RCC_UARTDIV_1) || ((DIV) == RCC_UARTDIV_2) || ((DIV) == RCC_UARTDIV_4) || ((DIV) == RCC_UARTDIV_8) || ((DIV) == RCC_UARTDIV_16) || ((DIV) == RCC_UARTDIV_32) || ((DIV) == RCC_UARTDIV_64) || ((DIV) == RCC_UARTDIV_128))
/**  @} */

/**
 * @group   :   FRQDiv config
 * @{ */
#define     RCC_FRQDIVCLK_HSE               0x00000000          /* HSE as FRQ clock source */
#define     RCC_FRQDIVCLK_PLL               0x00000100          /* PLL as FRQ clock source */
#define     RCC_FRQDIVCLK_HCLK              0x00000200          /* HCLK as FRQ clock source */
#define     RCC_FRQDIVCLK_HSI               0x00000300          /* HSI as FRQ clock source */
#define     RCC_FRQDIVCLK_LSI               0x00000700          /* LSI as FRQ clock source */
#define     IS_RCC_FRQDIVCLK(CLK) (((CLK) == RCC_FRQDIVCLK_HSE) || ((CLK) == RCC_FRQDIVCLK_PLL) || ((CLK) == RCC_FRQDIVCLK_HCLK) || ((CLK) == RCC_FRQDIVCLK_HSI) || ((CLK) == RCC_FRQDIVCLK_LSI))

#define     RCC_FDIV_2                      0x00000000          /* FREQ(FDIV) = FREQ(FDIV)/2 */
#define     RCC_FDIV_4                      0x00000001          /* FREQ(FDIV) = FREQ(FDIV)/4 */
#define     RCC_FDIV_8                      0x00000002          /* FREQ(FDIV) = FREQ(FDIV)/8 */
#define     RCC_FDIV_16                     0x00000003          /* FREQ(FDIV) = FREQ(FDIV)/16 */
#define     RCC_FDIV_32                     0x00000004          /* FREQ(FDIV) = FREQ(FDIV)/32 */
#define     RCC_FDIV_64                     0x00000005          /* FREQ(FDIV) = FREQ(FDIV)/64 */
#define     RCC_FDIV_128                    0x00000006          /* FREQ(FDIV) = FREQ(FDIV)/128 */
#define     RCC_FDIV_256                    0x00000007          /* FREQ(FDIV) = FREQ(FDIV)/256 */
#define     RCC_FDIV_512                    0x00000008          /* FREQ(FDIV) = FREQ(FDIV)/512 */
#define     RCC_FDIV_1024                   0x00000009          /* FREQ(FDIV) = FREQ(FDIV)/1024 */
#define     RCC_FDIV_2048                   0x0000000A          /* FREQ(FDIV) = FREQ(FDIV)/2048 */
#define     RCC_FDIV_4096                   0x0000000B          /* FREQ(FDIV) = FREQ(FDIV)/4096 */
#define     RCC_FDIV_8192                   0x0000000C          /* FREQ(FDIV) = FREQ(FDIV)/8192 */
#define     RCC_FDIV_16384                  0x0000000D          /* FREQ(FDIV) = FREQ(FDIV)/16384 */
#define     RCC_FDIV_32768                  0x0000000E          /* FREQ(FDIV) = FREQ(FDIV)/32768 */
#define     RCC_FDIV_65536                  0x0000000F          /* FREQ(FDIV) = FREQ(FDIV)/65536 */
#define     IS_RCC_FDIV(DIV) (((DIV) == RCC_FDIV_2) || ((DIV) == RCC_FDIV_4) || ((DIV) == RCC_FDIV_8 ) || \
                              ((DIV) == RCC_FDIV_16 ) || ((DIV) == RCC_FDIV_32 ) || ((DIV) == RCC_FDIV_64 ) || \
                              ((DIV) == RCC_FDIV_128 ) || ((DIV) == RCC_FDIV_256 ) || ((DIV) == RCC_FDIV_512 ) || \
                              ((DIV) == RCC_FDIV_1024 ) || ((DIV) == RCC_FDIV_2048 ) || ((DIV) == RCC_FDIV_4096 ) || \
                              ((DIV) == RCC_FDIV_8192 ) || ((DIV) == RCC_FDIV_16384 ) || ((DIV) == RCC_FDIV_32768 ) ||\
                              ((DIV) == RCC_FDIV_65536 ))
/**  @} */



/**
 * @group   :   ADCClock config
 * @{ */
#define     RCC_ADCCLK_HSE                  0x00000000          /* HSE as ADC clock source */
#define     RCC_ADCCLK_PLL                  0x00000010          /* PLL as ADC clock source */
#define     RCC_ADCCLK_HCLK                 0x00000020          /* HCLK as ADC clock source */
#define     RCC_ADCCLK_HSI                  0x00000030          /* HSI as ADC clock source */
#define     IS_RCC_ADCCLK(CLK) (((CLK) == RCC_ADCCLK_HSE) || ((CLK) == RCC_ADCCLK_PLL) || ((CLK) == RCC_ADCCLK_HCLK) || ((CLK) == RCC_ADCCLK_HSI))

#define     RCC_ADCDIV_1                    0x00000000          /* RREQ(ADC) = FREQ(ADC)/1 */
#define     RCC_ADCDIV_2                    0x00010000          /* RREQ(ADC) = FREQ(ADC)/2 */
#define     RCC_ADCDIV_4                    0x00020000          /* RREQ(ADC) = FREQ(ADC)/4 */
#define     RCC_ADCDIV_8                    0x00030000          /* RREQ(ADC) = FREQ(ADC)/8 */
#define     RCC_ADCDIV_16                   0x00040000          /* RREQ(ADC) = FREQ(ADC)/16 */
#define     RCC_ADCDIV_32                   0x00050000          /* RREQ(ADC) = FREQ(ADC)/32 */
#define     RCC_ADCDIV_64                   0x00060000          /* RREQ(ADC) = FREQ(ADC)/64 */
#define     RCC_ADCDIV_128                  0x00070000          /* RREQ(ADC) = FREQ(ADC)/128 */
#define     RCC_ADCDIV_256                  0x00080000          /* RREQ(ADC) = FREQ(ADC)/256 */
#define     IS_RCC_ADCDIV(DIV) (((DIV) == RCC_ADCDIV_1) || ((DIV) == RCC_ADCDIV_2) || ((DIV) == RCC_ADCDIV_4) || ((DIV) == RCC_ADCDIV_8) || ((DIV) == RCC_ADCDIV_16) || ((DIV) == RCC_ADCDIV_32) || ((DIV) == RCC_ADCDIV_64) || ((DIV) == RCC_ADCDIV_128) || ((DIV) == RCC_ADCDIV_256))
/**  @} */

/**
 * @group   :   WWDTClk config
 * @{ */
#define     RCC_WWDTCLK_LSI                 0x00000000          /* LSI(10K) as WWDT clock source */
#define     RCC_WWDTCLK_HCLK_DIV2048        0x00000008          /* HCLK/2048 as WWDT clock source */
#define     RCC_WWDTCLK_LSE                 0x0000000C          /* LSE as WWDT clock source */
#define     IS_RCC_WWDTCLK(CLK) (((CLK) == RCC_WWDTCLK_LSI) || ((CLK) == RCC_WWDTCLK_HCLK_DIV2048) || ((CLK) == RCC_WWDTCLK_LSE))

/**  @} */


/**
 * @group   :   WDTClk config
 * @{ */
#define     RCC_WDTCLK_LSI                  0x00000000          /* LSI(10K) as WDT clock source */
#define     RCC_WDTCLK_HCLK_DIV2048         0x00000002          /* HCLK/2048 as WDT clock source */
#define     RCC_WDTCLK_LSE                  0x00000003          /* LSE as WDT clock source */
#define     IS_RCC_WDTCLK(CLK) (((CLK) == RCC_WDTCLK_LSI) || ((CLK) == RCC_WDTCLK_HCLK_DIV2048) || ((CLK) == RCC_WDTCLK_LSE))
/**  @} */

/**
 * @group   :   PCLK config
 * @{ */
#define     RCC_PCLKDIV_1                   0x00000000          /* FREQ(PCLK) = HCLK/1 */      
#define     RCC_PCLKDIV_2                   0x00000010          /* FREQ(PCLK) = HCLK/2 */      
#define     RCC_PCLKDIV_4                   0x00000020          /* FREQ(PCLK) = HCLK/4 */      
#define     RCC_PCLKDIV_8                   0x00000030          /* FREQ(PCLK) = HCLK/8 */      
#define     RCC_PCLKDIV_16                  0x00000040          /* FREQ(PCLK) = HCLK/16 */      
#define     RCC_PCLKDIV_32                  0x00000050          /* FREQ(PCLK) = HCLK/32 */      
#define     IS_RCC_PCLKDIV(DIV) (((DIV) == RCC_PCLKDIV_1) || ((DIV) == RCC_PCLKDIV_2) || ((DIV) == RCC_PCLKDIV_4) || ((DIV) == RCC_PCLKDIV_8) || ((DIV) == RCC_PCLKDIV_16) || ((DIV) == RCC_PCLKDIV_32))
/**  @} */

/**
 * @group   :   PLL config
 * @{ */



typedef enum
{
    
    RCC_PLL_OUTDIV_2 = 0x00000000,                               /* FREQ(PLL out)/2 */
    RCC_PLL_OUTDIV_3 = 0x00001000,                               /* FREQ(PLL out)/3 */
    RCC_PLL_OUTDIV_4 = 0x00002000,                               /* FREQ(PLL out)/4 */
    RCC_PLL_OUTDIV_5 = 0x00003000,                               /* FREQ(PLL out)/5 */
    RCC_PLL_OUTDIV_6 = 0x00004000,                               /* FREQ(PLL out)/6 */    
    RCC_PLL_OUTDIV_7 = 0x00005000,                               /* FREQ(PLL out)/7 */    
    RCC_PLL_OUTDIV_8 = 0x00006000,                               /* FREQ(PLL out)/8 */    
    RCC_PLL_OUTDIV_9 = 0x00007000                                /* FREQ(PLL out)/9 */   
}
RCC_PLLOUTDIV_TypeDef;


typedef enum
{

    RCC_PLL_INDIV_1 = 0x00000100,                                /* FREQ(PLL in)/1 */
    RCC_PLL_INDIV_2 = 0x00000200,                                /* FREQ(PLL in)/2 */
    RCC_PLL_INDIV_3 = 0x00000300,                                /* FREQ(PLL in)/3 */
    RCC_PLL_INDIV_4 = 0x00000400,                                /* FREQ(PLL in)/4 */
    RCC_PLL_INDIV_5 = 0x00000500,                                /* FREQ(PLL in)/5 */
    RCC_PLL_INDIV_6 = 0x00000600,                                /* FREQ(PLL in)/6 */
    RCC_PLL_INDIV_7 = 0x00000700,                                /* FREQ(PLL in)/7 */
    RCC_PLL_INDIV_8 = 0x00000800                                 /* FREQ(PLL in)/8 */
}
RCC_PLLINDIV_TypeDef;


typedef enum
{
    RCC_PLL_FBDIV_20 = 0x00000000,                              /* FREQ(PLL fb)/20 */
    RCC_PLL_FBDIV_22 = 0x00000001,                              /* FREQ(PLL fb)/22 */
    RCC_PLL_FBDIV_24 = 0x00000002,                              /* FREQ(PLL fb)/24 */
    RCC_PLL_FBDIV_26 = 0x00000003,                              /* FREQ(PLL fb)/26 */
    RCC_PLL_FBDIV_28 = 0x00000004,                              /* FREQ(PLL fb)/28 */
    RCC_PLL_FBDIV_30 = 0x00000005,                              /* FREQ(PLL fb)/30 */
    RCC_PLL_FBDIV_32 = 0x00000006,                              /* FREQ(PLL fb)/32 */
    RCC_PLL_FBDIV_34 = 0x00000007,                              /* FREQ(PLL fb)/34 */
    RCC_PLL_FBDIV_36 = 0x00000008,                              /* FREQ(PLL fb)/36 */
    RCC_PLL_FBDIV_38 = 0x00000009,                              /* FREQ(PLL fb)/38 */
    RCC_PLL_FBDIV_40 = 0x0000000A,                              /* FREQ(PLL fb)/40 */
    RCC_PLL_FBDIV_42 = 0x0000000B,                              /* FREQ(PLL fb)/42 */
    RCC_PLL_FBDIV_44 = 0x0000000C,                              /* FREQ(PLL fb)/44 */
    RCC_PLL_FBDIV_46 = 0x0000000D,                              /* FREQ(PLL fb)/46 */
    RCC_PLL_FBDIV_48 = 0x0000000E                               /* FREQ(PLL fb)/48 */
}
RCC_PLLFBDIV_TypeDef;

#define      RCC_PLL_SRC_HSE                0x00040000         /* HSE as PLL source clock*/      
#define      RCC_PLL_SRC_HSI                0x00000000         /* HSI as PLL source clock*/   

#define      RCC_PLL_OE_ENABLE              0x00020000         /* Enable PLL FOUT */   
#define      RCC_PLL_OE_DISABLE             0x00000000         /* PLL FOUT = 0 */   

#define      RCC_PLL_BP_NORMAL              0x00010000         /* PLL config to normal mode */   
#define      RCC_PLL_BP_IOSAME              0x00000000         /* PLL config input = output */   


typedef struct
{
    uint32_t PLL_SRC;
    uint32_t PLL_OE;
    uint32_t PLL_BP;
    RCC_PLLOUTDIV_TypeDef PLL_OUTDV;
    RCC_PLLINDIV_TypeDef PLL_INDV;
    RCC_PLLFBDIV_TypeDef PLL_FBDV;
}
RCC_PLLConfig_TypeDef;

/**  @} */





/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

/* Function used to set the RCC clock configuration to the default reset state */
void RCC_HSICmd(FunctionalState NewState);
void RCC_LSICmd(FunctionalState NewState);
void RCC_HSELSECmd(RCC_HSXInitTypeDef InitType,  FunctionalState NewState);
void RCC_AHBPeriphClockCmd(uint32_t RCC_AHBPeriph, FunctionalState NewState);
void RCC_APBPeriphClockCmd(uint32_t RCC_APBPeriph, FunctionalState NewState);
FlagStatus RCC_GetFlagStatus (uint32_t RCC_FLAG);

/* Peripheral clocks configuration functions **********************************/
void RCC_SysTickCLKConfig(uint32_t RCC_SysTickCLK);
void RCC_HCLKConfig(uint32_t RCC_HCLK, uint32_t CLKDiv);
void RCC_TMR2CLKConfig(uint32_t RCC_TMR2CLK);
void RCC_TMR1CLKConfig(uint8_t RCC_TMR1CLK);
void RCC_TMR0CLKConfig(uint8_t RCC_TMR0CLK);
void RCC_TypeCCLKConfig(uint32_t RCC_TypeCCLK);
void RCC_UPD01CLKConfig(uint32_t RCC_UPD01CLK,uint32_t CLKDiv);
void RCC_I2CCLKConfig(uint32_t RCC_I2CCLK);
void RCC_SPICLKConfig(uint8_t RCC_SPICLK);
void RCC_UARTCLKConfig(uint32_t RCC_UARTCLK, uint32_t CLKDiv);
void RCC_FRQDIVCLKConfig(uint32_t RCC_FRQDIVCLK, uint32_t CLKDiv);
void RCC_ADCCLKConfig(uint32_t RCC_ADCCLK, uint32_t CLKDiv);
void RCC_WWDTCLKConfig(uint8_t RCC_WWDTCLK);
void RCC_WDTCLKConfig(uint8_t RCC_WDTCLK);

void RCC_PCLKConfig(uint8_t CLKDiv);
void RCC_PLLConfig(RCC_PLLConfig_TypeDef* PLLConfig);
void RCC_PLLEnable(FunctionalState NewState);
void RCC_HSITRIMConfig (uint8_t trim);
void RCC_FlashLatency (FunctionalState NewState);



#ifdef  __cplusplus
}
#endif
#endif

#ifndef __CSA36FX30_I2C_H__
#define __CSA36FX30_I2C_H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup I2C
  * @{
  */
/* Exported types ------------------------------------------------------------*/

#define I2C_CON_RST                         ((u32)0x0000007F)
#define I2C_TAR_RST                         ((u32)0x00001055)
#define I2C_SAR_RST                         ((u32)0x00000055)
#define I2C_HS_MADDR_RST                    ((u32)0x00000001)
#define I2C_DATA_CMD_RST                    ((u32)0x00000000)
#define I2C_SS_SCL_HCNT_RST                 ((u32)0x00000190)
#define I2C_SS_SCL_LCNT_RST                 ((u32)0x000001D6)
#define I2C_FS_SCL_HCNT_RST                 ((u32)0x0000003C)
#define I2C_FS_SCL_LCNT_RST                 ((u32)0x00000082)
#define I2C_HS_SCL_HCNT_RST                 ((u32)0x00000006)
#define I2C_HS_SCL_LCNT_RST                 ((u32)0x00000010)
#define I2C_INT_MASK_RST                    ((u32)0x000008FF)
#define I2C_RX_TL_RST                       ((u32)0x00000000)
#define I2C_TX_TL_RST                       ((u32)0x00000000)
#define I2C_ENABLE_RST                      ((u32)0x00000000)
#define I2C_SDA_HOLD_RST                    ((u32)0x00000001)
#define I2C_SLV_DATA_NACK_RST               ((u32)0x00000000)
#define I2C_SDA_SETUP_RST                   ((u32)0x00000064)
#define I2C_ACK_GEN_CALL_RST                ((u32)0x00000001)
#define I2C_FS_SPKLEN_RST                   ((u32)0x00000005)
#define I2C_HS_SPKLEN_RST                   ((u32)0x00000001)

/*******************  Bit definition for IPRSTC2 register  ********************/
#define RSTMU_IPRSTC2_I2C0_RST              ((u32)0x00000100)

/*******************  Bit definition for I2C_CON register  ********************/
#define I2C_CON_ALL_BIT_SET                 ((u32)0x000001e6)
#define I2C_CON_TX_EMPTY_CTRL               ((u32)0x00000100)
#define I2C_CON_STOP_DET_IFADDRESSED        ((u32)0x00000080)
#define I2C_CON_SLAVE_DISABLE               ((u32)0x00000040)
#define I2C_CON_RESTART_EN                  ((u32)0x00000020)
#define I2C_CON_SPEED_normal                ((u32)0x00000002)
#define I2C_CON_SPEED_fast                  ((u32)0x00000004)
#define I2C_CON_MASTER_MODE                 ((u32)0x00000001)

#define I2C_CON_SPEED_FF                    ((u32)0x00000006)

/*******************  Bit definition for I2C_TAR register  ********************/
#define I2C_TAR_10BITADDR_MASTER            ((u32)0x00001000)
#define I2C_TAR_SPECIAL                     ((u32)0x00000800)
#define I2C_TAR_GC_OR_START                 ((u32)0x00000400)
#define I2C_TAR_ADDR_FF                     ((u32)0x000003FF)

/*******************  Bit definition for I2C_DATA_CMD register  ***************/
#define I2C_DATA_CMD_RESTART                ((u32)0x00000400)
#define I2C_DATA_CMD_STOP                   ((u32)0x00000200)
#define I2C_DATA_CMD_READ                   ((u32)0x00000100)
#define I2C_DATA_CMD_DAT_FF                 ((u32)0x000000ff)

/*******************  Bit definition for I2C_INTR_STAT register  **************/
#define I2C_INTR_STAT_MAT_SAR               ((u32)0x00008000)
#define I2C_INTR_STAT_MST_ON_HOLD           ((u32)0x00002000)
#define I2C_INTR_STAT_RESTART_DET           ((u32)0x00001000)
#define I2C_INTR_STAT_GEN_CALL              ((u32)0x00000800)
#define I2C_INTR_STAT_START_DET             ((u32)0x00000400)
#define I2C_INTR_STAT_STOP_DE               ((u32)0x00000200)
#define I2C_INTR_STAT_ACTIVITY              ((u32)0x00000100)
#define I2C_INTR_STAT_RX_DOEN               ((u32)0x00000080)
#define I2C_INTR_STAT_TX_ABRT               ((u32)0x00000040)
#define I2C_INTR_STAT_RD_REQ                ((u32)0x00000020)
#define I2C_INTR_STAT_TX_EMPTY              ((u32)0x00000010)
#define I2C_INTR_STAT_TX_OVER               ((u32)0x00000008)
#define I2C_INTR_STAT_RX_FULL               ((u32)0x00000004)
#define I2C_INTR_STAT_RX_OVER               ((u32)0x00000002)
#define I2C_INTR_STAT_RX_UNDER              ((u32)0x00000001)

/*******************  Bit definition for I2C_INTR_MASK register  **************/
#define I2C_INTR_MASK_MST_ON_HOLD           ((u32)0x00002000)
#define I2C_INTR_MASK_RESTART_DET           ((u32)0x00001000)
#define I2C_INTR_MASK_GEN_CALL              ((u32)0x00000800)
#define I2C_INTR_MASK_START_DET             ((u32)0x00000400)
#define I2C_INTR_MASK_STOP_DET              ((u32)0x00000200)
#define I2C_INTR_MASK_ACTIVITY              ((u32)0x00000100)
#define I2C_INTR_MASK_RX_DOEN               ((u32)0x00000080)
#define I2C_INTR_MASK_TX_ABRT               ((u32)0x00000040)
#define I2C_INTR_MASK_RD_REQ                ((u32)0x00000020)
#define I2C_INTR_MASK_TX_EMPTY              ((u32)0x00000010)
#define I2C_INTR_MASK_TX_OVER               ((u32)0x00000008)
#define I2C_INTR_MASK_RX_FULL               ((u32)0x00000004)
#define I2C_INTR_MASK_RX_OVER               ((u32)0x00000002)
#define I2C_INTR_MASK_RX_UNDER              ((u32)0x00000001)
#define I2C_INTR_MASK_ALL                   ((u32)0x00003fff)

/*******************  Bit definition for I2C_ENABLE register  *****************/
#define I2C_ENABLE_ABROT                    ((u32)0x00000002)
#define I2C_ENABLE_ENABLE                   ((u32)0x00000001)

/*******************  Bit definition for I2C_STATUS register  *****************/
#define I2C_STATUS_SLV_ACTIVITY             ((u32)0x00000040)
#define I2C_STATUS_MST_ACTIVITY             ((u32)0x00000020)
#define I2C_STATUS_RFF                      ((u32)0x00000010)
#define I2C_STATUS_RFNE                     ((u32)0x00000008)
#define I2C_STATUS_TFF                      ((u32)0x00000004)
#define I2C_STATUS_TFNE                     ((u32)0x00000002)
#define I2C_STATUS_ACTIVITY                 ((u32)0x00000001)

/*******************  Bit definition for I2C_SDA_HOLD register  ***************/
#define I2C_I2C_SDA_HOLD_TX_LSB             ((u32)0x00000000)
#define I2C_I2C_SDA_HOLD_TX_FF              ((u32)0x000000FF)
#define I2C_I2C_SDA_HOLD_RX_LSB             ((u32)0x00000010)
#define I2C_I2C_SDA_HOLD_RX_FF              ((u32)0x0000000F)

/*******************  Bit definition for I2C_TX_ABRT_SOURCE register  *********/
#define I2C_TX_ABRT_SOURCE_TX_FLUSH_CNT_LSB ((u32)0x00000018)
#define I2C_TX_ABRT_SOURCE_TX_FLUSH_CNT     ((u32)0xFF000000)
#define I2C_TX_ABRT_SOURCE_USER_ABRT        ((u32)0x00010000)
#define I2C_TX_ABRT_SOURCE_SLVRD_INTX       ((u32)0x00008000)
#define I2C_TX_ABRT_SOURCE_SLV_ARBLOST      ((u32)0x00004000)
#define I2C_TX_ABRT_SOURCE_SLVFLUSH_TXFIFO  ((u32)0x00002000)
#define I2C_TX_ABRT_SOURCE_LOST             ((u32)0x00001000)
#define I2C_TX_ABRT_SOURCE_MASTER_DIS       ((u32)0x00000800)
#define I2C_TX_ABRT_SOURCE_10B_RD_NORSTRT   ((u32)0x00000400)
#define I2C_TX_ABRT_SOURCE_SBYTE_NORSTRT    ((u32)0x00000200)
#define I2C_TX_ABRT_SOURCE_HS_NORSTRT       ((u32)0x00000100)
#define I2C_TX_ABRT_SOURCE_SBYTE_ACKDET     ((u32)0x00000080)
#define I2C_TX_ABRT_SOURCE_HS_ACKDET        ((u32)0x00000040)
#define I2C_TX_ABRT_SOURCE_GCALL_READ       ((u32)0x00000020)
#define I2C_TX_ABRT_SOURCE_GCALL_NOACK      ((u32)0x00000010)
#define I2C_TX_ABRT_SOURCE_TXDATA_NOACK     ((u32)0x00000008)
#define I2C_TX_ABRT_SOURCE_10ADDR2_NOACK    ((u32)0x00000004)
#define I2C_TX_ABRT_SOURCE_10ADDR1_NOACK    ((u32)0x00000002)
#define I2C_TX_ABRT_SOURCE_7B_ADDR_NOACK    ((u32)0x00000001)

/*******************  Bit definition for I2C_ENABLE_STATUS register  **********/
#define I2C_ENABLE_STATUS_SLV_RX_DATA_LOST          ((u8)0x04)
#define I2C_ENABLE_STATUS_SLV_DISABLED_BUSY         ((u8)0x02)
#define I2C_ENABLE_EN                               ((u8)0x01)



/**
  * @brief  I2C Init structure definition
  */
typedef struct
{
	u32 I2C_Mode;                   /*!< Specifies the I2C mode.
                                       This parameter can be a value of @ref I2C_mode */
	u16 I2C_Addr;                   /*!< Specifies the I2C address.
                                       This parameter can be a 7-bit address but not 0x00 to 0x07 and 0x78 to 0x7f*/
	u8  I2C_MST_Mode;               /*!< Specifies the way of I2C net to slave I2C.
                                       This parameter select target address is SendAddr if I2C_MST_Mode is 0
                                       or else select broadcast if I2C_MST_Mode is 1*/
    u8  I2C_speed_Mode;             /*!< Specifies the I2C speed mode.
                                       This parameter select frequency, can be a value of @ref I2C_speed_Mode */
    u32 I2C_SCL_CNT;                /*!< Specifies the I2C speed.
                                       This parameter set the speed, can be a number between 6 and 65525 */
}I2C_InitTypeDef;

#define I2C_Mode_Slave              ((u8)0x01)
#define I2C_Mode_Master             ((u8)0x02)
#define IS_I2C_Mode(mode)           (((mode) == I2C_Mode_Slave) || ((mode) == I2C_Mode_Master))

#define I2C_speed_Mode_normal       I2C_CON_SPEED_normal
#define I2C_speed_Mode_fast         I2C_CON_SPEED_fast
#define IS_I2C_speed_Mode(speed)    (((speed) == I2C_speed_Mode_normal) || ((speed) == I2C_speed_Mode_fast))

#define I2C_MST_Mode_Addr           ((u8)0x01)
#define I2C_MST_Mode_BRC            ((u8)0x02)
#define IS_I2C_MST_Mode(MST)        (((MST) == I2C_MST_Mode_Addr) || ((MST) == I2C_MST_Mode_BRC))

#define IS_I2C_Addr(addr)           ((((addr)>0x08)&&((addr)<0x78))||((addr)>0x7f))
#define IS_I2C_SCL_CNT(cnt)         (((cnt)>=5)&&((cnt)<=65525))

/**
  * @brief  I2C_Cmd return data
  */
#define SLV_RX_DATA_LOST            I2C_ENABLE_STATUS_SLV_RX_DATA_LOST
#define SLV_DISABLED_WHILE_BUSY     I2C_ENABLE_STATUS_SLV_DISABLED_BUSY

/**
  * @brief  I2C interrupt config
  */
#define I2C_IT_MST_ON_HOLD          I2C_INTR_MASK_MST_ON_HOLD
#define I2C_IT_RESTART_DET          I2C_INTR_MASK_RESTART_DET
#define I2C_IT_GEN_CALL             I2C_INTR_MASK_GEN_CALL
#define I2C_IT_START_DET            I2C_INTR_MASK_START_DET
#define I2C_IT_STOP_DET             I2C_INTR_MASK_STOP_DET
#define I2C_IT_STOP_AdrOk_DET       (I2C_INTR_MASK_STOP_DET|0x00004000)
#define I2C_IT_ACTIVITY             I2C_INTR_MASK_ACTIVITY
#define I2C_IT_RX_DOEN              I2C_INTR_MASK_RX_DOEN
#define I2C_IT_TX_ABRT              I2C_INTR_MASK_TX_ABRT
#define I2C_IT_RD_REQ               I2C_INTR_MASK_RD_REQ
#define I2C_IT_TX_EMPTY             I2C_INTR_MASK_TX_EMPTY
#define I2C_IT_TX_CTRL_EMPTY        (I2C_INTR_MASK_TX_EMPTY|0x00008000)
#define I2C_IT_TX_OVER              I2C_INTR_MASK_TX_OVER
#define I2C_IT_RX_FULL              I2C_INTR_MASK_RX_FULL
#define I2C_IT_RX_OVER              I2C_INTR_MASK_RX_OVER
#define I2C_IT_RX_UNDER             I2C_INTR_MASK_RX_UNDER
#define I2C_IT_ALL                  I2C_INTR_MASK_ALL

#define IS_I2C_IT(IT)               ((((IT) & I2C_IT_ALL) != 0))

/**
  * @brief  I2C interrupt STATUS
  */
#define I2C_ITStatus_MAT_SAR        I2C_INTR_STAT_MAT_SAR
#define I2C_ITStatus_MST_ON_HOLD    I2C_INTR_STAT_MST_ON_HOLD
#define I2C_ITStatus_RESTART_DET    I2C_INTR_STAT_RESTART_DET
#define I2C_ITStatus_GEN_CALL       I2C_INTR_STAT_GEN_CALL
#define I2C_ITStatus_START_DET      I2C_INTR_STAT_START_DET
#define I2C_ITStatus_STOP_DET       I2C_INTR_STAT_STOP_DE
#define I2C_ITStatus_ACTIVITY       I2C_INTR_STAT_ACTIVITY
#define I2C_ITStatus_RX_DOEN        I2C_INTR_STAT_RX_DOEN
#define I2C_ITStatus_TX_ABRT        I2C_INTR_STAT_TX_ABRT
#define I2C_ITStatus_RD_REQ         I2C_INTR_STAT_RD_REQ
#define I2C_ITStatus_TX_EMPTY       I2C_INTR_STAT_TX_EMPTY
#define I2C_ITStatus_TX_OVER        I2C_INTR_STAT_TX_OVER
#define I2C_ITStatus_RX_FULL        I2C_INTR_STAT_RX_FULL
#define I2C_ITStatus_RX_OVER        I2C_INTR_STAT_RX_OVER
#define I2C_ITStatus_RX_UNDER       I2C_INTR_STAT_RX_UNDER

#define IS_I2C_GET_IT(ITStatus)   (((ITStatus) == I2C_ITStatus_MAT_SAR)     || ((ITStatus) == I2C_ITStatus_MST_ON_HOLD) || \
                                   ((ITStatus) == I2C_ITStatus_RESTART_DET) || ((ITStatus) == I2C_ITStatus_GEN_CALL)    || \
                                   ((ITStatus) == I2C_ITStatus_START_DET)   || ((ITStatus) == I2C_ITStatus_STOP_DET)    || \
                                   ((ITStatus) == I2C_ITStatus_ACTIVITY)    || ((ITStatus) == I2C_ITStatus_RX_DOEN)     || \
                                   ((ITStatus) == I2C_ITStatus_TX_ABRT)     || ((ITStatus) == I2C_ITStatus_RD_REQ)      || \
                                   ((ITStatus) == I2C_ITStatus_TX_EMPTY)    || ((ITStatus) == I2C_ITStatus_TX_OVER)     || \
                                   ((ITStatus) == I2C_ITStatus_RX_FULL)     || ((ITStatus) == I2C_ITStatus_RX_OVER)     || \
                                   ((ITStatus) == I2C_ITStatus_RX_UNDER))

#define I2C_Flag_SLV_ACTIVITY       I2C_STATUS_SLV_ACTIVITY
#define I2C_Flag_MST_ACTIVITY       I2C_STATUS_MST_ACTIVITY
#define I2C_Flag_RFF                I2C_STATUS_RFF
#define I2C_Flag_RFNE               I2C_STATUS_RFNE
#define I2C_Flag_TFF                I2C_STATUS_TFF
#define I2C_Flag_TFNE               I2C_STATUS_TFNE
#define I2C_Flag_ACTIVITY           I2C_STATUS_ACTIVITY

#define IS_I2C_GET_FLAG(Flag)     (((Flag) == I2C_Flag_SLV_ACTIVITY) || ((Flag) == I2C_Flag_MST_ACTIVITY) || \
                                   ((Flag) == I2C_Flag_RFF)          || ((Flag) == I2C_Flag_RFNE)         || \
                                   ((Flag) == I2C_Flag_TFF)          || ((Flag) == I2C_Flag_TFNE)         || \
                                   ((Flag) == I2C_Flag_ACTIVITY))

#define I2C_ABRT_TX_FLUSH_CNT       I2C_TX_ABRT_SOURCE_TX_FLUSH_CNT
#define I2C_ABRT_USER_ABRT          I2C_TX_ABRT_SOURCE_USER_ABRT
#define I2C_ABRT_SLVRD_INTX         I2C_TX_ABRT_SOURCE_SLVRD_INTX
#define I2C_ABRT_SLV_ARBLOST        I2C_TX_ABRT_SOURCE_SLV_ARBLOST
#define I2C_ABRT_SLVFLUSH_TXFIFO    I2C_TX_ABRT_SOURCE_SLVFLUSH_TXFIFO
#define I2C_ABRT_LOST               I2C_TX_ABRT_SOURCE_LOST
#define I2C_ABRT_MASTER_DIS         I2C_TX_ABRT_SOURCE_MASTER_DIS
#define I2C_ABRT_10B_RD_NORSTRT     I2C_TX_ABRT_SOURCE_10B_RD_NORSTRT
#define I2C_ABRT_SBYTE_NORSTRT      I2C_TX_ABRT_SOURCE_SBYTE_NORSTRT
#define I2C_ABRT_HS_NORSTRT         I2C_TX_ABRT_SOURCE_HS_NORSTRT
#define I2C_ABRT_SBYTE_ACKDET       I2C_TX_ABRT_SOURCE_SBYTE_ACKDET
#define I2C_ABRT_HS_ACKDET          I2C_TX_ABRT_SOURCE_HS_ACKDET
#define I2C_ABRT_GCALL_READ         I2C_TX_ABRT_SOURCE_GCALL_READ
#define I2C_ABRT_GCALL_NOACK        I2C_TX_ABRT_SOURCE_GCALL_NOACK
#define I2C_ABRT_TXDATA_NOACK       I2C_TX_ABRT_SOURCE_TXDATA_NOACK
#define I2C_ABRT_10ADDR2_NOACK      I2C_TX_ABRT_SOURCE_10ADDR2_NOACK
#define I2C_ABRT_10ADDR1_NOACK      I2C_TX_ABRT_SOURCE_10ADDR1_NOACK
#define I2C_ABRT_7B_ADDR_NOACK      I2C_TX_ABRT_SOURCE_7B_ADDR_NOACK

#define IS_I2C_GET_ABRTStatus(I2C_ABRT) (((I2C_ABRT) == I2C_ABRT_TX_FLUSH_CNT)    || ((I2C_ABRT) == I2C_ABRT_USER_ABRT)     || \
                                         ((I2C_ABRT) == I2C_ABRT_SLVRD_INTX)      || ((I2C_ABRT) == I2C_ABRT_SLV_ARBLOST)   || \
                                         ((I2C_ABRT) == I2C_ABRT_SLVFLUSH_TXFIFO) || ((I2C_ABRT) == I2C_ABRT_LOST)          || \
                                         ((I2C_ABRT) == I2C_ABRT_MASTER_DIS)      || ((I2C_ABRT) == I2C_ABRT_10B_RD_NORSTRT)|| \
                                         ((I2C_ABRT) == I2C_ABRT_SBYTE_NORSTRT)   || ((I2C_ABRT) == I2C_ABRT_HS_NORSTRT)    || \
                                         ((I2C_ABRT) == I2C_ABRT_SBYTE_ACKDET)    || ((I2C_ABRT) == I2C_ABRT_HS_ACKDET)     || \
                                         ((I2C_ABRT) == I2C_ABRT_GCALL_READ)      || ((I2C_ABRT) == I2C_ABRT_GCALL_NOACK)   || \
                                         ((I2C_ABRT) == I2C_ABRT_TXDATA_NOACK)    || ((I2C_ABRT) == I2C_ABRT_10ADDR2_NOACK) || \
                                         ((I2C_ABRT) == I2C_ABRT_10ADDR1_NOACK)   || ((I2C_ABRT) == I2C_ABRT_7B_ADDR_NOACK))

#define IS_I2C_TXFIFO_Level(FIFO_level) (((FIFO_level) < 8))
#define IS_I2C_RXFIFO_Level(FIFO_level) (((FIFO_level) < 8))

#define I2C_Restart_SendEverytime   I2C_DATA_CMD_RESTART
#define I2C_Restart_SendDIRChange   (~I2C_DATA_CMD_RESTART)

#define IS_I2C_RESTART_MODE(Restart)    (((Restart) == I2C_Restart_SendEverytime) || ((Restart) == I2C_Restart_SendDIRChange))

#define IS_I2C_FILTRATE_TIME(TIME)      (((TIME) > 0) && ((TIME) <= 255))

#define I2C_SDA_Type_TX_HOLD             ((u8)0x01)
#define I2C_SDA_Type_RX_HOLD             ((u8)0X02)
#define I2C_SDA_Type_SETUP               ((u8)0x03)

#define IS_I2C_SDA_Type(TYPE)       (((TYPE) == I2C_SDA_Type_TX_HOLD) || ((TYPE) == I2C_SDA_Type_RX_HOLD) || ((TYPE) == I2C_SDA_Type_SETUP))

#define IS_I2C_SDA_SETUP_TIME(TIME)     (((TIME) > 1) && ((TIME) < 256))

void I2C_DeInit(void);
void I2C_Init(I2C_InitTypeDef* I2C_InitStruct);
u8 I2C_Cmd(FunctionalState NewState);
void I2C_ITConfig(u32 I2C_IT, FunctionalState NewState);
void I2C_TargetAddr(u16 addr);
ErrorStatus I2C_MasterWriteByte(u8 Data);
ErrorStatus I2C_MasterSendMoreByte(u8 *dat, u16 num);
u8 I2C_MasterReadByte(void);
ErrorStatus I2C_MasterReadMoreByte(u8* data,u16 num);
ErrorStatus I2C_SlaveSendByte(u8 Data);
ErrorStatus I2C_SlaveSendMoreByte(u8 *dat, u16 num);
void I2C_NACKCmd(FunctionalState NewState);
u8 I2C_SlaveReadByte(void);
u8 I2C_GetTxFIFONum (void);
u8 I2C_GetRxFIFONum (void);
ITStatus I2C_GetITStatus(u32 I2C_ITStatus);
FlagStatus I2C_GetFlagStatus(u32 I2C_Flag);
FlagStatus I2C_GetTXABRTStatus(u32 I2C_ABRT);
void I2C_ClearAllITStatus(void);
void I2C_ClearITStatus(u32 I2C_ITStatus);
void I2C_SetTXFIFO(u8 FIFO_level);
void I2C_SetRXFIFO(u8 FIFO_level);
void I2C_GenerateSTART(void);
void I2C_RestartConfig(u32 I2C_Restart_Config, FunctionalState NewState);
void I2C_AbrotEnable(void);
void I2C_GENCallCmd (FunctionalState NewState);
void I2C_FiltrateTime(u8 time);
void I2C_SDAHoldTime(u8 I2C_SDA_Type,u16 HoldTime);

#endif


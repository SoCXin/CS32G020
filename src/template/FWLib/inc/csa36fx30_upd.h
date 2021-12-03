/*
 * Copyright(C)
 * By Chipsea Technology Ltd.
 * All right reserved..
 */

#ifndef __cs37FX61_UPD_H
#define __cs37FX61_UPD_H

#ifdef  __cplusplus
extern "C" {
#endif

#include "csa36fx30.h"


/*******************  Bit definition for TX_ORDSET register  ********************/
#define     UPD_TX_ORDSET_TX_ORDSET              0x000FFFFF          /* PD tx SOP ORDSET           */

/*******************  Bit definition for RX_ORDSET register  ********************/
#define     UPD_RX_ORDSET_RX_ORDSET              0x000FFFFF          /* PD rx SOP ORDSET           */

/*******************  Bit definition for RX_EX_ORDSET1 register  ********************/
#define     UPD_RX_EX_ORDSET1_RX_EX_ORDSET1      0x000FFFFF  /* PD rx extended SOP ORDSET1  */

/*******************  Bit definition for RX_EX_ORDSET2 register  ********************/
#define     UPD_RX_EX_ORDSET2_RX_EX_ORDSET2      0x000FFFFF  /* PD rx extended SOP ORDSET2  */

/*******************  Bit definition for PD_DATA register  ********************/
#define     UPD_PD_DATA_PD_DATA                  0x000000FF          /* PD data register   */
 


/**
 * @group: PD_InitTypeDef structure
 * @{ */
#define     PD_PDCTL_CLEAR_MASK             0xFC02CB60

#define     PD_PDTXHEAD_CLEAR_MASK          0x0000701F

#define     PD_PDSOP_CLEAR_MASK             0x00000007

#define     PD_PDEXTXHEAD_CLEAR_MASK        0x00000000

#define     PD_CKDIV_CLEAR_MASK             0x000000FF

#define     PD_RCKDIV_CLEAR_MASK            0x0000FF00

#define     PD_SOPDIV_CLEAR_MASK            0x00000F00

typedef struct
{
  uint8_t   PD_AUTO_RCLK     ;
  uint8_t   PD_AUTO_RETRY    ;
  uint8_t   PD_AUTO_CRC32    ;
  uint8_t   PD_AUTO_ACK_SOP2 ;
  uint8_t   PD_AUTO_ACK_SOP1 ;
  uint8_t   PD_AUTO_ACK_SOP  ;
  uint8_t   PD_AUTO_ID       ;
  uint32_t  PD_SLOW          ;
  uint32_t  PD_RxVsSel       ;
  uint32_t  PD_VSEL          ;
  uint32_t  CC_PINSEL        ;
  uint32_t  PD_FTR           ;
} PD_InitTypeDef;

typedef struct
{
  uint8_t   PDTXHD_MsgType       ;
  uint8_t   PDTXHD_DataRole      ;
  uint8_t   PDTXHD_SpecRev       ;
  uint32_t  PDTXHD_Pwr_Role      ;
  uint8_t   PDTXHD_Msg_id        ;
  uint8_t   PDTXHD_Len           ;
  uint8_t   PDTXHD_ExTd          ;
} PDTXHD_InitTypeDef;

typedef struct
{
  uint32_t  PDTXEXHD_DataSize      ;
  uint32_t  PDTXEXHD_ChunkRequest	 ;
  uint32_t  PDTXEXHD_ChunkNo    	 ;
  uint32_t  PDTXEXHD_Chunked     	 ;
} PDTXEXHD_InitTypeDef;


typedef struct
{
        uint32_t  REC_EXTD: 1;     /* USB PD tx extended msg  */
        uint32_t  RCV_LEN: 3;      /* USB PD tx data length   */
        uint32_t  RCV_MSG_ID:3;    /* USB PD tx message id    */
        uint32_t  RCV_PWRR:1;      /* USB PD tx power role    */
        uint32_t  RCV_SPEC_REV:2;  /* USB PD tx spec revision */
        uint32_t  RCV_DATR:1;      /* USB PD tx data role     */
        uint32_t  RCV_CMD:5;       /* USB PD tx command       */
} Rx_Head_t;


typedef   struct
{
        uint32_t  RCV_CHUNK:1;      /* USB PD tx chunk control bit */
        uint32_t  RCV_CNK_NUM:4;    /* USB PD tx chunk number */ 
        uint32_t  RCV_REQ_CHK:1;    /* USB PD tx chunk request/ack */
        uint32_t  RCV_DATA_SIZE:9;  /* USB PD tx chunk data size */  
} Rx_ExHead_t;



typedef   struct
{
        uint32_t  RX_MSG_ID_SOP2:3;    /*Last time received the SOP '' package information */
        uint32_t  RX_MSG_ID_SOP1:3;   /*The last SOP 'package information received ID*/
        uint32_t  RX_MSG_ID_SOP:3;    /*Receives the SOP package information ID last time */    
} Rx_MsgId_t;

typedef   struct
{
        uint32_t  TX_MSG_ID_SOP2:3;     /*Last time received the SOP '' package information */
        uint32_t  TX_MSG_ID_SOP1:3;    /*The last SOP 'package information received ID*/
        uint32_t  TX_MSG_ID_SOP:3;     /*Receives the SOP package information ID last time */    
} Tx_MsgId_t;



typedef   struct
{
  FunctionalState RXFIFO_CLR; 
  FunctionalState TXFIFO_CLR; 
  uint8_t  RXFIFO_TH;  
  uint8_t  TXFIFO_TH;  
} PD_FIFOCtrIInitTypedef;  



      /*******************  Bit definition for TX_EX_HEAD register  ********************/
#define     UPD_TX_EX_HEAD_TXD_CHUNK 	 0x00008000         
#define     UPD_TX_EX_HEAD_TXD_CNK_NUM 	 0x00007800         
#define     UPD_TX_EX_HEAD_TXD_REQ_CHK	 0x00000400         
#define     UPD_TX_EX_HEAD_TXD_DATA_SIZE 0x000001FF         



/**
 * @Brief: PD_RxVsSel
 * @{ */
#define     PD_RxVsSel_0V32                 (u32)(0x0<<21)
#define     PD_RxVsSel_0V44                 (u32)(0x1<<21)
#define     PD_RxVsSel_0V68                 (u32)(0x2<<21)
#define     PD_RxVsSel_0V80                 (u32)(0x3<<21)
#define     PD_RxVsSel_0V56                 (u32)(0x4<<21)
#define     IS_PD_RxVsSel(PD_RxVsSel) (((PD_RxVsSel) == PD_RxVsSel_0V32) || ((PD_RxVsSel) == PD_RxVsSel_0V44) || \
            ((PD_RxVsSel) == PD_RxVsSel_0V68) || ((PD_RxVsSel) == PD_RxVsSel_0V80) || ((PD_RxVsSel) == PD_RxVsSel_0V56))
/**  @} */
/**  @} */

/**
 * @Brief: PD_VSEL
 * @{ */
#define     PD_VSEL_0V90                 (u32)(0x0<<18)
#define     PD_VSEL_0V95                 (u32)(0x1<<18)
#define     PD_VSEL_1V00                 (u32)(0x2<<18)
#define     PD_VSEL_1V05                 (u32)(0x3<<18)
#define     PD_VSEL_1V10                 (u32)(0x4<<18)
#define     PD_VSEL_1V15                 (u32)(0x5<<18)
#define     PD_VSEL_1V20                 (u32)(0x6<<18)
#define     PD_VSEL_1V25                 (u32)(0x7<<18)

#define     IS_PD_VSEL(PD_VSEL) (((PD_VSEL) == PD_VSEL_0V90) || ((PD_VSEL) == PD_VSEL_0V95) || ((PD_VSEL) == PD_VSEL_1V00) || \
					  ((PD_VSEL) == PD_VSEL_1V05) || ((PD_VSEL) == PD_VSEL_1V10) || ((PD_VSEL) == PD_VSEL_1V15) || \
						((PD_VSEL) == PD_VSEL_1V20) || ((PD_VSEL) == PD_VSEL_1V25))
/**  @} */
/**  @} */


/**
 * @Brief: CC pin select
 * @{ */
#define     CC_PINSEL_CC1                0x00000000
#define     CC_PINSEL_CC2                UPD_PDCTL_CC_SEL
#define     IS_PD_PINSEL(PDPIN)         (((PDPIN) == CC_PINSEL_CC1) || ((PDPIN) == CC_PINSEL_CC2))




/**
 * @Brief: PD communication filter select
 * @{ */
#define     PD_FTR_0                     (u32)(0x0<<12)
#define     PD_FTR_1                     (u32)(0x1<<12)
#define     PD_FTR_2                     (u32)(0x2<<12)
#define     PD_FTR_3                     (u32)(0x3<<12)
#define     IS_PD_FTRSEL(PD_FTR) (((PD_FTR) == PD_FTR_0) || ((PD_FTR) == PD_FTR_1) || \
           ((PD_FTR) == PD_FTR_2) || ((PD_FTR) == PD_FTR_3))



/**
 * @Brief: PD communication edge
 * @{ */
#define     PD_SLOW_0                    (u32)(0x0<<24)
#define     PD_SLOW_1                    (u32)(0x1<<24)
#define     PD_SLOW_2                    (u32)(0x2<<24)
#define     PD_SLOW_3                    (u32)(0x3<<24)
#define     IS_PD_SLOW(PD_SLOW) (((PD_SLOW) == PD_SLOW_0) || ((PD_SLOW) == PD_SLOW_1) || \
           ((PD_SLOW) == PD_SLOW_2) || ((PD_SLOW) == PD_SLOW_3))
/**
 * @Brief: PD module define
 * @{ */
 #define     PDA                          UPD0
 #define     PDB                          UPD1
 #define     IS_PD0(PDx)   (((PDx) == PDA)
 #define     IS_PD1(PDx)   (((PDx) == PDB)
 #define     IS_PDx(PDx)   (((PDx) == PDA) || ((PDx) == PDB))

/**
 * @Brief: PD  flag  status
 * @{ */


#define        PD_FLAG_CCIDLEIF        UPD_PD_INTE_CCIDLEIF      /* USB PD CC idle interrupt flag */
#define        PD_FLAG_BISTEXIF        UPD_PD_INTE_BISTEXIF      /* BIST mode exit interrupt flag */
#define        PD_FLAG_RXBRKNIF        UPD_PD_INTE_RXBRKNIF      /* USB PD communication broken interrupt flag */
#define        PD_FLAG_RFIFOOVIF       UPD_PD_INTE_RFIFOOVIF     /* PD RX FIFO overflow interrupt flag */
#define        PD_FLAG_NO_EOP          UPD_PD_INTE_NO_EOP        /* PD RX MSG without EOP frame       */
#define        PD_FLAG_MSGID_ERR       UPD_PD_INTE_MSGID_ERR     /* PD RX MSG ID error flag         */
#define        PD_FLAG_TFIFOFIF        UPD_PD_INTE_TFIFOFIF      /* PD TX FIFO full interrupt flag */
#define        PD_FLAG_TFIFOTHIF       UPD_PD_INTE_TFIFOTHIF     /* PD TX FIFO threshold interrupt flag */
#define        PD_FLAG_TFIFOEIF        UPD_PD_INTE_TFIFOEIF      /* PD TX FIFO empty interrupt flag */
#define        PD_FLAG_TMOUTIF         UPD_PD_INTE_TMOUTIF       /* PD communication time out interrupt flag */
#define        PD_FLAG_TXIF            UPD_PD_INTE_TXIF          /* PD tx interrupt flag */
#define        PD_FLAG_RXIF            UPD_PD_INTE_RXIF          /* PD rx interrupt flag */
#define        PD_FLAG_CRCERR          UPD_PD_INTE_CRCERR        /* PD rx CRC error flag */
#define        PD_FLAG_BUSY            UPD_PD_INTE_BUSY          /* PD busy flag         */
#define        PD_FLAG_RFIFOFIF        UPD_PD_INTE_RFIFOFIF      /* PD RX FIFO full interrupt flag */
#define        PD_FLAG_RFIFOTHIF       UPD_PD_INTE_RFIFOTHIF     /* PD RX FIFO threshold interrupt flag */
#define        PD_FLAG_RFIFOEIF        UPD_PD_INTE_RFIFOEIF      /* PD RX FIFO empty interrupt flag */



#define IS_PD_CLEAR_FLAG(FLAG)(((FLAG) == PD_FLAG_CCIDLEIF  ) || \
                               ((FLAG) == PD_FLAG_BISTEXIF  ) || \
                               ((FLAG) == PD_FLAG_RXBRKNIF  ) || \
                               ((FLAG) == PD_FLAG_RFIFOOVIF ) || \
                               ((FLAG) == PD_FLAG_TFIFOFIF  ) || \
                               ((FLAG) == PD_FLAG_TFIFOTHIF ) || \
                               ((FLAG) == PD_FLAG_TFIFOEIF  ) || \
                               ((FLAG) == PD_FLAG_TMOUTIF   ) || \
                               ((FLAG) == PD_FLAG_TXIF      ) || \
                               ((FLAG) == PD_FLAG_RXIF      ) || \
                               ((FLAG) == PD_FLAG_RFIFOFIF  ) || \
                               ((FLAG) == PD_FLAG_RFIFOTHIF ) || \
                               ((FLAG) == PD_FLAG_RFIFOEIF  ) )
                               


#define IS_PD_GET_FLAG(FLAG)(  ((FLAG) == PD_FLAG_CCIDLEIF  ) || \
                               ((FLAG) == PD_FLAG_BISTEXIF  ) || \
                               ((FLAG) == PD_FLAG_RXBRKNIF  ) || \
                               ((FLAG) == PD_FLAG_RFIFOOVIF ) || \
                               ((FLAG) == PD_FLAG_NO_EOP    ) || \
                               ((FLAG) == PD_FLAG_MSGID_ERR ) || \
                               ((FLAG) == PD_FLAG_TFIFOFIF  ) || \
                               ((FLAG) == PD_FLAG_TFIFOTHIF ) || \
                               ((FLAG) == PD_FLAG_TFIFOEIF  ) || \
                               ((FLAG) == PD_FLAG_TMOUTIF   ) || \
                               ((FLAG) == PD_FLAG_TXIF      ) || \
                               ((FLAG) == PD_FLAG_RXIF      ) || \
                               ((FLAG) == PD_FLAG_CRCERR    ) || \
                               ((FLAG) == PD_FLAG_BUSY      ) || \
                               ((FLAG) == PD_FLAG_RFIFOFIF  ) || \
                               ((FLAG) == PD_FLAG_RFIFOTHIF ) || \
                               ((FLAG) == PD_FLAG_RFIFOEIF  ) )
                               





/**
 * @Brief: PD Interrupt flag
 * @{ */
#define     PD_FLAG_CCIDLEIE           PD_IT_CCIDLEIE           /* USB PD CC idle interrupt enable */
#define     PD_FLAG_BISTEXIE           PD_IT_BISTEXIE           /* BIST mode exit interrupt enable */
#define     PD_FLAG_RXBRKNIE           PD_IT_RXBRKNIE           /* USB PD communication broken interrupt enable */
#define     PD_FLAG_RFIFOOVIE          PD_IT_RFIFOOVIE          /* PD RX FIFO overflow interrupt enable */
#define     PD_FLAG_TFIFOFIE           PD_IT_TFIFOFIE           /* PD TX FIFO full interrupt enable */
#define     PD_FLAG_TFIFOTHIE          PD_IT_TFIFOTHIE          /* PD TX FIFO threshold interrupt enable */
#define     PD_FLAG_TFIFOEIE           PD_IT_TFIFOEIE           /* PD TX FIFO empty interrupt enable */
#define     PD_FLAG_TMOUTIE            PD_IT_TMOUTIE            /* PD communication time out interrupt enable */
#define     PD_FLAG_TXIE               PD_IT_TXIE               /* PD tx interrupt enable */
#define     PD_FLAG_RXIE               PD_IT_RXIE               /* PD rx interrupt enable */
#define     PD_FLAG_RFIFOFIE           PD_IT_RFIFOFIE           /* PD RX FIFO full interrupt enable */
#define     PD_FLAG_RFIFOTHIE          PD_IT_RFIFOTHIE          /* PD RX FIFO threshold interrupt enable */
#define     PD_FLAG_RFIFOEIE           PD_IT_RFIFOEIE           /* PD RX FIFO empty interrupt enable */
#define     PD_FLAG_ALLIE              PD_IT_ALLENABLE          /* PD RX FIFO empty interrupt flag */


#define IS_PDIT_FLAG(FLAG) (((FLAG) & 0x1FFFF))


#define IS_SETPDIT_FLAG(FLAG)(((FLAG) == PD_FLAG_CCIDLEIE ) || \
                        ((FLAG) == PD_FLAG_BISTEXIE  ) || \
                        ((FLAG) == PD_FLAG_RXBRKNIE  ) || \
                        ((FLAG) == PD_FLAG_RFIFOOVIE ) || \
                        ((FLAG) == PD_FLAG_TFIFOFIE  ) || \
                        ((FLAG) == PD_FLAG_TFIFOTHIE ) || \
                        ((FLAG) == PD_FLAG_TFIFOEIE  ) || \
                        ((FLAG) == PD_FLAG_TMOUTIE   ) || \
                        ((FLAG) == PD_FLAG_TXIE      ) || \
                        ((FLAG) == PD_FLAG_RXIE      ) || \
                        ((FLAG) == PD_FLAG_RFIFOFIE  ) || \
                        ((FLAG) == PD_FLAG_RFIFOTHIE ) || \
                        ((FLAG) == PD_FLAG_RFIFOEIE  ) )


#define     PD_FIFO_TFIFODOV       UPD_FIFO_STS_TFIFODOV          /* TX FIFO down overflow         */
#define     PD_FIFO_RFIFOUOV       UPD_FIFO_STS_TFIFODOV          /* RX FIFO up wn overflow        */
#define     PD_FIFO_TFIFOF         UPD_FIFO_STS_TFIFOF           /* TX FIFO full flag             */
#define     PD_FIFO_TFIFOTH        UPD_FIFO_STS_TFIFOTH          /* TX FIFO threshold            */
#define     PD_FIFO_TFIFOE         UPD_FIFO_STS_TFIFOE           /* TX FIFO empty                */
#define     PD_FIFO_RFIFOF         UPD_FIFO_STS_RFIFOF           /* RX FIFO full flag             */
#define     PD_FIFO_RFIFOTH        UPD_FIFO_STS_RFIFOTH          /* RX FIFO threshold            */
#define     PD_FIFO_RFIFOE         UPD_FIFO_STS_RFIFOE           /* RX FIFO empty                */


#define IS_PDFIFO_FLAG(FLAG)(((FLAG) == PD_FIFO_TFIFODOV  ) || \
                             ((FLAG) == PD_FIFO_RFIFOUOV  ) || \
                             ((FLAG) == PD_FIFO_TFIFOF    ) || \
                             ((FLAG) == PD_FIFO_TFIFOTH   ) || \
                             ((FLAG) == PD_FIFO_TFIFOE    ) || \
                             ((FLAG) == PD_FIFO_RFIFOF    ) || \
                             ((FLAG) == PD_FIFO_RFIFOTH   ) || \
                             ((FLAG) == PD_FIFO_RFIFOE    ) )
                            









/**
 * @Brief: Data role
 * @{ */
 #define     PD_DR_UFP               0x00000000             /* USB PD Data role :UFP           */
 #define     PD_DR_DFP               UPD_TX_HEAD_TXD_DATR    /* USB PD Data role :DFP           */
#define IS_PD_DR(DR) (  ((DR) ==  PD_DR_UFP       ) || \
                        ((DR) ==  PD_DR_DFP       ) )

/**
 * @Brief: Power role
 * @{ */
 #define     PD_PR_Sink                0x00000000              /* USB PD Power role :Sink           */
 #define     PD_PR_Source              UPD_TX_HEAD_TXD_PWRR    /* USB PD Power role :Source        */
#define IS_PD_PWR(PWR) (  ((PWR) ==  PD_PR_Sink       ) || \
                          ((PWR) ==  PD_PR_Source     ) )



 /**
 * @Brief: PD Spec revision
 * @{ */
#define     REV_1_0                      0x00000000      /* PD Revision 1.0          */
#define     REV_2_0                      0x00000040      /* PD Revision 2.0          */
#define     REV_3_0                      0x00000080      /* PD Revision 3.0          */
#define IS_PD_SPECREV(SPECREV) (  ((SPECREV) ==  REV_1_0       ) || \
                                  ((SPECREV) ==  REV_2_0       ) || \
                                  ((SPECREV) ==  REV_3_0       ) )



typedef enum PD_TXSOP
{
    SOP              = 0x01,                             /* SOP Packet          */
    SOP_i            = 0x02,                             /* SOP' Packet         */
    SOP_ii           = 0x03,                             /* SOP'' Packet        */
    Hard_Reset       = 0x04,                             /* Hard_Reset Packet   */
    Cable_Reset      = 0x05,                             /* Cable_Reset Packet  */
    SOP_i_Debug      = 0x06,                             /* SOP' Debug Packet   */
    SOP_ii_Debug     = 0x07,                             /* SOP' Debug Packet   */
}
PD_TXSOP_ENUM,Sop_t;




                                  
#define IS_TXSOP_PACKET(PACKET) ( ((PACKET) ==  SOP           ) || \
                                  ((PACKET) ==  SOP_i         ) || \
                                  ((PACKET) ==  SOP_ii        ) || \
                                  ((PACKET) ==  Hard_Reset    ) || \
                                  ((PACKET) ==  Cable_Reset   ) || \
                                  ((PACKET) ==  SOP_i_Debug   ) || \
                                  ((PACKET) ==  SOP_ii_Debug  ) )
         



typedef enum PD_DATA_MESSAGE
{
    Source_Cap       = 0x01,                             /* Source_Capabilities */
    Request          = 0x02,                             /* Requeset            */
    Bist             = 0x03,                             /* BIST                */
    Sink_Cap         = 0x04,                             /* Sink_Capabilities   */
    Battery_status   = 0x05,                             /* Battery_Status      */
    Alert            = 0x06,                             /* Alert               */
    Get_Country_info = 0x07,                             /* Get_Country_Info    */
	Vendor_Def       = 0x0f,                             /* Vendor_Defined      */
}
PD_DATA_MESSAGE_ENUM,Data_Msg_t;

#define IS_DATA_MESSAFE(MESSAGE) (((MESSAGE) == Source_Cap      ) || \
                                  ((MESSAGE) == Request         ) || \
                                  ((MESSAGE) == Bist            ) || \
                                  ((MESSAGE) == Sink_Cap        ) || \
                                  ((MESSAGE) == Battery_status  ) || \
                                  ((MESSAGE) == Alert           ) || \
                                  ((MESSAGE) == Get_Country_info) || \
                                  ((MESSAGE) == Vendor_Def      ) )


typedef enum PD_CONTROL_MESSAGE
{
    GoodCRC          = 0x01,                             /* GoodCRC                 */
    GotoMin          = 0x02,                             /* GotoMin                 */
    Accept           = 0x03,                             /* Accept                  */
    Reject           = 0x04,                             /* Reject                  */
    Ping             = 0x05,                             /* Ping                    */
    Ps_RDY           = 0x06,                             /* Ps_RDY                  */
    Get_Source_Cap   = 0x07,                             /* Get_Source_cap          */
	Get_Sink_Cap     = 0x08,                             /* Get_Sink_Cap            */
    DR_Swap          = 0x09,                             /* DR_Swap                 */
    PR_Swap          = 0x0A,                             /* PR_Swap                 */
    Vconn_Swap       = 0x0B,                             /* Vconn_Swap              */
    Wait             = 0x0C,                             /* Wait                    */
    Soft_Reset       = 0x0D,                             /* Soft_Reset              */
    Reserved_Ctrl     =0x0E,
    Not_Supported    = 0x10,                             /* Not_Supported           */
    Get_Source_Cap_Ex= 0x11,                             /* Get_Source_Cap_Extended */
	Get_Status       = 0x12,                             /* Get_Status              */
    FR_Swap          = 0x13,                             /* FR_Swap                 */
	Get_PPS_Status   = 0x14,                             /* Get_PPS_Status          */
    Get_Country_Codes= 0x15,                             /* Get_Country_Codes       */
}
PD_CONTROL_MESSAGE_ENUM,Ctrl_Msg_t;


#define IS_CONTROL_MESSAFE(MESSAGE) (((MESSAGE) == GoodCRC          ) || \
                                     ((MESSAGE) == GotoMin          ) || \
                                     ((MESSAGE) == Accept           ) || \
                                     ((MESSAGE) == Reject           ) || \
                                     ((MESSAGE) == Ping             ) || \
                                     ((MESSAGE) == Ps_RDY           ) || \
                                     ((MESSAGE) == Get_Source_Cap   ) || \
                                     ((MESSAGE) == Get_Sink_Cap     ) || \
                                     ((MESSAGE) == DR_Swap          ) || \
                                     ((MESSAGE) == PR_Swap          ) || \
                                     ((MESSAGE) == Vconn_Swap       ) || \
                                     ((MESSAGE) == Wait             ) || \
                                     ((MESSAGE) == Soft_Reset       ) || \
                                     ((MESSAGE) == Not_Supported    ) || \
                                     ((MESSAGE) == Get_Source_Cap_Ex) || \
                                     ((MESSAGE) == Get_Status       ) || \
                                     ((MESSAGE) == FR_Swap          ) || \
                                     ((MESSAGE) == Get_PPS_Status   ) || \
                                     ((MESSAGE) == Get_Country_Codes) )

typedef enum PD_EXTEND_MESSAGE
{
    Source_Cap_Ex            = 0x01,                    /* Source_Capabilities_Extended */
    Status                   = 0x02,                    /* Status                     */
    Get_Battery_Cap          = 0x03,                    /* Get_Battery_Capa           */
    Get_Battery_Status       = 0x04,                    /* Get_Battery_Status         */
    Battery_Cap              = 0x05,                    /* Battery_Capabilities       */
    Get_Mamufacture_Info     = 0x06,                    /* Get_Mamufacture_Info       */
    Mamufacture_Info         = 0x07,                    /* Mamufacture_Info           */
	Security_Request         = 0x08,                    /* Security_Request           */
    Security_Response        = 0x09,                    /* Security_Response          */
    Firmware_Update_Request  = 0x0A,                    /* Firmware_Update_Request    */
    Firmware_Update_Response = 0x0B,                    /* Firmware_Update_Response   */
    PPS_status               = 0x0C,                    /* PPS_status                 */
    Country_Info             = 0x0D,                    /* Country_Info               */
    Country_Codes            = 0x0E,                    /* Country_Codes              */
}
PD_EXTEND_MESSAGE_ENUM,Ext_Msg_t;

#define IS_EXTEND_MESSAFE(MESSAGE) ( ((MESSAGE) == Source_Cap_Ex           ) || \
                                     ((MESSAGE) == Status                  ) || \
                                     ((MESSAGE) == Get_Battery_Cap         ) || \
                                     ((MESSAGE) == Get_Battery_Status      ) || \
                                     ((MESSAGE) == Battery_Cap             ) || \
                                     ((MESSAGE) == Get_Mamufacture_Info    ) || \
                                     ((MESSAGE) == Mamufacture_Info        ) || \
                                     ((MESSAGE) == Security_Request        ) || \
                                     ((MESSAGE) == Security_Response       ) || \
                                     ((MESSAGE) == Firmware_Update_Request ) || \
                                     ((MESSAGE) == Firmware_Update_Response) || \
                                     ((MESSAGE) == PPS_status              ) || \
                                     ((MESSAGE) == Country_Info            ) || \
                                     ((MESSAGE) == Country_Codes           ) )


typedef enum PD_BIST
{
    PD_BIST_Disable              = 0x00,                             /* Disable Bist Mode */
    PD_BIST_Carrier_Mode         = 0x01,                             /* BIST Carrier Mode */
    PD_BIST_Test_Data            = 0x02,                             /* BIST Test Data    */
}
PD_BIST_ENUM,Bist_Mode;


#define IS_PD_BISTMODE(BIST) (    ((BIST) ==  PD_BIST_Disable       ) || \
                                  ((BIST) ==  PD_BIST_Carrier_Mode  ) || \
                                  ((BIST) ==  PD_BIST_Test_Data     ) )







#define  CHUNK_TS     1
#define  CHUNK_NTS    0



#define  CHUNK_Request     1
#define  CHUNK_Response    0




#define IS_PD_MSGID(MSGID)           ( ((MSGID) <= 0x7)) 
#define IS_PD_TXDLEN(LEN)            ( ((LEN) <= 0x7))
#define IS_PD_EXTD(EXTD)             (((EXTD) <= 0x1))
     
#define IS_PD_TXDCHK(CHUNK)          (((CHUNK) == CHUNK_TS) ||((CHUNK) == CHUNK_NTS))   
#define IS_PD_TXD_CNKNUM(NUM)        ((NUM) <= 0x9)
#define IS_PD_TXDREQ(REQ)            (((REQ) == CHUNK_Request) || ((REQ) == CHUNK_Response))
#define IS_PD_TXD_DATA(SIZE)         (((SIZE) <= 260))
#define IS_PD_AUTO_CRC32(TX)         (((TX) <= 0xffffffff))
     
#define IS_PD_TXORDEN(ORDEN)         (((ORDEN) <= 0x1))
#define IS_PD_TXORDSET(ORDSET)       (((ORDSET) <= 0xFFFFF))

#define IS_PD_SOFEX1(SOPEX1)         (((SOPEX1) <= 0x1))
#define IS_PD_TXORDSET1(EXORDSET1)   (((EXORDSET1) <= 0xFFFFF))

#define IS_PD_SOFEX2(SOPEX2)         (((SOPEX2) <= 0x1))
#define IS_PD_TXORDSET2(EXORDSET2)   (((EXORDSET2) <= 0xFFFFF))



#define IS_PD_RXFIFO_TH(TH)   (((TH) <= 0x1F))
#define IS_PD_TXFIFO_TH(TH)   (((TH) <= 0x1F))

#define IS_PD_CLKDIV(DIV)            (((DIV) <= 0xFF))



void PD_DeInit(UPD_TypeDef *PDx);

void PD_Init(UPD_TypeDef *PDx,PD_InitTypeDef *PD_InitStruct);

void PD_StructInit(PD_InitTypeDef *PD_InitStruct);

void PD_Cmd(UPD_TypeDef *PDx, FunctionalState NewState);

void PD_ITConfig(UPD_TypeDef *PDx,uint32_t PD_IT,FunctionalState NewState);

ITStatus PD_GetITStatus (UPD_TypeDef  * PDx, uint32_t PD_IT);

void PD_TXHDInit(UPD_TypeDef *PDx,PDTXHD_InitTypeDef* PDTXHD_InitStruct);

void PD_TXHDStructInit(PDTXHD_InitTypeDef* PDTXHD_InitStruct);

void PD_TXEXHDInit(UPD_TypeDef *PDx,PDTXEXHD_InitTypeDef* PDTXEXHD_InitStruct);

void PD_TXEXHDStructInit(PDTXEXHD_InitTypeDef* PDTXEXHD_InitStruct);

void PD_RST(UPD_TypeDef* PDx, FunctionalState NewState);

void PD_ProtSendDataMsg(UPD_TypeDef *PDx,Sop_t Sop,Data_Msg_t Data_Message, uint8_t Msg_Count, uint8_t *Dobj);

void PD_ProtSendCtrlMsg(UPD_TypeDef *PDx,Sop_t Sop,Ctrl_Msg_t Ctr_Message);

void PD_TxChunkData(UPD_TypeDef *PDx,Sop_t Sop,Ext_Msg_t Ext_Message, uint8_t Msg_Count, uint8_t *Dobj);

void PD_TxNoChunkData(UPD_TypeDef *PDx,Sop_t Sop,Ext_Msg_t Ext_Message, uint16_t Data_Size, uint8_t *Dobj);

void PD_SoftCtrlCmd(UPD_TypeDef *PDx, FunctionalState NewState);

void PD_ProtReceiveRxHead(UPD_TypeDef *PDx,Rx_Head_t *Rx_HeadReg);

void PD_ProtReceiveRxExHead(UPD_TypeDef *PDx, Rx_ExHead_t *Rx_ExHeadReg);

uint32_t PD_ProtReceiveRxCRC32 (UPD_TypeDef *PDx);

void PD_ProtReceiveTxCRC32 (UPD_TypeDef *PDx,uint32_t Tx_CRC32Data,FunctionalState Auto_Crc32);

void PD_ProtReceiveRxMsgId (UPD_TypeDef  * PDx,Rx_MsgId_t *Rx_MsgIdReg);

void PD_ProtReceiveTxMsgId (UPD_TypeDef  * PDx,Tx_MsgId_t *Tx_MsgIdReg);

void PD_ProtReceiveTxOrdSet(UPD_TypeDef *PDx,uint8_t  TxOrdSetEn ,uint32_t Tx_OrdSet);

uint32_t PD_ProtReceiveRxOrdSet(UPD_TypeDef *PDx);

uint32_t PD_ProtReceiveRxExOrdSet1(UPD_TypeDef *PDx);

uint32_t PD_ProtReceiveRxExOrdSet2(UPD_TypeDef *PDx);

void PD_ProtSendHardReset(UPD_TypeDef * PDx);

void PD_ProtSendCableReset(UPD_TypeDef * PDx);

void PD_ProtBistModecmd (UPD_TypeDef * PDx, Bist_Mode PD_BIST);

void PD_ProtStartMsgcmd (UPD_TypeDef * PDx, FunctionalState NewState);

void PD_ClearFlag(UPD_TypeDef * PDx, uint32_t PD_CLR_FLAG);

FlagStatus PD_GetFlagStatus(UPD_TypeDef  * PDx, uint32_t PD_FLAG);

void PD_FIFOCtrlInit(UPD_TypeDef *PDx, PD_FIFOCtrIInitTypedef  *PDRXHD_InitStruct);

void PD_FIFOCtrlStructInit (PD_FIFOCtrIInitTypedef * PD_FIFOCtrlInitStruct);

ITStatus PD_GetFIFOStatus (UPD_TypeDef  *PDx, uint16_t PDFIFO_IT);

void PD_ClkDivConfig (UPD_TypeDef  *PDx,uint8_t ClkDiv);

uint8_t PD_RecClkDivValue (UPD_TypeDef * PDx);

FlagStatus PD_ReceivePdData (UPD_TypeDef *PDx,uint8_t *Pd_Recdata);

void PD_ProtTXDEXTDcmd(UPD_TypeDef *PDx, FunctionalState NewState);

void PD_TXDSOPConfig(UPD_TypeDef  *PDx,Sop_t PD_TXDSOP);

uint8_t PD_RECSOPConfig(UPD_TypeDef * PDx);

void PD_ProtTxFIFOClr (UPD_TypeDef * PDx, FunctionalState NewState);

void PD_ProtRxFIFOClr (UPD_TypeDef * PDx, FunctionalState NewState);


int Power_DownTest(void);

int PowerDeepSleep2_Test(void);


#ifdef  __cplusplus
}
#endif
#endif

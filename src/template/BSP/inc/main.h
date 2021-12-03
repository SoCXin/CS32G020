#ifndef __MAIN_H
#define __MAIN_H

#define	B_Time_1ms									R_Time_Flag.b00
#define	B_DFP_Done									R_Time_Flag.b01
#define	B_UFP_Done									R_Time_Flag.b02

typedef struct 
{
    unsigned char	b00:1;
    unsigned char	b01:1;
    unsigned char	b02:1;
    unsigned char	b03:1;
    unsigned char	b04:1;
    unsigned char	b05:1;
    unsigned char	b06:1;
    unsigned char	b07:1;
} IsrFlag_Char;


typedef struct 
{
    unsigned long	b00:1;
    unsigned long	b01:1;
    unsigned long	b02:1;
    unsigned long	b03:1;
    unsigned long	b04:1;
    unsigned long	b05:1;
    unsigned long	b06:1;
    unsigned long	b07:1;
    unsigned long	b08:1;
    unsigned long	b09:1;
    unsigned long	b0a:1;
    unsigned long	b0b:1;
    unsigned long	b0c:1;
    unsigned long	b0d:1;
    unsigned long	b0e:1;
    unsigned long	b0f:1;
    unsigned long	b10:1;
    unsigned long	b11:1;
    unsigned long	b12:1;
    unsigned long	b13:1;
    unsigned long	b14:1;
    unsigned long	b15:1;
    unsigned long	b16:1;
    unsigned long	b17:1;
    unsigned long	b18:1;
    unsigned long	b19:1;
    unsigned long	b1a:1;
    unsigned long	b1b:1;
    unsigned long	b1c:1;
    unsigned long	b1d:1;
    unsigned long	b1e:1;
    unsigned long	b1f:1;
} IsrFlag_Long;

extern volatile IsrFlag_Char  	R_Time_Flag;

void F_TypeC_Attached_SRC_Deal(void);
void F_TypeC_NoDetect_Deal(void);
void F_TypeC_Attached_SNK_Deal(void);
void F_TypeC_Hard_Reset_Deal(void);
void BSP_VbusDisc_Deal(void);
void BSP_VbusDisc_DealEnd(void);


//===============================================
//¼Ä´æÆ÷¶¨Òå
//===============================================
typedef union{
	uint8_t Time;
	struct{
		uint8_t FirstOnMode2:	1;
		uint8_t First1S_OK:		1;
		uint8_t Error_En:		1;

		
	}Bits;
}TypeOfTimeFlag;

extern TypeOfTimeFlag TimeFlag;


typedef union{
	uint8_t State;
	struct{
		uint8_t OutPut_Reset:	1;
		uint8_t QCBoost_EN:		1;
		uint8_t CC_EN:			1;
		uint8_t Head_Reset:		1;
		uint8_t DiscOutVol:		1;
		uint8_t Sleep_Enter:	1;
		
	}Bits;
}TypeOfStateFlag;

extern TypeOfStateFlag StateFlag;



extern uint8_t R_MainBranch,R_100msBranch,R_1sBranch;
extern uint8_t R_SC8812AInt_Status;
extern uint8_t R_Error_Time;

extern uint16_t R_VbusVol_Value,R_VbatVol_Value,R_IbusCur_Value,R_IbatCur_Value;

#endif


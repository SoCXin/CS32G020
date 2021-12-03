#ifndef PD_Send_XXXX
#define PD_Send_XXXX
#include "stdint.h"


#define	PDx											PDB	

#define	C_REV_1_0									0	
#define	C_REV_2_0									1	
#define	C_REV_3_0									2	

#define	C_Fix										0	
#define	C_APDO										3

//=================================================
//PD策略层通信步骤
#define	C_Source_Cap_5V_Step						0x0001		
#define	C_Disclidentity_Step						0x0002		
#define	C_Source_Cap_Step							0x0003		
#define	C_Read_Dr_Swap_Step							0x0004
#define	C_Send_Dr_Swap_Step							0x0005
#define	C_Read_Source_Cap_Step 						0x0006
#define	C_Read_Pr_Swap_Step		 					0x0007
#define	C_Send_Pr_Swap_Step			 				0x0008
#define	C_QC4_0_PPS_Step				 			0x0009
#define	C_PD3_0_PPS_Step							0x000A
#define	C_Read_SoftRet_Step			 				0x000B
#define	C_Send_Sink_Cap_Step						0x000C
#define	C_Read_VCONN_Swap_Step						0x000D

//=================================================
//PD策略层发送内容
#define	C_Send_Source_Cap_5V						0x0001		
#define	C_Send_Disclidentity						0x0002		
#define	C_Send_Source_Cap							0x0003	
#define	C_Send_Request								0x0004
#define	C_Send_Accept								0x0005
#define	C_Send_Reject								0x0006
#define	C_Send_PSReady								0x0007
#define	C_Send_Dr_Swap				 				0x0008
#define	C_Send_Pr_Swap								0x0009
#define	C_Send_Alert						 		0x000A
#define	C_Send_Status		 						0x000B
#define	C_Send_PPS_Status							0x000C
#define	C_Send_QC4_0_VDM							0x000D
#define	C_Send_Sink_Cap								0x000E
//#define	C_Send_Source_Cap_Extended					0x000E

//=================================================
//PD发送时间控制常数
#define	C_Send_Source_Cap_Time						100		
#define	C_Send_PSReady_Time							200		
#define	C_Send_Disclidentity_Time					100	
#define	C_Source_PR_Send_PSReady_Time				600	

//=================================================
//QC4.0+常数
#define	ACK											0xA0
#define	NACK										0x50

//=================================================
//包头常数
#define	C_Sop										0x01
#define	C_Sop_1										0x02
#define	C_Sop_2										0x03
#define	C_Hard_Reset								0x04
#define	C_Cable_Reset								0x05
#define	C_Sop_1_Debug								0x06
#define	C_Sop_2_Debug								0x07

//=================================================
//PD控制命令查表常数
#define	C_GoodCRC									0x01
#define	C_GotoMin									0x02
#define	C_Accept									0x03
#define	C_Reject									0x04
#define	C_Ping										0x05
#define	C_Ps_RDY									0x06
#define	C_GetSourecap								0x07
#define	C_GetSnkcap									0x08
#define	C_DR_Swap    								0x09
#define	C_PR_Swap									0x0a
#define	C_Vconn_Swap								0x0b
#define	C_Wait										0x0c
#define	C_Soft_Reset								0x0d

#define	C_Not_Supported								0x10
#define	C_Get_Source_Cap_Extended					0x11
#define	C_Get_Status								0x12
#define	C_FR_Swap									0x13
#define	C_Get_PPS_Status							0x14
#define	C_Get_Country_Codes							0x15
									
#define	C_Source_Cap								0x01
#define	C_Request									0x02
#define	C_Bist										0x03
#define	C_Sink_Cap									0x04
#define	C_Battery_Status							0x05
#define	C_Alert										0x06
#define	C_Get_Country_Info							0x07
#define	C_Vendor									0x0F

#define	C_Source_Capabilities_Extended				0x01
#define	C_Status									0x02
#define	C_Get_Battery_Cap							0x03
#define	C_Get_Battery_Status						0x04
#define	C_Battery_Capabilities						0x05
#define	C_Get_Manufacturer_Info						0x06
#define	C_Manufacturer_Info							0x07
#define	C_Security_Request							0x08
#define	C_Security_Response							0x09
#define	C_Firmware_Update_Request					0x0A
#define	C_Firmware_Update_Response					0x0B
#define	C_PPS_Status								0x0C
#define	C_Country_Info								0x0D
#define	C_Country_Codes								0x0E


//=================================================
//PD时间控制常数
#define	C_tSenderRespone							30		//30ms		标准：24s--30ms		source端计时
#define C_SrcTransition_Time						30		//25ms		标准：25ms--35ms

#define	C_tPSTransition								550		//550ms		标准：450ms--550ms
#define	C_tPSSourceOff								920		//920ms		标准：750ms--920ms
#define	C_tPSSourceOn	 							480		//480ms		标准：390ms--480ms

#define	C_tPSHardReset								60		//25ms		标准：25ms--35ms
#define	C_tSnkhardRestPrepare						15		//15ms		标准：0--15ms
#define	C_tSafe0V									650		//650ms		标准：0--650ms
#define	C_tSrcRecover								800		//800ms   	标准：0.66s--1s
#define	C_SrcTurnOn									275		//275ms		标准：0--275ms

#define	C_tPPSRequest								10000  	//10s		标准：0--10s  sink端计时
#define	C_tPPSTimeout								15000  	//15s		标准：0--15s  source端计时
#define	C_tPpsSrcTransition							0  		//0s		标准：0--25ms

#define	C_tDRSwapWait								100		//100ms		标准：100ms--XX
#define	C_tSinkRequest								100		//100ms		标准：100ms--XX

#define	C_tVCONNSourceOn							100		//100ms		标准：0--100ms

#define	C_nSoftResetCount							2			
#define	C_nhardResetCount							2			
#define	C_nCapsCount								50		
#define	C_nDisclidentityCount						20

#define	C_tPRswap									60		//25ms		标准：25ms--35ms

//=================================================
//PD相关的标志位
#define	B_Pd_Rxif									R_PD_Flag.b00
#define	B_SrcTransition_En							R_PD_Flag.b01
#define	B_SenderResponse_Judge_En					R_PD_Flag.b02
#define	B_Wait_Retry_Seng_En						R_PD_Flag.b03
#define	B_HardReset_En								R_PD_Flag.b04


#define	B_Spec_Rev_3_0								R_PD_Flag.b05
#define	B_Spec_Rev_Done								R_PD_Flag.b06
#define	B_Emaker_Spec_Rev_2_0_Done					R_PD_Flag.b07
#define	B_Emaker_Spec_Rev_Done						R_PD_Flag.b08

#define	B_Read_PRswap_En							R_PD_Flag.b09		//为了执行一次
//#define	B_Source_Read_PRswap						R_PD_Flag.b09
//#define	B_Sink_Read_PRswap							R_PD_Flag.b0a


typedef struct{
	uint8_t	  B_Accept_PRSwap:1;				//1:接收电源角色交换 0:不接受电源角色交换
	uint8_t	  B_Accept_DRSwap:1;				//1:接收数据角色交换 0:不接受数据角色交换
	uint8_t   B_Active_Send_PRSwap:1;			//1:主动电源角色交换 0:不主动电源角色交换
	uint8_t   B_Active_Send_DRSwap:1;			//1:主动数据角色交换 0:不主动数据角色交换
	uint8_t   Upper_Source_Cap_Count;
	uint8_t   Upper_Sink_Cap_Count;
	uint8_t   Upper_PPS_PDO_Place;
    uint32_t  Upper_Source_Cap[7];
	uint32_t  Upper_Sink_Cap[7];
	uint8_t   Upper_Source_Cap_Extended[24];
	uint8_t   Upper_Status_Message[5];
	uint8_t   Upper_Battery_Cap_Message[9];		
	
}PD_Parameter_Def;

typedef struct{
	uint8_t	  B_Break_Off_Step:1;				//1:断开连接 0:不断开连接
	uint8_t   B_Emaker_5A:1;					
	uint8_t   B_PPS_APDO:1;						//1:PPS 0:非PPS
	
	uint8_t	  B_Sink_Read_Hard:1;
	uint8_t	  B_Source_Read_Hard:1;	

	uint8_t	  B_PR_Swap_En:1;					//检测到该位为1，TYPE-C不检测
	uint8_t	  B_Source_Read_PR_Swap:1;			//检测到该位为1，系统关闭输出并泄放
	uint8_t	  B_Sink_Read_PR_Swap:1;			//检测到该位为1，系统开启输出5V
	
	uint8_t   R_Request_Num:3;					//对方选择的PDO 档位
	uint8_t   R_Source_Cap_Choose_Num:3;		//作为Sink时候选择的PDO 档位
	uint16_t  R_Source_Cap_Cur_Capacity:10;		//对方Source 的电流能力
	uint16_t  R_PPS_Request_Volt:10;			//对方Request_PPS电压  20mv
	uint8_t   R_PPS_Request_Cur:7;				//对方Request_PPS电流  50mA
	uint8_t   R_Source_Cap_PPS_Num:3;			//对方Source 的PPS PDO 的位置
}PD_Result_Def;


//=================================================
//PD 收发相关变量
extern	volatile uint16_t	R_Strategic_layer_Step;
extern	volatile uint16_t	R_Strategic_layer_Send;

extern	volatile uint16_t	R_Send_Delay_Time; 
extern	volatile uint8_t   	R_PD_Wait_Retry_Send_Time;
extern	volatile uint16_t  	R_tSenderResponse;
extern  volatile uint8_t   	R_PD_SrcTransition_Time;

extern  volatile uint8_t   R_Sink_Request;

extern	volatile uint8_t   	R_nCapsCount;
extern	volatile uint8_t   	R_nDisclidentityCount;

extern	volatile uint16_t  	R_tHardReset;
extern  volatile uint8_t	R_tPRswap;
extern	volatile uint16_t   R_tPPSRequest;



//=================================================
//标志位结构体定义
extern IsrFlag_Long				R_PD_Flag;
extern PD_InitTypeDef			PD_InitStructure;
extern PDTXHD_InitTypeDef  		PDTXHD_InitStructure;
extern PD_FIFOCtrIInitTypedef 	PDFIFOCtrl_InitStructure;
extern PDTXEXHD_InitTypeDef  	PDTXEXHD_InitStructure;

//=================================================
//PD 收发函数
void 	F_PD_Send(PD_Parameter_Def* PD_Parameter_transmit);
void    F_PD_Read(PD_Parameter_Def* PD_Parameter_transmit,PD_Result_Def* PD_Result_transmit);
void 	F_Hard_Reset(PD_Result_Def* PD_Result_transmit);
void 	F_Strategy_Reset(void);
void  	F_PDInit(void);

#endif

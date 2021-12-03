#ifndef TypeC_XXXX
#define TypeC_XXXX
#include "stdint.h"


#define	K_Uart	0	

#define TypeCx TypeCB

//=================================================
//TypeC 模式常数
#define	C_Unattached_SNK							0x01
#define	C_Unattached_SRC							0x02
#define	C_AttachWait_SNK							0x03
#define	C_AttachWait_SRC							0x04
#define	C_Try_SRC									0x05
#define	C_TryWait_SNK								0x06
#define	C_Attached_SNK								0x07
#define	C_Attached_SRC								0x08


//=================================================
//TypeC 接口识别时间常数
#define	C_tCCDebounce 								170		//170ms			
#define	C_tCCWait	 								10		//10ms		临时连接时间
#define	C_tDRPTry	 								150  	//150ms		
#define	C_tTypeC_NoDetect							250	    //250ms		
#define	C_tPDDebounce 								15	    //15ms		


//=================================================
//TypeC 接口检测结果常数
#define	C_TypeC_NoDetect							0x00
#define	C_TypeC_Rd_No								0x01
#define	C_TypeC_Rd_Ra								0x02
#define	C_TypeC_Ra_No								0x03
#define	C_TypeC_Ra_Rd								0x04
#define	C_TypeC_No_Rd								0x05
#define	C_TypeC_No_Ra								0x06
#define	C_TypeC_Not_Use								0x07
#define	C_TypeC_Rd_Rd								0x08
#define	C_TypeC_Ra_Ra								0x09

#define	C_TypeC_NoDetect							0x00					
#define	C_TypeC_3A_No								0x01
#define	C_TypeC_1_5A_No								0x02
#define	C_TypeC_0_9A_No								0x03
#define	C_TypeC_No_3A								0x04
#define	C_TypeC_No_1_5A								0x05
#define	C_TypeC_No_0_9A								0x06
#define	C_TypeC_Not_Use								0x07
#define	C_TypeC_3A_3A								0x08
#define	C_TypeC_1_5A_1_5A							0x09
#define	C_TypeC_0_9A_0_9A							0x0a

//=================================================
//TypeC 接口电流模式常数
#define	C_TypeC_Cur_3A								0x01
#define	C_TypeC_Cur_1_5A							0x02
#define	C_TypeC_Cur_0_9A							0x03

//=================================================
//TypeC 接口角色参数
#define	TypeC_UFP									0x01
#define	TypeC_DFP									0x02
#define	TypeC_DRP									0x03
#define	TypeC_TryDRP								0x04



typedef struct{
	uint8_t	  TypeC_Emarker_In:1;
	uint8_t   R_TypeC_Cur_Mode:3;
	uint8_t   R_TypeC_Mode;

}TypeC_Result_Def;


void F_TypeCInit(uint8_t TypeC_Rp_Mode,uint8_t TypeC_Role_Mode,TypeC_Result_Def* TypeC_Structure);
void F_TypeC_Detect(uint8_t TypeC_Rp_Mode,uint8_t TypeC_Role_Mode,TypeC_Result_Def* TypeC_Mode);
void F_TypeC_Sleep_Deal(void);

#endif





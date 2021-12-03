#include "global_define.h"

//用户选项
const uint32_t CONFIG0 __at(0x00300000) = 0x0E00F1FF; 		//24M
const uint32_t CONFIG1 __at(0x00300004) = 0x0040FFBF;		//有IAP功能
const uint32_t CONFIG2 __at(0x00300008) = 0x1FFFE000;  
const uint32_t CONFIG3 __at(0x0030000c) = 0x0000FFFF;

uint8_t MainBranch;

volatile IsrFlag_Char R_Time_Flag;

TypeC_Result_Def  TypeC_Mode_Structure;
PD_Parameter_Def PD_Parameter_Structure;
PD_Result_Def PD_Result_Structure;

int main(void){

	while(1){

	}
}


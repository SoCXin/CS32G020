#ifndef PD_It_XXXX
#define PD_It_XXXX
#include "stdint.h"


void 	F_PD_IT_TMOUTIE(void);
void 	F_PD_IT_TXIE(PD_Parameter_Def* PD_Structure,PD_Result_Def* PD_Result_transmit);
void 	F_PD_IT_SysTick(PD_Result_Def* PD_Result_transmit);


#endif

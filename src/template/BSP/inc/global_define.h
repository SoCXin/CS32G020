#include "csa36fx30.h"
#include "csa36fx30_acmp.h"
#include "csa36fx30_adc.h"

#include "csa36fx30_dac.h"





#include "csa36fx30_fsmc.h"
#include "csa36fx30_gpio.h"
#include "csa36fx30_hdiv.h"
#include "csa36fx30_i2c.h"
#include "csa36fx30_iwdg.h"
#include "csa36fx30_pwr.h"
#include "csa36fx30_rcc.h"

#include "csa36fx30_spi.h"
#include "csa36fx30_syscfg.h"
#include "csa36fx30_tim.h"
#include "csa36fx30_typec.h"
#include "csa36fx30_upd.h"
#include "csa36fx30_usart.h"
#include "csa36fx30_wdg.h"
#include "csa36fx30_wwdg.h"
#include "misc.h"
#include "csa36fx30_SysTick.h"
#include "csa36fx30_nvic.h"
//#include "csa36fx30_rmc.h"
//#include "csa36fx30_rst.h"

#include "main.h"

#include "pd_read.h"
#include "pd_send.h"
#include "pd_it.h"
#include "type_c.h"




//#include "input.h"
//#include "ADConvert.h"
//#include "disp.h"
//#include "battery.h"
//#include "charge.h"
//#include "temp.h"
//#include "qc.h"
//#include "sleep.h"


extern TypeC_Result_Def  TypeC_Mode_Structure;
extern PD_Parameter_Def PD_Parameter_Structure;
extern PD_Result_Def PD_Result_Structure;

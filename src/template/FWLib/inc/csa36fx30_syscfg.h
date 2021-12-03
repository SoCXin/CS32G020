#ifndef __CAS36FX30_SYSCFG_H__
#define __CSA36FX30_SYSCFG_H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "csa36fx30.h"

/** @addtogroup SYSCFG
  * @{
  */
/* Exported types ------------------------------------------------------------*/

/*******************  Bit definition for SYSMU_QCCON register  ********************/
#define SYSMU_QCCON_DM1_OEN         ((u32)0x00800000)
#define SYSMU_QCCON_DM1_VRS_LSB     ((u32)0x00000014)
#define SYSMU_QCCON_DM1_VRS_FF      ((u32)0x00700000)
#define SYSMU_QCCON_DP1_OEN         ((u32)0x00080000)
#define SYSMU_QCCON_DP1_VRS_LSB     ((u32)0x00000010)
#define SYSMU_QCCON_DP1_VRS_FF      ((u32)0x00070000)
#define SYSMU_QCCON_DM0_OEN         ((u32)0x00008000)
#define SYSMU_QCCON_DM0_VRS_LSB     ((u32)0x0000000C)
#define SYSMU_QCCON_DM0_VRS_FF      ((u32)0x00007000)
#define SYSMU_QCCON_DP0_OEN         ((u32)0x00000800)
#define SYSMU_QCCON_DP0_VRS_LSB     ((u32)0x00000008)
#define SYSMU_QCCON_DP0_VRS_FF      ((u32)0x00000700)
#define SYSMU_QCCON_DM1RDS          ((u32)0x00000020)
#define SYSMU_QCCON_DP1RDS          ((u32)0x00000010)
#define SYSMU_QCCON_QCP1_SHORT      ((u32)0x00000008)
#define SYSMU_QCCON_DM0RDS          ((u32)0x00000004)
#define SYSMU_QCCON_DP0RDS          ((u32)0x00000002)
#define SYSMU_QCCON_QCP0_SHORT      ((u32)0x00000001)

/*******************  Bit definition for SYSMU_DBG_CR register  *******************/
#define SYSMU_DBG_CR_REGACC         ((u32)0x38A60000)
#define SYSMU_DBG_CR_REGACC_00      ((u32)0x0000FFFF)
#define SYSMU_DBG_CR_DBG_PD         ((u32)0x00000004)
#define SYSMU_DBG_CR_DBG_DSP2       ((u32)0x00000002)
#define SYSMU_DBG_CR_DBG_DSP1       ((u32)0x00000001)

/*******************  Bit definition for SYSMU_FCPCON register  *******************/
#define SYSMU_FCPCON_DM1_18         ((u32)0x00000002)
#define SYSMU_FCPCON_DM0_18         ((u32)0x00000001)

/*******************  Bit definition for SYSMU_ICSR register  *********************/
#define SYSMU_ICSR_NMIPENDSET       ((u32)0x80000000)
#define SYSMU_ICSR_PENDSVSET        ((u32)0x10000000)
#define SYSMU_ICSR_PENDSVCLR        ((u32)0x08000000)
#define SYSMU_ICSR_PENDSTSET        ((u32)0x04000000)
#define SYSMU_ICSR_PENDSTCLR        ((u32)0x02000000)
#define SYSMU_ICSR_SRPREEMPT        ((u32)0x00800000)
#define SYSMU_ICSR_ISRPENDING       ((u32)0x00400000)
#define SYSMU_ICSR_VECTPENDING_LSB  ((u32)0x0000000C)
#define SYSMU_ICSR_VECTPENDING_FF   ((u32)0x0003F000)
#define SYSMU_ICSR_VECTACTIVE_LSB   ((u32)0x00000000)
#define SYSMU_ICSR_VECTACTIVE_FF    ((u32)0x0000003F)

/*******************  Bit definition for SYSMU_AIRCR register  ********************/
#define SYSMU_AIRCR_VECTORKEY       ((u32)0x000005FA)
#define SYSMU_AIRCR_VECTORKEY_LSB   ((u32)0x00000010)
#define SYSMU_AIRCR_VECTCLKACTIVE   ((u32)0x00000004)

/*******************  Bit definition for SYSMU_SCR register  **********************/
#define SYSMU_SCR_SEVONPEND         ((u32)0x00000010)
#define SYSMU_SCR_SLEEPDEEP         ((u32)0x00000004)
#define SYSMU_SCR_SLEEPONEXIT       ((u32)0x00000002)

/*******************  Bit definition for SYSMU_SHPR2 register  ********************/
#define SYSMU_SHPR2_SVCall_LSB      ((u32)0x0000001E)

/*******************  Bit definition for SYSMU_SHPR3 register  ********************/
#define SYSMU_SHPR3_SysTick_LSB     ((u32)0x0000001E)
#define SYSMU_SHPR3_PendSV_LSB      ((u32)0x00000016)


typedef struct
{

    u8 SevonPend;               /*!<Set the interrupt trigger source to wake sleep
                                    This parameter can be any value of @ref SYS_SevonPend_define */
    u8 SleepDeep;               /*!<Set the sleep deep
                                    This parameter can be any value of @ref SYS_SleepDeep_define */
    u8 SleepONExit;             /*!<Set enter sleep mode or not while out from Handler
                                    This parameter can be any value of @ref SYS_SleepONExit_define */
}SYS_SleepConfigTypedef;


#define SYS_ID1     ((u8)0x01)
#define SYS_ID2     ((u8)0x02)

#define IS_SYSCFG_PDID(ID)  (((ID) == SYS_ID1) || ((ID) == SYS_ID2))

#define QC_DM1      ((u8)0x01)
#define QC_DM0      ((u8)0x02)
#define QC_DP1      ((u8)0x03)
#define QC_DP0      ((u8)0x04)

#define IS_SYSCFG_QC_CHANNEL(CHANNEL)   (((CHANNEL) == QC_DM1) || ((CHANNEL) == QC_DM0) || \
                                         ((CHANNEL) == QC_DP1) || ((CHANNEL) == QC_DP0))

#define QC_vref_0   ((u8)0x00)
#define QC_vref_6   ((u8)0x01)
#define QC_vref_12  ((u8)0x02)
#define QC_vref_20  ((u8)0x03)
#define QC_vref_24  ((u8)0x04)
#define QC_vref_27  ((u8)0x05)
#define QC_vref_30  ((u8)0x06)
#define QC_vref_33  ((u8)0x07)

#define IS_SYSCFG_QC_VREF(vref)         (((vref) == QC_vref_0)  || ((vref) == QC_vref_6)  || \
                                         ((vref) == QC_vref_12) || ((vref) == QC_vref_20) || \
                                         ((vref) == QC_vref_24) || ((vref) == QC_vref_27) || \
                                         ((vref) == QC_vref_30) || ((vref) == QC_vref_33))

#define QC_PullDown_GPIO        ((u8)0x01)
#define QC_PullDown_Interior    ((u8)0x02)

#define IS_SYSCFG_QC_PULLDOWN(PullDown) (((PullDown) == QC_PullDown_GPIO) || ((PullDown) == QC_PullDown_Interior))

#define QC_DMP0                 ((u8)0x01)
#define QC_DMP1                 ((u8)0x02)

#define IS_SYSCFG_QC_DMPX(QC_DMPX)      (((QC_DMPX) == QC_DMP0) || ((QC_DMPX) == QC_DMP1))

#define IS_SYSCFG_FCP_DMx(FCP_DMx)      (((FCP_DMx) == QC_DM1) || ((FCP_DMx) == QC_DM0))

#define DMx_FCP_VDDIO           ((u8)0x00)
#define DMx_FCP_1v8             ((u8)0x01)

#define IS_SYSCFG_DMX_FCP(DMx_FCP)      (((DMx_FCP) == DMx_FCP_VDDIO) || ((DMx_FCP) == DMx_FCP_1v8))

#define SystemIT_NMI            ((u8)0x01)
#define SystemIT_PendSV         ((u8)0x02)
#define SystemIT_SysTick        ((u8)0x04)

#define IS_SYSTEM_IT(SystemIT)  (((SystemIT) == SystemIT_NMI) || ((SystemIT) == SystemIT_PendSV) || \
                                 ((SystemIT) == SystemIT_SysTick))

#define SevonPend_EnableIT      ((u8)0x01)
#define SevonPend_ALLIT         ((u8)0x02)

#define IS_SYSTEM_SEVONPEND(SevonPend)  (((SevonPend) == SevonPend_EnableIT) || ((SevonPend) == SevonPend_ALLIT))

#define SleepDeep_Normal        ((u8)0x00)
#define SleepDeep_Deep1         ((u8)0x01)
#define SleepDeep_Deep2         ((u8)0x02)

#define IS_SYSTEM_SLEEPDEEP(sleep)      (((sleep) == SleepDeep_Normal) || ((sleep) == SleepDeep_Deep1) || \
                                        ((sleep) == SleepDeep_Deep2))

#define SleepONExit_Normal      ((u8)0x01)
#define SleepONExit_Sleep       ((u8)0x02)

#define IS_SYSTEM_SLEEPONEXIT(ONExit)   (((ONExit) == SleepONExit_Normal) || ((ONExit) == SleepONExit_Sleep))


#define PWRMU_PWRCON_SLP_MODE   ((u32)0x00800000)

#define PriorityIT_SVCall       ((u8)0x01)
#define PriorityIT_PendSV       ((u8)0x02)
#define PriorityIT_SysTick      ((u8)0x03)

#define IS_SYSTEM_PRIORITYIT(PriorityIT)    (((PriorityIT) == PriorityIT_SVCall) || ((PriorityIT) == PriorityIT_PendSV) || \
                                            ((PriorityIT) == PriorityIT_SysTick))

#define IS_SYSTEM_PRIORITY(NUM) (((NUM) < 4))


u32 SYS_GetPDID(u8 ID);
void SYS_QCOutCmd(u8 QC_Channel,u8 QC_vref, FunctionalState NewState);
void SYS_QCPullDownConfig(u8 QC_Channel,u8 QC_PullDown);
void SYS_DMPxShortCmd(u8 QC_DMPx, FunctionalState NewState);
void SYS_DMxFCPCmd(u8 QC_Channel,u8 DMx_FCP);
void SYS_DBGDSP2Cmd(FunctionalState NewState);
void SYS_DBGDSP1Cmd(FunctionalState NewState);
u32 SYS_GetCPUID(void);
void SYS_SystemITEnable(u8 SystemIT);
ITStatus SYS_GetSystemITFlag (u8 SystemIT);
void SYS_ClearSystemITFlag(u8 SystemIT);
FlagStatus SYS_GetSRPreemptFlag(void);
FlagStatus SYS_GetISRPendingFlag(void);
u8 SYS_GetVectPendingFlag(void);
u8 SYS_GetVectActiveFlag(void);
void SYS_ResetRequest(void);
void SYS_SleepConfig(SYS_SleepConfigTypedef* SYS_SleepConfigStruct);
void SYS_SystemITPriorityConfig(u8 PriorityIT, u8 priority);


#endif



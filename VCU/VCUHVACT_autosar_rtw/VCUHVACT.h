/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: VCUHVACT.h
 *
 * Code generated for Simulink model 'VCUHVACT'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jul 13 12:48:19 2026
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef VCUHVACT_h_
#define VCUHVACT_h_
#ifndef VCUHVACT_COMMON_INCLUDES_
#define VCUHVACT_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_VCUHVACT.h"
#endif                                 /* VCUHVACT_COMMON_INCLUDES_ */

#include "VCUHVACT_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  float64 output;                      /* '<S11>/debounce' */
  float64 output_p;                    /* '<S4>/Denounce' */
  float64 counter;                     /* '<S4>/HVStart' */
  float64 counter1;                    /* '<S11>/debounce' */
  float64 counter2;                    /* '<S11>/debounce' */
  float64 counter_i;                   /* '<S4>/ECU_HV' */
  float64 counter1_p;                  /* '<S4>/Denounce' */
  float64 counter2_p;                  /* '<S4>/Denounce' */
  uint8 write_MainNegativeRelay_Enable;/* '<S4>/HVStart' */
  uint8 write_Dcdc_Enable;             /* '<S4>/HVStart' */
  uint8 write_BmsFault_Status;         /* '<S4>/HVStart' */
  uint8 write_DcdcFault_Status;        /* '<S4>/HVStart' */
  uint8 write_MainPrechargeRelay_Enable;/* '<S4>/ECU_HV' */
  uint8 write_MainRelay_Enable;        /* '<S4>/ECU_HV' */
  uint8 write_VehicleReady_Status;     /* '<S4>/ECU_HV' */
  uint8 is_active_c10_VCUHVACT;        /* '<S4>/Switch_CAN' */
  uint8 is_c10_VCUHVACT;               /* '<S4>/Switch_CAN' */
  uint8 is_active_c9_VCUHVACT;         /* '<S4>/HVStart' */
  uint8 is_c9_VCUHVACT;                /* '<S4>/HVStart' */
  uint8 is_HV_OFFStandy;               /* '<S4>/HVStart' */
  uint8 is_HV_On;                      /* '<S4>/HVStart' */
  uint8 is_active_c7_VCUHVACT;         /* '<S4>/ECU_HV' */
  uint8 is_c7_VCUHVACT;                /* '<S4>/ECU_HV' */
  uint8 is_ECU_HVOFF;                  /* '<S4>/ECU_HV' */
  uint8 is_ECU_HVPower;                /* '<S4>/ECU_HV' */
} ARID_DEF_VCUHVACT_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_VCUHVACT_T VCUHVACT_ARID_DEF;/* '<S11>/debounce' */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'VCUHVACT'
 * '<S1>'   : 'VCUHVACT/HVAct_100ms_sys'
 * '<S2>'   : 'VCUHVACT/VCUHVACT_Init'
 * '<S3>'   : 'VCUHVACT/HVAct_100ms_sys/input'
 * '<S4>'   : 'VCUHVACT/HVAct_100ms_sys/logic'
 * '<S5>'   : 'VCUHVACT/HVAct_100ms_sys/out'
 * '<S6>'   : 'VCUHVACT/HVAct_100ms_sys/logic/Compare To Constant'
 * '<S7>'   : 'VCUHVACT/HVAct_100ms_sys/logic/Compare To Constant1'
 * '<S8>'   : 'VCUHVACT/HVAct_100ms_sys/logic/Compare To Constant2'
 * '<S9>'   : 'VCUHVACT/HVAct_100ms_sys/logic/Denounce'
 * '<S10>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ECU_HV'
 * '<S11>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub'
 * '<S12>'  : 'VCUHVACT/HVAct_100ms_sys/logic/HVStart'
 * '<S13>'  : 'VCUHVACT/HVAct_100ms_sys/logic/Switch_CAN'
 * '<S14>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant'
 * '<S15>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant1'
 * '<S16>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant2'
 * '<S17>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant3'
 * '<S18>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant4'
 * '<S19>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant5'
 * '<S20>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/Compare To Constant6'
 * '<S21>'  : 'VCUHVACT/HVAct_100ms_sys/logic/ElcSub/debounce'
 */
#endif                                 /* VCUHVACT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

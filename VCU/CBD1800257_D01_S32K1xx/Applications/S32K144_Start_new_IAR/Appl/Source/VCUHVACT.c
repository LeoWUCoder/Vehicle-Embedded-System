/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: VCUHVACT.c
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

#include "VCUHVACT.h"
#include "Platform_Types.h"

/* Named constants for Chart: '<S4>/ECU_HV' */
#define VCUHVACT_IN_ECU_HV1            ((uint8)1U)
#define VCUHVACT_IN_ECU_HV2            ((uint8)2U)
#define VCUHVACT_IN_ECU_HV3            ((uint8)3U)
#define VCUHVACT_IN_ECU_HV4            ((uint8)4U)
#define VCUHVACT_IN_ECU_HV5            ((uint8)5U)
#define VCUHVACT_IN_ECU_HVOFF          ((uint8)1U)
#define VCUHVACT_IN_ECU_HVPower        ((uint8)2U)
#define VCUHVACT_IN_ECU_OFF1           ((uint8)1U)
#define VCUHVACT_IN_ECU_OFF2           ((uint8)2U)
#define VCUHVACT_IN_ECU_OFF3           ((uint8)3U)
#define VCUHVACT_IN_ECU_OFF4           ((uint8)4U)
#define VCUHVACT_IN_ECU_init           ((uint8)3U)

/* Named constants for Chart: '<S4>/HVStart' */
#define VCUHVACT_IN_HV_OFF             ((uint8)1U)
#define VCUHVACT_IN_HV_OFF1            ((uint8)1U)
#define VCUHVACT_IN_HV_OFF2            ((uint8)2U)
#define VCUHVACT_IN_HV_OFFStandy       ((uint8)2U)
#define VCUHVACT_IN_HV_ON1             ((uint8)1U)
#define VCUHVACT_IN_HV_ON2             ((uint8)2U)
#define VCUHVACT_IN_HV_ON3             ((uint8)3U)
#define VCUHVACT_IN_HV_On              ((uint8)3U)
#define VCUHVACT_IN_HV_Standy          ((uint8)4U)
#define VCUHVACT_IN_Init               ((uint8)5U)

/* Named constants for Chart: '<S4>/Switch_CAN' */
#define VCUHVACT_IN_Init_k             ((uint8)1U)
#define VCUHVACT_IN_On                 ((uint8)2U)

/* PublicStructure Variables for Internal Data */
ARID_DEF_VCUHVACT_T VCUHVACT_ARID_DEF; /* '<S11>/debounce' */

/* Model step function for TID1 */
void HVAct_100ms(void)                 /* Explicit Task: HVAct_100ms */
{
  float64 rtb_read_BmsBattery_SocValue_fl;
  float64 tmpRead_b;
  uint16 tmpRead;
  uint8 rtb_read_BmsRelayOff_Request_ui;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_6;
  uint8 tmpRead_7;
  uint8 tmpRead_8;
  uint8 tmpRead_a;
  boolean guard1;
  boolean guard2;
  boolean rtb_write_PCANTransmission_Enab;
  boolean tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_9;

  /* Inport: '<Root>/read_VehicleFaultLevel_uint8_t' */
  (void)Rte_Read_read_VehicleFaultLevel_uint8_t(&tmpRead_a);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HVAct_100ms' incorporates:
   *  SubSystem: '<Root>/HVAct_100ms_sys'
   */
  /* SignalConversion generated from: '<S1>/read_BmsBattery_SocValue_float64' incorporates:
   *  Inport: '<Root>/read_BmsBattery_SocValue_float64'
   */
  (void)Rte_Read_read_BmsBattery_SocValue_float64
    (&rtb_read_BmsBattery_SocValue_fl);

  /* SignalConversion generated from: '<S1>/read_BmsRelayOff_Request_uint8_t' incorporates:
   *  Inport: '<Root>/read_BmsRelayOff_Request_uint8_t'
   */
  (void)Rte_Read_read_BmsRelayOff_Request_uint8_t
    (&rtb_read_BmsRelayOff_Request_ui);

  /* Chart: '<S4>/Switch_CAN' incorporates:
   *  Inport: '<Root>/read_KeyOnSwitch_Signal_bool'
   */
  if (VCUHVACT_ARID_DEF.is_active_c10_VCUHVACT == 0U) {
    VCUHVACT_ARID_DEF.is_active_c10_VCUHVACT = 1U;
    VCUHVACT_ARID_DEF.is_c10_VCUHVACT = VCUHVACT_IN_Init_k;
    rtb_write_PCANTransmission_Enab = FALSE;
  } else {
    (void)Rte_Read_read_KeyOnSwitch_Signal_bool(&rtb_write_PCANTransmission_Enab);
    if ((uint32)VCUHVACT_ARID_DEF.is_c10_VCUHVACT == VCUHVACT_IN_Init_k) {
      if (rtb_write_PCANTransmission_Enab) {
        VCUHVACT_ARID_DEF.is_c10_VCUHVACT = VCUHVACT_IN_On;
        rtb_write_PCANTransmission_Enab = TRUE;
      } else {
        rtb_write_PCANTransmission_Enab = FALSE;
      }

      /* case IN_On: */
    } else if (!rtb_write_PCANTransmission_Enab) {
      VCUHVACT_ARID_DEF.is_c10_VCUHVACT = VCUHVACT_IN_Init_k;
      rtb_write_PCANTransmission_Enab = FALSE;
    } else {
      rtb_write_PCANTransmission_Enab = TRUE;
    }
  }

  /* End of Chart: '<S4>/Switch_CAN' */

  /* Logic: '<S4>/Logical Operator' */
  rtb_write_PCANTransmission_Enab = !rtb_write_PCANTransmission_Enab;

  /* Chart: '<S4>/Denounce' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Logic: '<S4>/Logical Operator'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   */
  if ((tmpRead_a > 3U) || (rtb_read_BmsBattery_SocValue_fl < 10.0) ||
      (rtb_read_BmsRelayOff_Request_ui != 0U) || rtb_write_PCANTransmission_Enab
      || rtb_write_PCANTransmission_Enab) {
    VCUHVACT_ARID_DEF.counter2_p++;
    VCUHVACT_ARID_DEF.counter1_p = 0.0;
    if (VCUHVACT_ARID_DEF.counter2_p > 5.0) {
      VCUHVACT_ARID_DEF.output_p = 1.0;
      VCUHVACT_ARID_DEF.counter2_p = 5.0;
    }
  } else {
    VCUHVACT_ARID_DEF.counter1_p++;
    VCUHVACT_ARID_DEF.counter2_p = 0.0;
    if (VCUHVACT_ARID_DEF.counter1_p > 5.0) {
      VCUHVACT_ARID_DEF.output_p = 1.0;
      VCUHVACT_ARID_DEF.counter1_p = 5.0;
    }
  }

  /* End of Chart: '<S4>/Denounce' */

  /* Chart: '<S4>/HVStart' incorporates:
   *  Inport: '<Root>/read_BmsMainNegativeRelayClosed_Status_uint8_t'
   *  Inport: '<Root>/read_DcdcWorking_Status_uint8_t'
   */
  if (VCUHVACT_ARID_DEF.is_active_c9_VCUHVACT == 0U) {
    VCUHVACT_ARID_DEF.is_active_c9_VCUHVACT = 1U;
    VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_Init;
    VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 0U;
    VCUHVACT_ARID_DEF.write_Dcdc_Enable = 0U;
    VCUHVACT_ARID_DEF.counter = 0.0;
  } else {
    (void)Rte_Read_read_DcdcWorking_Status_uint8_t(&tmpRead_3);
    guard1 = FALSE;
    guard2 = FALSE;
    switch (VCUHVACT_ARID_DEF.is_c9_VCUHVACT) {
     case VCUHVACT_IN_HV_OFF:
      if (VCUHVACT_ARID_DEF.output_p == 1.0) {
        VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_Standy;
      } else if (VCUHVACT_ARID_DEF.counter >= 30.0) {
        VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_OFFStandy;
        VCUHVACT_ARID_DEF.is_HV_OFFStandy = VCUHVACT_IN_HV_OFF1;
        VCUHVACT_ARID_DEF.write_Dcdc_Enable = 0U;
        VCUHVACT_ARID_DEF.counter = 0.0;
      } else {
        VCUHVACT_ARID_DEF.counter++;
      }
      break;

     case VCUHVACT_IN_HV_OFFStandy:
      switch (VCUHVACT_ARID_DEF.is_HV_OFFStandy) {
       case VCUHVACT_IN_HV_OFF1:
        VCUHVACT_ARID_DEF.write_Dcdc_Enable = 0U;
        if ((VCUHVACT_ARID_DEF.counter >= 30.0) ||
            (rtb_read_BmsBattery_SocValue_fl < 10.0)) {
          VCUHVACT_ARID_DEF.is_HV_OFFStandy = VCUHVACT_IN_HV_OFF2;
          VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 0U;
          VCUHVACT_ARID_DEF.counter = 0.0;
        } else {
          VCUHVACT_ARID_DEF.counter++;
        }
        break;

       default:
        /* case IN_HV_OFF2: */
        VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 1U;
        if (VCUHVACT_ARID_DEF.counter >= 30.0) {
          VCUHVACT_ARID_DEF.write_BmsFault_Status = 1U;
          guard1 = TRUE;
        } else if ((rtb_read_BmsRelayOff_Request_ui == 1U) &&
                   (VCUHVACT_ARID_DEF.output_p != 1.0)) {
          guard1 = TRUE;
        } else {
          VCUHVACT_ARID_DEF.counter++;
        }
        break;
      }
      break;

     case VCUHVACT_IN_HV_On:
      if (VCUHVACT_ARID_DEF.output_p != 1.0) {
        VCUHVACT_ARID_DEF.is_HV_On = 0;
        VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_OFFStandy;
        VCUHVACT_ARID_DEF.is_HV_OFFStandy = VCUHVACT_IN_HV_OFF1;
        VCUHVACT_ARID_DEF.write_Dcdc_Enable = 0U;
        VCUHVACT_ARID_DEF.counter = 0.0;
      } else {
        switch (VCUHVACT_ARID_DEF.is_HV_On) {
         case VCUHVACT_IN_HV_ON1:
          VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 1U;
          if (VCUHVACT_ARID_DEF.counter >= 30.0) {
            VCUHVACT_ARID_DEF.is_HV_On = 0;
            VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_OFFStandy;
            VCUHVACT_ARID_DEF.is_HV_OFFStandy = VCUHVACT_IN_HV_OFF2;
            VCUHVACT_ARID_DEF.counter = 0.0;
          } else {
            (void)Rte_Read_read_BmsMainNegativeRelayClosed_Status_uint8_t
              (&tmpRead_1);
            if (tmpRead_1 == 1U) {
              VCUHVACT_ARID_DEF.is_HV_On = VCUHVACT_IN_HV_ON2;
              VCUHVACT_ARID_DEF.counter = 0.0;
            } else {
              VCUHVACT_ARID_DEF.counter++;
            }
          }
          break;

         case VCUHVACT_IN_HV_ON2:
          if (VCUHVACT_ARID_DEF.counter >= 30.0) {
            VCUHVACT_ARID_DEF.is_HV_On = VCUHVACT_IN_HV_ON3;
            VCUHVACT_ARID_DEF.write_Dcdc_Enable = 1U;
            VCUHVACT_ARID_DEF.counter = 0.0;
          } else {
            VCUHVACT_ARID_DEF.counter++;
          }
          break;

         default:
          /* case IN_HV_ON3: */
          VCUHVACT_ARID_DEF.write_Dcdc_Enable = 1U;
          if (tmpRead_3 == 1U) {
            guard2 = TRUE;
          } else if (VCUHVACT_ARID_DEF.counter >= 30.0) {
            VCUHVACT_ARID_DEF.write_DcdcFault_Status = 1U;
            guard2 = TRUE;
          } else {
            VCUHVACT_ARID_DEF.counter++;
          }
          break;
        }
      }
      break;

     case VCUHVACT_IN_HV_Standy:
      if (VCUHVACT_ARID_DEF.output_p != 1.0) {
        VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_OFF;
        VCUHVACT_ARID_DEF.counter = 0.0;
      }
      break;

     default:
      /* case IN_Init: */
      VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 0U;
      VCUHVACT_ARID_DEF.write_Dcdc_Enable = 0U;
      if ((VCUHVACT_ARID_DEF.counter >= 30.0) && (VCUHVACT_ARID_DEF.output_p ==
           1.0)) {
        VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_On;
        VCUHVACT_ARID_DEF.is_HV_On = VCUHVACT_IN_HV_ON1;
        VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 1U;
        VCUHVACT_ARID_DEF.counter = 0.0;
      } else {
        VCUHVACT_ARID_DEF.counter++;
      }
      break;
    }

    if (guard2) {
      VCUHVACT_ARID_DEF.is_HV_On = 0;
      VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_HV_Standy;
    }

    if (guard1) {
      VCUHVACT_ARID_DEF.is_HV_OFFStandy = 0;
      VCUHVACT_ARID_DEF.is_c9_VCUHVACT = VCUHVACT_IN_Init;
      VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable = 0U;
      VCUHVACT_ARID_DEF.write_Dcdc_Enable = 0U;
      VCUHVACT_ARID_DEF.counter = 0.0;
    }
  }

  /* End of Chart: '<S4>/HVStart' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HVAct_100ms' */

  /* Inport: '<Root>/read_VehicleSpeed_Kph_float64' */
  (void)Rte_Read_read_VehicleSpeed_Kph_float64(&tmpRead_b);

  /* Inport: '<Root>/read_SlowChargePlug_Status_bool' */
  (void)Rte_Read_read_SlowChargePlug_Status_bool(&tmpRead_9);

  /* Inport: '<Root>/read_KeyStartSwitch_Signal_bool' */
  (void)Rte_Read_read_KeyStartSwitch_Signal_bool(&tmpRead_5);

  /* Inport: '<Root>/read_FastChargePlug_Status_bool' */
  (void)Rte_Read_read_FastChargePlug_Status_bool(&tmpRead_4);

  /* Inport: '<Root>/read_BrakePedal_Status_uint8_t' */
  (void)Rte_Read_read_BrakePedal_Status_uint8_t(&tmpRead_2);

  /* Inport: '<Root>/read_ActualGear_Status_uint8_t' */
  (void)Rte_Read_read_ActualGear_Status_uint8_t(&tmpRead_0);

  /* Inport: '<Root>/read_AcceleratorPedal_Opening_uint16_t' */
  (void)Rte_Read_read_AcceleratorPedal_Opening_uint16_t(&tmpRead);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HVAct_100ms' incorporates:
   *  SubSystem: '<Root>/HVAct_100ms_sys'
   */
  /* Chart: '<S11>/debounce' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Logic: '<S11>/Logical Operator'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S15>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   */
  if ((VCUHVACT_ARID_DEF.write_Dcdc_Enable == 0U) || tmpRead_4 || tmpRead_9 ||
      (tmpRead != 0U) || (tmpRead_2 != 1U) || (tmpRead_0 != 0U) || (tmpRead_b >=
       3.0) || !tmpRead_5) {
    VCUHVACT_ARID_DEF.counter2++;
    VCUHVACT_ARID_DEF.counter1 = 0.0;
    if (VCUHVACT_ARID_DEF.counter2 > 5.0) {
      VCUHVACT_ARID_DEF.output = 0.0;
      VCUHVACT_ARID_DEF.counter2 = 5.0;
    }
  } else {
    VCUHVACT_ARID_DEF.counter1++;
    if (VCUHVACT_ARID_DEF.counter1 > 5.0) {
      VCUHVACT_ARID_DEF.output = 1.0;
      VCUHVACT_ARID_DEF.counter1 = 5.0;
    }
  }

  /* End of Chart: '<S11>/debounce' */

  /* Chart: '<S4>/ECU_HV' incorporates:
   *  Inport: '<Root>/read_McuWorking_Status_uint8_t'
   *  Inport: '<Root>/read_PduMainPrechargeRelay_Status_uint8_t'
   *  Inport: '<Root>/read_PduMainRelay_Status_uint8_t'
   */
  if (VCUHVACT_ARID_DEF.is_active_c7_VCUHVACT == 0U) {
    VCUHVACT_ARID_DEF.is_active_c7_VCUHVACT = 1U;
    VCUHVACT_ARID_DEF.is_c7_VCUHVACT = VCUHVACT_IN_ECU_init;
  } else {
    (void)Rte_Read_read_PduMainPrechargeRelay_Status_uint8_t(&tmpRead_7);
    (void)Rte_Read_read_PduMainRelay_Status_uint8_t(&tmpRead_8);
    switch (VCUHVACT_ARID_DEF.is_c7_VCUHVACT) {
     case VCUHVACT_IN_ECU_HVOFF:
      switch (VCUHVACT_ARID_DEF.is_ECU_HVOFF) {
       case VCUHVACT_IN_ECU_OFF1:
        VCUHVACT_ARID_DEF.write_VehicleReady_Status = 0U;
        VCUHVACT_ARID_DEF.is_ECU_HVOFF = VCUHVACT_IN_ECU_OFF2;
        VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 0U;
        VCUHVACT_ARID_DEF.write_MainRelay_Enable = 0U;
        break;

       case VCUHVACT_IN_ECU_OFF2:
        VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 0U;
        VCUHVACT_ARID_DEF.write_MainRelay_Enable = 0U;
        if ((tmpRead_8 == 0U) && (tmpRead_7 == 0U)) {
          VCUHVACT_ARID_DEF.is_ECU_HVOFF = VCUHVACT_IN_ECU_OFF3;
          VCUHVACT_ARID_DEF.counter_i = 0.0;
        }
        break;

       case VCUHVACT_IN_ECU_OFF3:
        if (VCUHVACT_ARID_DEF.counter_i >= 10.0) {
          VCUHVACT_ARID_DEF.is_ECU_HVOFF = VCUHVACT_IN_ECU_OFF4;
          VCUHVACT_ARID_DEF.counter_i = 0.0;
        } else {
          VCUHVACT_ARID_DEF.counter_i++;
        }
        break;

       default:
        /* case IN_ECU_OFF4: */
        (void)Rte_Read_read_McuWorking_Status_uint8_t(&tmpRead_6);
        if ((tmpRead_6 == 2U) || (VCUHVACT_ARID_DEF.counter_i >= 20.0)) {
          VCUHVACT_ARID_DEF.is_ECU_HVOFF = 0;
          VCUHVACT_ARID_DEF.is_c7_VCUHVACT = VCUHVACT_IN_ECU_init;
        } else {
          VCUHVACT_ARID_DEF.counter_i++;
        }
        break;
      }
      break;

     case VCUHVACT_IN_ECU_HVPower:
      if (VCUHVACT_ARID_DEF.output == 0.0) {
        VCUHVACT_ARID_DEF.is_ECU_HVPower = 0;
        VCUHVACT_ARID_DEF.is_c7_VCUHVACT = VCUHVACT_IN_ECU_HVOFF;
        VCUHVACT_ARID_DEF.is_ECU_HVOFF = VCUHVACT_IN_ECU_OFF1;
        VCUHVACT_ARID_DEF.write_VehicleReady_Status = 0U;
      } else {
        switch (VCUHVACT_ARID_DEF.is_ECU_HVPower) {
         case VCUHVACT_IN_ECU_HV1:
          VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 1U;
          if (tmpRead_7 == 1U) {
            VCUHVACT_ARID_DEF.is_ECU_HVPower = VCUHVACT_IN_ECU_HV2;
            VCUHVACT_ARID_DEF.write_MainRelay_Enable = 1U;
            VCUHVACT_ARID_DEF.counter_i = 0.0;
          } else if (VCUHVACT_ARID_DEF.counter_i >= 30.0) {
            VCUHVACT_ARID_DEF.is_ECU_HVPower = 0;
            VCUHVACT_ARID_DEF.is_c7_VCUHVACT = VCUHVACT_IN_ECU_HVOFF;
            VCUHVACT_ARID_DEF.is_ECU_HVOFF = VCUHVACT_IN_ECU_OFF2;
            VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 0U;
            VCUHVACT_ARID_DEF.write_MainRelay_Enable = 0U;
          } else {
            VCUHVACT_ARID_DEF.counter_i++;
          }
          break;

         case VCUHVACT_IN_ECU_HV2:
          VCUHVACT_ARID_DEF.write_MainRelay_Enable = 1U;
          if (tmpRead_8 == 1U) {
            VCUHVACT_ARID_DEF.is_ECU_HVPower = VCUHVACT_IN_ECU_HV3;
            VCUHVACT_ARID_DEF.counter_i = 0.0;
          } else if (VCUHVACT_ARID_DEF.counter_i >= 30.0) {
            VCUHVACT_ARID_DEF.is_ECU_HVPower = 0;
            VCUHVACT_ARID_DEF.is_c7_VCUHVACT = VCUHVACT_IN_ECU_HVOFF;
            VCUHVACT_ARID_DEF.is_ECU_HVOFF = VCUHVACT_IN_ECU_OFF2;
            VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 0U;
            VCUHVACT_ARID_DEF.write_MainRelay_Enable = 0U;
          } else {
            VCUHVACT_ARID_DEF.counter_i++;
          }
          break;

         case VCUHVACT_IN_ECU_HV3:
          if (VCUHVACT_ARID_DEF.counter_i >= 10.0) {
            VCUHVACT_ARID_DEF.is_ECU_HVPower = VCUHVACT_IN_ECU_HV4;
            VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 0U;
            VCUHVACT_ARID_DEF.counter_i = 0.0;
          } else {
            VCUHVACT_ARID_DEF.counter_i++;
          }
          break;

         case VCUHVACT_IN_ECU_HV4:
          VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 0U;
          if (VCUHVACT_ARID_DEF.counter_i >= 10.0) {
            VCUHVACT_ARID_DEF.is_ECU_HVPower = VCUHVACT_IN_ECU_HV5;
            VCUHVACT_ARID_DEF.write_VehicleReady_Status = 1U;
          } else {
            VCUHVACT_ARID_DEF.counter_i++;
          }
          break;

         default:
          /* case IN_ECU_HV5: */
          VCUHVACT_ARID_DEF.write_VehicleReady_Status = 1U;
          break;
        }
      }
      break;

     default:
      /* case IN_ECU_init: */
      if (VCUHVACT_ARID_DEF.output == 1.0) {
        VCUHVACT_ARID_DEF.is_c7_VCUHVACT = VCUHVACT_IN_ECU_HVPower;
        VCUHVACT_ARID_DEF.is_ECU_HVPower = VCUHVACT_IN_ECU_HV1;
        VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable = 1U;
        VCUHVACT_ARID_DEF.counter_i = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/ECU_HV' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HVAct_100ms' */

  /* Outport: '<Root>/write_BmsFault_Status_unit8_t' */
  (void)Rte_Write_write_BmsFault_Status_unit8_t
    (VCUHVACT_ARID_DEF.write_BmsFault_Status);

  /* Outport: '<Root>/write_Dcdc_Enable_uint8_t' */
  (void)Rte_Write_write_Dcdc_Enable_uint8_t(VCUHVACT_ARID_DEF.write_Dcdc_Enable);

  /* Outport: '<Root>/write_DcdcFault_Status_uint8_t' */
  (void)Rte_Write_write_DcdcFault_Status_uint8_t
    (VCUHVACT_ARID_DEF.write_DcdcFault_Status);

  /* Outport: '<Root>/write_MainNegativeRelay_Enable_unit8_t' */
  (void)Rte_Write_write_MainNegativeRelay_Enable_unit8_t
    (VCUHVACT_ARID_DEF.write_MainNegativeRelay_Enable);

  /* Outport: '<Root>/write_MainPrechargeRelay_Enable_uint8_t' */
  (void)Rte_Write_write_MainPrechargeRelay_Enable_uint8_t
    (VCUHVACT_ARID_DEF.write_MainPrechargeRelay_Enable);

  /* Outport: '<Root>/write_MainRelay_Enable_uint8_t' */
  (void)Rte_Write_write_MainRelay_Enable_uint8_t
    (VCUHVACT_ARID_DEF.write_MainRelay_Enable);

  /* Outport: '<Root>/write_VehicleReady_Status_uint8_t' */
  (void)Rte_Write_write_VehicleReady_Status_uint8_t
    (VCUHVACT_ARID_DEF.write_VehicleReady_Status);
}

/* Model initialize function */
void VCUHVACT_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

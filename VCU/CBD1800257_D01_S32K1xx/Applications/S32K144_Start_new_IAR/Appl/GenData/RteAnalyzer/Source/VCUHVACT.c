/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  VCUHVACT.c
 *        Config:  S32K144_Start.dpa
 *     SW-C Type:  VCUHVACT
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <VCUHVACT>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_VCUHVACT.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_VCUHVACT.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * float64: Real in interval [-DBL_MAX...DBL_MAX] with double precision including NaN (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


#define VCUHVACT_START_SEC_CODE
#include "VCUHVACT_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HVAct_100ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_read_AcceleratorPedal_Opening_uint16_t(uint16 *data)
 *   Std_ReturnType Rte_Read_read_ActualGear_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_BmsBatteryTotal_Current_float64(float64 *data)
 *   Std_ReturnType Rte_Read_read_BmsBattery_SocValue_float64(float64 *data)
 *   Std_ReturnType Rte_Read_read_BmsMainNegativeRelayClosed_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_BmsMainNegativeRelay_Status_bool(boolean *data)
 *   Std_ReturnType Rte_Read_read_BmsRelayOff_Request_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_BrakePedal_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_DcdcWorking_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_FastChargePlug_Status_bool(boolean *data)
 *   Std_ReturnType Rte_Read_read_KeyOnSwitch_Signal_bool(boolean *data)
 *   Std_ReturnType Rte_Read_read_KeyStartSwitch_Signal_bool(boolean *data)
 *   Std_ReturnType Rte_Read_read_McuWorking_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_PduMainPrechargeRelay_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_PduMainRelay_Status_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_SelfCheck_Status_bool(boolean *data)
 *   Std_ReturnType Rte_Read_read_SlowChargePlug_Status_bool(boolean *data)
 *   Std_ReturnType Rte_Read_read_VehicleFaultLevel_uint8_t(uint8 *data)
 *   Std_ReturnType Rte_Read_read_VehicleSpeed_Kph_float64(float64 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_write_BmsFault_Status_unit8_t(uint8 data)
 *   Std_ReturnType Rte_Write_write_DcdcFault_Status_uint8_t(uint8 data)
 *   Std_ReturnType Rte_Write_write_Dcdc_Enable_uint8_t(uint8 data)
 *   Std_ReturnType Rte_Write_write_MainNegativeRelay_Enable_unit8_t(uint8 data)
 *   Std_ReturnType Rte_Write_write_MainPrechargeRelay_Enable_uint8_t(uint8 data)
 *   Std_ReturnType Rte_Write_write_MainRelay_Enable_uint8_t(uint8 data)
 *   Std_ReturnType Rte_Write_write_VehicleReady_Status_uint8_t(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HVAct_100ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, VCUHVACT_CODE) HVAct_100ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HVAct_100ms
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint16 Read_read_AcceleratorPedal_Opening_uint16_t;
  uint8 Read_read_ActualGear_Status_uint8_t;
  float64 Read_read_BmsBatteryTotal_Current_float64;
  float64 Read_read_BmsBattery_SocValue_float64;
  uint8 Read_read_BmsMainNegativeRelayClosed_Status_uint8_t;
  boolean Read_read_BmsMainNegativeRelay_Status_bool;
  uint8 Read_read_BmsRelayOff_Request_uint8_t;
  uint8 Read_read_BrakePedal_Status_uint8_t;
  uint8 Read_read_DcdcWorking_Status_uint8_t;
  boolean Read_read_FastChargePlug_Status_bool;
  boolean Read_read_KeyOnSwitch_Signal_bool;
  boolean Read_read_KeyStartSwitch_Signal_bool;
  uint8 Read_read_McuWorking_Status_uint8_t;
  uint8 Read_read_PduMainPrechargeRelay_Status_uint8_t;
  uint8 Read_read_PduMainRelay_Status_uint8_t;
  boolean Read_read_SelfCheck_Status_bool;
  boolean Read_read_SlowChargePlug_Status_bool;
  uint8 Read_read_VehicleFaultLevel_uint8_t;
  float64 Read_read_VehicleSpeed_Kph_float64;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_VCUHVACT_Rte_Read_read_AcceleratorPedal_Opening_uint16_t(&Read_read_AcceleratorPedal_Opening_uint16_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_ActualGear_Status_uint8_t(&Read_read_ActualGear_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_BmsBatteryTotal_Current_float64(&Read_read_BmsBatteryTotal_Current_float64);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_BmsBattery_SocValue_float64(&Read_read_BmsBattery_SocValue_float64);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_BmsMainNegativeRelayClosed_Status_uint8_t(&Read_read_BmsMainNegativeRelayClosed_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_BmsMainNegativeRelay_Status_bool(&Read_read_BmsMainNegativeRelay_Status_bool);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_BmsRelayOff_Request_uint8_t(&Read_read_BmsRelayOff_Request_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_BrakePedal_Status_uint8_t(&Read_read_BrakePedal_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_DcdcWorking_Status_uint8_t(&Read_read_DcdcWorking_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_FastChargePlug_Status_bool(&Read_read_FastChargePlug_Status_bool);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_KeyOnSwitch_Signal_bool(&Read_read_KeyOnSwitch_Signal_bool);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_KeyStartSwitch_Signal_bool(&Read_read_KeyStartSwitch_Signal_bool);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_McuWorking_Status_uint8_t(&Read_read_McuWorking_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_PduMainPrechargeRelay_Status_uint8_t(&Read_read_PduMainPrechargeRelay_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_PduMainRelay_Status_uint8_t(&Read_read_PduMainRelay_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_SelfCheck_Status_bool(&Read_read_SelfCheck_Status_bool);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_SlowChargePlug_Status_bool(&Read_read_SlowChargePlug_Status_bool);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_VehicleFaultLevel_uint8_t(&Read_read_VehicleFaultLevel_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Read_read_VehicleSpeed_Kph_float64(&Read_read_VehicleSpeed_Kph_float64);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_BmsFault_Status_unit8_t(Rte_InitValue_write_BmsFault_Status_unit8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_DcdcFault_Status_uint8_t(Rte_InitValue_write_DcdcFault_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_Dcdc_Enable_uint8_t(Rte_InitValue_write_Dcdc_Enable_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_MainNegativeRelay_Enable_unit8_t(Rte_InitValue_write_MainNegativeRelay_Enable_unit8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_MainPrechargeRelay_Enable_uint8_t(Rte_InitValue_write_MainPrechargeRelay_Enable_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_MainRelay_Enable_uint8_t(Rte_InitValue_write_MainRelay_Enable_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_VCUHVACT_Rte_Write_write_VehicleReady_Status_uint8_t(Rte_InitValue_write_VehicleReady_Status_uint8_t);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define VCUHVACT_STOP_SEC_CODE
#include "VCUHVACT_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/

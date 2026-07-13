/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  B.c
 *        Config:  S32K144_Start.dpa"
 *     SW-C Type:  B
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <B>
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

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * CellVoltage01
 *   
 *
 * CellVoltage02
 *   
 *
 * CellVoltage03
 *   
 *
 * CellVoltage04
 *   
 *
 * CellVoltage05
 *   
 *
 * CellVoltage06
 *   
 *
 * CellVoltage07
 *   
 *
 * CellVoltage08
 *   
 *
 * CellVoltage09
 *   
 *
 * CellVoltage10
 *   
 *
 * CellVoltage11
 *   
 *
 * CellVoltage12
 *   
 *
 * CellVoltage13
 *   
 *
 * CellVoltage14
 *   
 *
 * CellVoltage15
 *   
 *
 * CellVoltage16
 *   
 *
 * DoorStatus
 *   
 *
 *********************************************************************************************************************/

#include "Rte_B.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_B.h"


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
 * CellVoltage01: Integer in interval [0...8191]
 * CellVoltage02: Integer in interval [0...8191]
 * CellVoltage03: Integer in interval [0...8191]
 * CellVoltage04: Integer in interval [0...8191]
 * CellVoltage05: Integer in interval [0...8191]
 * CellVoltage06: Integer in interval [0...8191]
 * CellVoltage07: Integer in interval [0...8191]
 * CellVoltage08: Integer in interval [0...8191]
 * CellVoltage09: Integer in interval [0...8191]
 * CellVoltage10: Integer in interval [0...8191]
 * CellVoltage11: Integer in interval [0...8191]
 * CellVoltage12: Integer in interval [0...8191]
 * CellVoltage13: Integer in interval [0...8191]
 * CellVoltage14: Integer in interval [0...8191]
 * CellVoltage15: Integer in interval [0...8191]
 * CellVoltage16: Integer in interval [0...8191]
 * DoorStatus: Integer in interval [0...15]
 * DriverSeatHeatStatus: Integer in interval [0...15]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


#define B_START_SEC_CODE
#include "B_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RunnableB
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
 *   Std_ReturnType Rte_Read_A_data_Element1(Rte_Instance self, uint16 *data)
 *   Std_ReturnType Rte_Read_A_data_Element2(Rte_Instance self, uint8 *data)
 *   Std_ReturnType Rte_Read_A_data_1_Element1(Rte_Instance self, uint16 *data)
 *   Std_ReturnType Rte_Read_A_data_1_Element2(Rte_Instance self, uint8 *data)
 *   Std_ReturnType Rte_Read_DoorStatus_data(Rte_Instance self, DoorStatus *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage01(Rte_Instance self, CellVoltage01 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage02(Rte_Instance self, CellVoltage02 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage03(Rte_Instance self, CellVoltage03 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage04(Rte_Instance self, CellVoltage04 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage05(Rte_Instance self, CellVoltage05 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage06(Rte_Instance self, CellVoltage06 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage07(Rte_Instance self, CellVoltage07 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage08(Rte_Instance self, CellVoltage08 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage09(Rte_Instance self, CellVoltage09 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage10(Rte_Instance self, CellVoltage10 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage11(Rte_Instance self, CellVoltage11 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage12(Rte_Instance self, CellVoltage12 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage13(Rte_Instance self, CellVoltage13 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage14(Rte_Instance self, CellVoltage14 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage15(Rte_Instance self, CellVoltage15 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage16(Rte_Instance self, CellVoltage16 data)
 *   Std_ReturnType Rte_Write_DoorStatus_1_data(Rte_Instance self, uint8 data)
 *   Std_ReturnType Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(Rte_Instance self, DriverSeatHeatStatus data)
 *   Std_ReturnType Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(Rte_Instance self, DriverSeatHeatStatus data)
 *   Std_ReturnType Rte_Write_HeadLampStatus_data(Rte_Instance self, uint8 data)
 *   Std_ReturnType Rte_Write_SteeringWheelAngle_Element(Rte_Instance self, sint16 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RunnableB_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, B_CODE) RunnableB(Rte_Instance self) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RunnableB
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint16 Read_A_data_Element1;
  uint8 Read_A_data_Element2;
  uint16 Read_A_data_1_Element1;
  uint8 Read_A_data_1_Element2;
  DoorStatus Read_DoorStatus_data;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_B_Rte_Read_A_data_Element1(self, &Read_A_data_Element1);
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

  fct_status = TSC_B_Rte_Read_A_data_Element2(self, &Read_A_data_Element2);
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

  fct_status = TSC_B_Rte_Read_A_data_1_Element1(self, &Read_A_data_1_Element1);
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

  fct_status = TSC_B_Rte_Read_A_data_1_Element2(self, &Read_A_data_1_Element2);
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

  fct_status = TSC_B_Rte_Read_DoorStatus_data(self, &Read_DoorStatus_data);
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

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage01(self, Rte_InitValue_CellVoltage_CellVoltage01);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage02(self, Rte_InitValue_CellVoltage_CellVoltage02);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage03(self, Rte_InitValue_CellVoltage_CellVoltage03);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage04(self, Rte_InitValue_CellVoltage_CellVoltage04);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage05(self, Rte_InitValue_CellVoltage_CellVoltage05);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage06(self, Rte_InitValue_CellVoltage_CellVoltage06);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage07(self, Rte_InitValue_CellVoltage_CellVoltage07);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage08(self, Rte_InitValue_CellVoltage_CellVoltage08);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage09(self, Rte_InitValue_CellVoltage_CellVoltage09);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage10(self, Rte_InitValue_CellVoltage_CellVoltage10);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage11(self, Rte_InitValue_CellVoltage_CellVoltage11);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage12(self, Rte_InitValue_CellVoltage_CellVoltage12);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage13(self, Rte_InitValue_CellVoltage_CellVoltage13);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage14(self, Rte_InitValue_CellVoltage_CellVoltage14);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage15(self, Rte_InitValue_CellVoltage_CellVoltage15);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_CellVoltage_CellVoltage16(self, Rte_InitValue_CellVoltage_CellVoltage16);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_DoorStatus_1_data(self, Rte_InitValue_DoorStatus_1_data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(self, Rte_InitValue_DriverSeatHeatStatus_DriverSeatHeatStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(self, Rte_InitValue_DriverSeatHeatStatus_1_DriverSeatHeatStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_HeadLampStatus_data(self, Rte_InitValue_HeadLampStatus_data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_B_Rte_Write_SteeringWheelAngle_Element(self, Rte_InitValue_SteeringWheelAngle_Element);
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


#define B_STOP_SEC_CODE
#include "B_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

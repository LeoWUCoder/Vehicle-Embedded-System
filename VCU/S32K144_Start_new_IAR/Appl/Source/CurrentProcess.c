/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CurrentProcess.c
 *        Config:  D:\Vector SIP\SIP-S32K14x\AUTOSAR_TOOLs\S32K144_SIP\MICROSAR\CBD1800257_D01_S32K1xx\DaVinciConfigurator\Core/"D:/Vector SIP/SIP-S32K14x/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa"
 *     SW-C Type:  CurrentProcess
 *  Generated at:  Fri Jan 30 11:22:41 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <CurrentProcess>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * rawCurrentData
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CurrentProcess.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * DoorStatus: Integer in interval [0...15]
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * rawCurrentData: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 *********************************************************************************************************************/


#define CurrentProcess_START_SEC_CODE
#include "CurrentProcess_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_CurrentProcess
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DoorStatus_DoorStatus(DoorStatus *data)
 *   Std_ReturnType Rte_Read_rawCurrentData_rawCurrentData(rawCurrentData *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_current_data(float32 data)
 *   Std_ReturnType Rte_Write_currentInvalid_data(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_CurrentProcess_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CurrentProcess_CODE) Runnable_CurrentProcess(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Runnable_CurrentProcess
 *********************************************************************************************************************/

 rawCurrentData data;
 float32 processedCurrent;
 Std_ReturnType ret;

 ret = Rte_Read_rawCurrentData_rawCurrentData(&data);
 processedCurrent = data * 0.1 - 3276.8;
 Rte_Write_current_data(processedCurrent);

 /* 检查rte接口返回值，输出数据有效状态 */
 if ((ret & RTE_E_MAX_AGE_EXCEEDED) == RTE_E_MAX_AGE_EXCEEDED) {
    Rte_Write_currentInvalid_data(1u);
 }
 else {
    Rte_Write_currentInvalid_data(0u);
 }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CurrentProcess_STOP_SEC_CODE
#include "CurrentProcess_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

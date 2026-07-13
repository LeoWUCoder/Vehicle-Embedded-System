/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  B.c
 *        Config:  D:\Vector SIP\SIP-S32K14x\AUTOSAR_TOOLs\S32K144_SIP\MICROSAR\CBD1800257_D01_S32K1xx\DaVinciConfigurator\Core/"D:/Vector SIP/SIP-S32K14x/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa"
 *     SW-C Type:  B
 *  Generated at:  Sun Jan 11 22:42:46 2026
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
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage02
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage03
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage04
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage05
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage06
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage07
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage08
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage09
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage10
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage11
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage12
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage13
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage14
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage15
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * CellVoltage16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DoorStatus
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_B.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


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

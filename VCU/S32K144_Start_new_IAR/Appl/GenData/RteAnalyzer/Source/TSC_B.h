/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_B.h
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_B_Rte_Read_A_data_Element1(uint8 self, uint16 *data);
Std_ReturnType TSC_B_Rte_Read_A_data_Element2(uint8 self, uint8 *data);
Std_ReturnType TSC_B_Rte_Read_A_data_1_Element1(uint8 self, uint16 *data);
Std_ReturnType TSC_B_Rte_Read_A_data_1_Element2(uint8 self, uint8 *data);
Std_ReturnType TSC_B_Rte_Read_DoorStatus_data(uint8 self, DoorStatus *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage01(uint8 self, CellVoltage01 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage02(uint8 self, CellVoltage02 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage03(uint8 self, CellVoltage03 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage04(uint8 self, CellVoltage04 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage05(uint8 self, CellVoltage05 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage06(uint8 self, CellVoltage06 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage07(uint8 self, CellVoltage07 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage08(uint8 self, CellVoltage08 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage09(uint8 self, CellVoltage09 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage10(uint8 self, CellVoltage10 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage11(uint8 self, CellVoltage11 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage12(uint8 self, CellVoltage12 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage13(uint8 self, CellVoltage13 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage14(uint8 self, CellVoltage14 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage15(uint8 self, CellVoltage15 data);
Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage16(uint8 self, CellVoltage16 data);
Std_ReturnType TSC_B_Rte_Write_DoorStatus_1_data(uint8 self, uint8 data);
Std_ReturnType TSC_B_Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(uint8 self, DriverSeatHeatStatus data);
Std_ReturnType TSC_B_Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(uint8 self, DriverSeatHeatStatus data);
Std_ReturnType TSC_B_Rte_Write_HeadLampStatus_data(uint8 self, uint8 data);
Std_ReturnType TSC_B_Rte_Write_SteeringWheelAngle_Element(uint8 self, sint16 data);





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
 *          File:  TSC_C.h
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
Std_ReturnType TSC_C_Rte_Read_DoorStatus_data(uint8 *data);
Std_ReturnType TSC_C_Rte_Read_HeadLampStatus_data(uint8 *data);
Std_ReturnType TSC_C_Rte_Read_SteeringWheelAngle_Element(sint16 *data);
Std_ReturnType TSC_C_Rte_Read_WindowStatus_data(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_C_Rte_Write_A_data_Element1(uint16 data);
Std_ReturnType TSC_C_Rte_Write_A_data_Element2(uint8 data);





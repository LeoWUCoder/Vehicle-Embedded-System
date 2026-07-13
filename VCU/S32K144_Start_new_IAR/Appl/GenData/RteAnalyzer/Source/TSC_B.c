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
 *          File:  TSC_B.c
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_B.h"
#include "TSC_B.h"








Std_ReturnType TSC_B_Rte_Read_A_data_Element1(uint8 self, uint16 *data)
{
  return Rte_Read_A_data_Element1(self, data);
}

Std_ReturnType TSC_B_Rte_Read_A_data_Element2(uint8 self, uint8 *data)
{
  return Rte_Read_A_data_Element2(self, data);
}

Std_ReturnType TSC_B_Rte_Read_A_data_1_Element1(uint8 self, uint16 *data)
{
  return Rte_Read_A_data_1_Element1(self, data);
}

Std_ReturnType TSC_B_Rte_Read_A_data_1_Element2(uint8 self, uint8 *data)
{
  return Rte_Read_A_data_1_Element2(self, data);
}

Std_ReturnType TSC_B_Rte_Read_DoorStatus_data(uint8 self, DoorStatus *data)
{
  return Rte_Read_DoorStatus_data(self, data);
}




Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage01(uint8 self, CellVoltage01 data)
{
  return Rte_Write_CellVoltage_CellVoltage01(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage02(uint8 self, CellVoltage02 data)
{
  return Rte_Write_CellVoltage_CellVoltage02(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage03(uint8 self, CellVoltage03 data)
{
  return Rte_Write_CellVoltage_CellVoltage03(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage04(uint8 self, CellVoltage04 data)
{
  return Rte_Write_CellVoltage_CellVoltage04(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage05(uint8 self, CellVoltage05 data)
{
  return Rte_Write_CellVoltage_CellVoltage05(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage06(uint8 self, CellVoltage06 data)
{
  return Rte_Write_CellVoltage_CellVoltage06(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage07(uint8 self, CellVoltage07 data)
{
  return Rte_Write_CellVoltage_CellVoltage07(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage08(uint8 self, CellVoltage08 data)
{
  return Rte_Write_CellVoltage_CellVoltage08(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage09(uint8 self, CellVoltage09 data)
{
  return Rte_Write_CellVoltage_CellVoltage09(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage10(uint8 self, CellVoltage10 data)
{
  return Rte_Write_CellVoltage_CellVoltage10(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage11(uint8 self, CellVoltage11 data)
{
  return Rte_Write_CellVoltage_CellVoltage11(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage12(uint8 self, CellVoltage12 data)
{
  return Rte_Write_CellVoltage_CellVoltage12(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage13(uint8 self, CellVoltage13 data)
{
  return Rte_Write_CellVoltage_CellVoltage13(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage14(uint8 self, CellVoltage14 data)
{
  return Rte_Write_CellVoltage_CellVoltage14(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage15(uint8 self, CellVoltage15 data)
{
  return Rte_Write_CellVoltage_CellVoltage15(self, data);
}

Std_ReturnType TSC_B_Rte_Write_CellVoltage_CellVoltage16(uint8 self, CellVoltage16 data)
{
  return Rte_Write_CellVoltage_CellVoltage16(self, data);
}

Std_ReturnType TSC_B_Rte_Write_DoorStatus_1_data(uint8 self, uint8 data)
{
  return Rte_Write_DoorStatus_1_data(self, data);
}

Std_ReturnType TSC_B_Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(uint8 self, DriverSeatHeatStatus data)
{
  return Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(self, data);
}

Std_ReturnType TSC_B_Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(uint8 self, DriverSeatHeatStatus data)
{
  return Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(self, data);
}

Std_ReturnType TSC_B_Rte_Write_HeadLampStatus_data(uint8 self, uint8 data)
{
  return Rte_Write_HeadLampStatus_data(self, data);
}

Std_ReturnType TSC_B_Rte_Write_SteeringWheelAngle_Element(uint8 self, sint16 data)
{
  return Rte_Write_SteeringWheelAngle_Element(self, data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* B */
      /* B */




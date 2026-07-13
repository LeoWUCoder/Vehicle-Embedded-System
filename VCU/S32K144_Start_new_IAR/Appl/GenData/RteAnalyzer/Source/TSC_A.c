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
 *          File:  TSC_A.c
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_A.h"
#include "TSC_A.h"








Std_ReturnType TSC_A_Rte_Read_DoorStatus_data(uint8 *data)
{
  return Rte_Read_DoorStatus_data(data);
}

Std_ReturnType TSC_A_Rte_Read_HeadLampStatus_data(uint8 *data)
{
  return Rte_Read_HeadLampStatus_data(data);
}

Std_ReturnType TSC_A_Rte_Read_SteeringWheelAngle_Element(sint16 *data)
{
  return Rte_Read_SteeringWheelAngle_Element(data);
}

Std_ReturnType TSC_A_Rte_Read_WindowStatus_data(uint8 *data)
{
  return Rte_Read_WindowStatus_data(data);
}




Std_ReturnType TSC_A_Rte_Write_A_data_Element1(uint16 data)
{
  return Rte_Write_A_data_Element1(data);
}

Std_ReturnType TSC_A_Rte_Write_A_data_Element2(uint8 data)
{
  return Rte_Write_A_data_Element2(data);
}

Std_ReturnType TSC_A_Rte_Write_WindowStatus_1_data(uint8 data)
{
  return Rte_Write_WindowStatus_1_data(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* A */
      /* A */




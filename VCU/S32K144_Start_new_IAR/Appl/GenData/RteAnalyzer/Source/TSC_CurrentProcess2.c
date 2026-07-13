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
 *          File:  TSC_CurrentProcess2.c
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CurrentProcess2.h"
#include "TSC_CurrentProcess2.h"








Std_ReturnType TSC_CurrentProcess2_Rte_Read_DoorStatus_DoorStatus(DoorStatus *data)
{
  return Rte_Read_DoorStatus_DoorStatus(data);
}

Std_ReturnType TSC_CurrentProcess2_Rte_Read_rawCurrentData_rawCurrentData(rawCurrentData *data)
{
  return Rte_Read_rawCurrentData_rawCurrentData(data);
}




Std_ReturnType TSC_CurrentProcess2_Rte_Write_current_data(float32 data)
{
  return Rte_Write_current_data(data);
}

Std_ReturnType TSC_CurrentProcess2_Rte_Write_currentInvalid_data(boolean data)
{
  return Rte_Write_currentInvalid_data(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* CurrentProcess2 */
      /* CurrentProcess2 */




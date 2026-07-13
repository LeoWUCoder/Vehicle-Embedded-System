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
 *          File:  TSC_VCUHVACT.c
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_VCUHVACT.h"
#include "TSC_VCUHVACT.h"








Std_ReturnType TSC_VCUHVACT_Rte_Read_read_AcceleratorPedal_Opening_uint16_t(uint16 *data)
{
  return Rte_Read_read_AcceleratorPedal_Opening_uint16_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_ActualGear_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_ActualGear_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_BmsBatteryTotal_Current_float64(float64 *data)
{
  return Rte_Read_read_BmsBatteryTotal_Current_float64(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_BmsBattery_SocValue_float64(float64 *data)
{
  return Rte_Read_read_BmsBattery_SocValue_float64(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_BmsMainNegativeRelayClosed_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_BmsMainNegativeRelayClosed_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_BmsMainNegativeRelay_Status_bool(boolean *data)
{
  return Rte_Read_read_BmsMainNegativeRelay_Status_bool(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_BmsRelayOff_Request_uint8_t(uint8 *data)
{
  return Rte_Read_read_BmsRelayOff_Request_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_BrakePedal_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_BrakePedal_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_DcdcWorking_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_DcdcWorking_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_FastChargePlug_Status_bool(boolean *data)
{
  return Rte_Read_read_FastChargePlug_Status_bool(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_KeyOnSwitch_Signal_bool(boolean *data)
{
  return Rte_Read_read_KeyOnSwitch_Signal_bool(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_KeyStartSwitch_Signal_bool(boolean *data)
{
  return Rte_Read_read_KeyStartSwitch_Signal_bool(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_McuWorking_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_McuWorking_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_PduMainPrechargeRelay_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_PduMainPrechargeRelay_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_PduMainRelay_Status_uint8_t(uint8 *data)
{
  return Rte_Read_read_PduMainRelay_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_SelfCheck_Status_bool(boolean *data)
{
  return Rte_Read_read_SelfCheck_Status_bool(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_SlowChargePlug_Status_bool(boolean *data)
{
  return Rte_Read_read_SlowChargePlug_Status_bool(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_VehicleFaultLevel_uint8_t(uint8 *data)
{
  return Rte_Read_read_VehicleFaultLevel_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Read_read_VehicleSpeed_Kph_float64(float64 *data)
{
  return Rte_Read_read_VehicleSpeed_Kph_float64(data);
}




Std_ReturnType TSC_VCUHVACT_Rte_Write_write_BmsFault_Status_unit8_t(uint8 data)
{
  return Rte_Write_write_BmsFault_Status_unit8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Write_write_DcdcFault_Status_uint8_t(uint8 data)
{
  return Rte_Write_write_DcdcFault_Status_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Write_write_Dcdc_Enable_uint8_t(uint8 data)
{
  return Rte_Write_write_Dcdc_Enable_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Write_write_MainNegativeRelay_Enable_unit8_t(uint8 data)
{
  return Rte_Write_write_MainNegativeRelay_Enable_unit8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Write_write_MainPrechargeRelay_Enable_uint8_t(uint8 data)
{
  return Rte_Write_write_MainPrechargeRelay_Enable_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Write_write_MainRelay_Enable_uint8_t(uint8 data)
{
  return Rte_Write_write_MainRelay_Enable_uint8_t(data);
}

Std_ReturnType TSC_VCUHVACT_Rte_Write_write_VehicleReady_Status_uint8_t(uint8 data)
{
  return Rte_Write_write_VehicleReady_Status_uint8_t(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* VCUHVACT */
      /* VCUHVACT */




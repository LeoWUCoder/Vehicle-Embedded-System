/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Appl_Cbk.h
 *   Generation Time: 2026-07-14 17:28:44
 *           Project: S32K144_Start - Version 1.0
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * WARNING: This code has been generated with reduced-severity errors. 
 * The created output files contain errors that have been ignored. Usage of the created files can lead to unpredictable behavior of the embedded code.
 * Usage of the created files happens at own risk!
 * 
 * [Warning] COM02300 - Invalid configuration of ComBitSize/ComSignalLength. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx[0:ComBitSize](value=2) of /ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx must not extend size of BOOLEAN (size= 1)
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx[0:ComBitSize](value=2) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * 
 * [Warning] COM02332 - Invalid configuration of ComBitSize for float32 or float64. 
 * - [Reduced Severity due to User-Defined Parameter] BitSize has to be equals 64 for /ActiveEcuC/Com/ComConfig/read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_Rx[0:ComSignalType](value=FLOAT64).
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_Rx[0:ComBitSize](value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * 
 * [Warning] COM02332 - Invalid configuration of ComBitSize for float32 or float64. 
 * - [Reduced Severity due to User-Defined Parameter] BitSize has to be equals 64 for /ActiveEcuC/Com/ComConfig/read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_Rx[0:ComSignalType](value=FLOAT64).
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_Rx[0:ComBitSize](value=6) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * 
 * [Warning] COM02332 - Invalid configuration of ComBitSize for float32 or float64. 
 * - [Reduced Severity due to User-Defined Parameter] BitSize has to be equals 64 for /ActiveEcuC/Com/ComConfig/read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_Rx[0:ComSignalType](value=FLOAT64).
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_Rx[0:ComBitSize](value=7) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 *********************************************************************************************************************/

#if !defined (APPL_CBK_H)
# define APPL_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* Configurable notification interface prototypes */


#define COM_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

#endif  /* APPL_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Appl_Cbk.h
**********************************************************************************************************************/


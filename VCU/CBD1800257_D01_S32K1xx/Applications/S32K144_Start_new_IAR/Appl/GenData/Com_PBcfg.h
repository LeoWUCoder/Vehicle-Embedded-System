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
 *              File: Com_PBcfg.h
 *   Generation Time: 2026-07-14 17:28:45
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

#if !defined (COM_PBCFG_H)
# define COM_PBCFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Com_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComPBDataSwitches  Com Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define COM_PBCONFIG                                                  STD_OFF  /**< Deactivateable: 'Com_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define COM_LTCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Com_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define COM_PCCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Com_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif  /* COM_PBCFG_H */
/**********************************************************************************************************************
  END OF FILE: Com_PBcfg.h
**********************************************************************************************************************/


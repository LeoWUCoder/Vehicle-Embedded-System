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
 *              File: Com_Lcfg.c
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

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA  S 1881 EOF */ /* MD_MSR_AutosarBoolean */
/* PRQA  S 1882 EOF */ /* MD_MSR_AutosarBoolean */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"


#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_ConstValueFloat64
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueFloat64
  \brief  Optimized array of commonly used values like initial or invalid values. (FLOAT64)
*/ 
#define COM_START_SEC_CONST_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueFloat64Type, COM_CONST) Com_ConstValueFloat64[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueFloat64      Referable Keys */
  /*     0 */ 0.0                  /* [/ActiveEcuC/Com/ComConfig/read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_RxInitValue, /ActiveEcuC/Com/ComConfig/read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_RxInitValue, /ActiveEcuC/Com/ComConfig/read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_RxInitValue] */
};
#define COM_STOP_SEC_CONST_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0x0000u   /* [/ActiveEcuC/Com/ComConfig/read_AcceleratorPedal_Opening_oVCUHV_Receive_oCAN00_487c0bf6_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x00u   /* [/ActiveEcuC/Com/ComConfig/read_ActualGear_Status_oVCUHV_Receive_oCAN00_7e6698b8_RxInitValue, /ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelayClosed_oVCUHV_Receive_oCAN00_753eb224_RxInitValue, /ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelay_Status_oVCUHV_Receive_oCAN00_d2726e8d_RxInitValue, /ActiveEcuC/Com/ComConfig/read_BmsRelayOff_Request_oVCUHV_Receive_oCAN00_80bc2290_RxInitValue, /ActiveEcuC/Com/ComConfig/read_BrakePedal_Status_oVCUHV_Receive_oCAN00_ff534c6b_RxInitValue, /ActiveEcuC/Com/ComConfig/read_DcdcWorking_Status_oVCUHV_Receive_oCAN00_47bf7105_RxInitValue, /ActiveEcuC/Com/ComConfig/read_FastChargePlug_Status_oVCUHV_Receive_oCAN00_20825129_RxInitValue, /ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_RxInitValue, /ActiveEcuC/Com/ComConfig/read_KeyStartSwitch_Signal_oVCUHV_Receive_oCAN00_12b91abc_RxInitValue, /ActiveEcuC/Com/ComConfig/read_McuWorking_Status_oVCUHV_Receive_oCAN00_46e05410_RxInitValue, /ActiveEcuC/Com/ComConfig/read_PduMainPrechargeRelay_oVCUHV_Receive_oCAN00_7a304762_RxInitValue, /ActiveEcuC/Com/ComConfig/read_PduMainRelay_Status_oVCUHV_Receive_oCAN00_4bff4eb0_RxInitValue, /ActiveEcuC/Com/ComConfig/read_SelfCheck_Status_oVCUHV_Receive_oCAN00_932015b8_RxInitValue, /ActiveEcuC/Com/ComConfig/read_SlowChargePlug_Status_oVCUHV_Receive_oCAN00_00e8f3f1_RxInitValue, /ActiveEcuC/Com/ComConfig/read_VehicleFaultLevel_oVCUHV_Receive_oCAN00_cf14497e_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*     1 */         0x01u   /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                   Description
  InitValueUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                 the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  ByteLength                Byte length of the signal or group signal.
  RxPduInfoIdx              the index of the 1:1 relation pointing to Com_RxPduInfo
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[22] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  ApplType                            BitLength  BitPosition  BufferIdx  ByteLength  RxPduInfoIdx  StartByteInPduPosition        Referable Keys */
  { /*     0 */          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,        7u,         25u,        0u,         0u,           0u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/read_AcceleratorPedal_Opening_oVCUHV_Receive_oCAN00_487c0bf6_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     1 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          8u,        0u,         0u,           0u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/read_ActualGear_Status_oVCUHV_Receive_oCAN00_7e6698b8_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     2 */          TRUE, COM_FLOAT64_APPLTYPEOFRXACCESSINFO,        1u,         32u,        0u,         0u,           0u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     3 */          TRUE, COM_FLOAT64_APPLTYPEOFRXACCESSINFO,        6u,         16u,        1u,         0u,           0u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     4 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         23u,        1u,         0u,           0u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelayClosed_oVCUHV_Receive_oCAN00_753eb224_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     5 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          2u,        2u,         0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelay_Status_oVCUHV_Receive_oCAN00_d2726e8d_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     6 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         22u,        3u,         0u,           0u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/read_BmsRelayOff_Request_oVCUHV_Receive_oCAN00_80bc2290_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     7 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          9u,        4u,         0u,           0u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/read_BrakePedal_Status_oVCUHV_Receive_oCAN00_ff534c6b_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     8 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         24u,        5u,         0u,           0u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/read_DcdcWorking_Status_oVCUHV_Receive_oCAN00_47bf7105_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     9 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          5u,        6u,         0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/read_FastChargePlug_Status_oVCUHV_Receive_oCAN00_20825129_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    10 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         14u,        7u,         0u,           0u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    11 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          6u,        8u,         0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/read_KeyStartSwitch_Signal_oVCUHV_Receive_oCAN00_12b91abc_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    12 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         13u,        9u,         0u,           0u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/read_McuWorking_Status_oVCUHV_Receive_oCAN00_46e05410_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    13 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         11u,       10u,         0u,           0u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/read_PduMainPrechargeRelay_oVCUHV_Receive_oCAN00_7a304762_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    14 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         12u,       11u,         0u,           0u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/read_PduMainRelay_Status_oVCUHV_Receive_oCAN00_4bff4eb0_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    15 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       12u,         0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/read_SelfCheck_Status_oVCUHV_Receive_oCAN00_932015b8_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    16 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          4u,       13u,         0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/read_SlowChargePlug_Status_oVCUHV_Receive_oCAN00_00e8f3f1_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    17 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          1u,       14u,         0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/read_VehicleFaultLevel_oVCUHV_Receive_oCAN00_cf14497e_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    18 */          TRUE, COM_FLOAT64_APPLTYPEOFRXACCESSINFO,        7u,         33u,        2u,         0u,           0u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_Rx, /ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    19 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          2u,       15u,         0u,           1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*    20 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       16u,         0u,           1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*    21 */          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          1u,       17u,         0u,           1u,                     0u }   /* [/ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   1u },
  { /*     1 */                   1u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                   Description
  RxAccessInfoIndUsed       TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferLength      the number of relations pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx    the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigInfoEndIdx           the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx         the start index of the 0:n relation pointing to Com_RxSigInfo
  Type                      Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxAccessInfoIndUsed  RxDefPduBufferLength  RxDefPduBufferStartIdx  RxSigInfoEndIdx  RxSigInfoStartIdx  Type                              Referable Keys */
  { /*     0 */                TRUE,                   5u,                     0u,             19u,                0u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
  { /*     1 */                TRUE,                   1u,                     5u,             22u,               19u, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element             Description
  SignalProcessing
  ValidDlc            Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[22] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     1 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     2 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     3 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     4 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     5 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     6 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     7 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     8 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*     9 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    10 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    11 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    12 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    13 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    14 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    15 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    16 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    17 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    18 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  { /*    19 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*    20 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*    21 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u }   /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element     Description
  Periodic    TRUE if transmission mode contains a cyclic part.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Periodic        Referable Keys */
  { /*     0 */     TRUE }   /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element          Description
  InitMode         Initial transmission mode selector of the Tx I-PDU.
  TxModeTrueIdx    the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,            0u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     1 */     TRUE,            0u },  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  { /*     2 */     TRUE,            0u }   /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element     Description
  Periodic    TRUE if transmission mode contains a cyclic part.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Periodic        Referable Keys */
  { /*     0 */     TRUE }   /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   0u },
  { /*     1 */                   0u },
  { /*     2 */                   0u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                   Description
  TxPduInitValueUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  MetaDataLength            Length of MetaData.
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx      the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx    the start index of the 0:n relation pointing to Com_TxPduInitValue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInitValueUsed  MetaDataLength  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx        Referable Keys */
  { /*     0 */               TRUE,             0u,             7u,                   7u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  { /*     1 */               TRUE,             0u,             8u,                  15u,                     7u },  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  { /*     2 */               TRUE,             0u,             1u,                  16u,                    15u }   /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[16] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     2 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     5 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     6 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  /*     7 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    11 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    15 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  ByteLength                Byte length of the signal or group signal.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BitLength  BitPosition  ByteLength  StartByteInPduPosition  TxBufferLength  TxBufferStartIdx  TxPduInfoIdx        Referable Keys */
  { /*     0 */        8u,          0u,         1u,                     0u,             1u,               7u,           1u },  /* [/ActiveEcuC/Com/ComConfig/sig_LampCnt_omsg_MyECU_Lamp_oCAN00_f37e68ea_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  { /*     1 */        1u,          0u,         0u,                     0u,             1u,              15u,           2u },  /* [/ActiveEcuC/Com/ComConfig/sig_RearInteriorLight_omsg_Transmit_oCAN00_49a633c1_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  { /*     2 */        1u,         48u,         0u,                     6u,             1u,               6u,           0u },  /* [/ActiveEcuC/Com/ComConfig/write_BmsFault_Status_oVCUHV_Send_oCAN00_3bb6edf6_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     3 */        1u,         40u,         0u,                     5u,             1u,               5u,           0u },  /* [/ActiveEcuC/Com/ComConfig/write_DcdcFault_Status_oVCUHV_Send_oCAN00_1ff6e880_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     4 */        1u,         32u,         0u,                     4u,             1u,               4u,           0u },  /* [/ActiveEcuC/Com/ComConfig/write_Dcdc_Enable_oVCUHV_Send_oCAN00_ff201339_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     5 */        1u,         24u,         0u,                     3u,             1u,               3u,           0u },  /* [/ActiveEcuC/Com/ComConfig/write_MainNegativeRelay_Enable_oVCUHV_Send_oCAN00_47506650_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     6 */        1u,          0u,         0u,                     0u,             1u,               0u,           0u },  /* [/ActiveEcuC/Com/ComConfig/write_MainPrechargeRelay_Enable_oVCUHV_Send_oCAN00_b12b678a_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     7 */        1u,          8u,         0u,                     1u,             1u,               1u,           0u },  /* [/ActiveEcuC/Com/ComConfig/write_MainRelay_Enable_oVCUHV_Send_oCAN00_10fd8b9a_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
  { /*     8 */        1u,         16u,         0u,                     2u,             1u,               2u,           0u }   /* [/ActiveEcuC/Com/ComConfig/write_VehicleReady_Status_oVCUHV_Send_oCAN00_8602d488_Tx, /ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_GatewayProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests plus one initial transmit.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RepCntType, COM_VAR_NOINIT) Com_RepCnt[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Receive_oCAN00_2f877d2a_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferFloat64
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferFloat64
  \brief  Rx Signal and Group Signal Buffer. (FLOAT64)
*/ 
#define COM_START_SEC_VAR_NOINIT_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferFloat64Type, COM_VAR_NOINIT) Com_RxSigBufferFloat64[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_Rx, /ActiveEcuC/Com/ComConfig/read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_Rx, /ActiveEcuC/Com/ComConfig/read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_Rx, /ActiveEcuC/Com/ComConfig/read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/read_AcceleratorPedal_Opening_oVCUHV_Receive_oCAN00_487c0bf6_Rx, /ActiveEcuC/Com/ComConfig/read_AcceleratorPedal_Opening_oVCUHV_Receive_oCAN00_487c0bf6_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[18];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/read_ActualGear_Status_oVCUHV_Receive_oCAN00_7e6698b8_Rx, /ActiveEcuC/Com/ComConfig/read_ActualGear_Status_oVCUHV_Receive_oCAN00_7e6698b8_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelayClosed_oVCUHV_Receive_oCAN00_753eb224_Rx, /ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelayClosed_oVCUHV_Receive_oCAN00_753eb224_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelay_Status_oVCUHV_Receive_oCAN00_d2726e8d_Rx, /ActiveEcuC/Com/ComConfig/read_BmsMainNegativeRelay_Status_oVCUHV_Receive_oCAN00_d2726e8d_Rx_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/read_BmsRelayOff_Request_oVCUHV_Receive_oCAN00_80bc2290_Rx, /ActiveEcuC/Com/ComConfig/read_BmsRelayOff_Request_oVCUHV_Receive_oCAN00_80bc2290_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/read_BrakePedal_Status_oVCUHV_Receive_oCAN00_ff534c6b_Rx, /ActiveEcuC/Com/ComConfig/read_BrakePedal_Status_oVCUHV_Receive_oCAN00_ff534c6b_Rx_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/read_DcdcWorking_Status_oVCUHV_Receive_oCAN00_47bf7105_Rx, /ActiveEcuC/Com/ComConfig/read_DcdcWorking_Status_oVCUHV_Receive_oCAN00_47bf7105_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/read_FastChargePlug_Status_oVCUHV_Receive_oCAN00_20825129_Rx, /ActiveEcuC/Com/ComConfig/read_FastChargePlug_Status_oVCUHV_Receive_oCAN00_20825129_Rx_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx, /ActiveEcuC/Com/ComConfig/read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/read_KeyStartSwitch_Signal_oVCUHV_Receive_oCAN00_12b91abc_Rx, /ActiveEcuC/Com/ComConfig/read_KeyStartSwitch_Signal_oVCUHV_Receive_oCAN00_12b91abc_Rx_RxSignalBufferRouting] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/read_McuWorking_Status_oVCUHV_Receive_oCAN00_46e05410_Rx, /ActiveEcuC/Com/ComConfig/read_McuWorking_Status_oVCUHV_Receive_oCAN00_46e05410_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/read_PduMainPrechargeRelay_oVCUHV_Receive_oCAN00_7a304762_Rx, /ActiveEcuC/Com/ComConfig/read_PduMainPrechargeRelay_oVCUHV_Receive_oCAN00_7a304762_Rx_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/read_PduMainRelay_Status_oVCUHV_Receive_oCAN00_4bff4eb0_Rx, /ActiveEcuC/Com/ComConfig/read_PduMainRelay_Status_oVCUHV_Receive_oCAN00_4bff4eb0_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/read_SelfCheck_Status_oVCUHV_Receive_oCAN00_932015b8_Rx, /ActiveEcuC/Com/ComConfig/read_SelfCheck_Status_oVCUHV_Receive_oCAN00_932015b8_Rx_RxSignalBufferRouting] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/read_SlowChargePlug_Status_oVCUHV_Receive_oCAN00_00e8f3f1_Rx, /ActiveEcuC/Com/ComConfig/read_SlowChargePlug_Status_oVCUHV_Receive_oCAN00_00e8f3f1_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/read_VehicleFaultLevel_oVCUHV_Receive_oCAN00_cf14497e_Rx, /ActiveEcuC/Com/ComConfig/read_VehicleFaultLevel_oVCUHV_Receive_oCAN00_cf14497e_Rx_RxSignalBufferRouting] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_Rx, /ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_Rx_RxSignalBufferRouting] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_Rx, /ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_Rx_RxSignalBufferRouting] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_Rx, /ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[16];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_MainPrechargeRelay_Enable_oVCUHV_Send_oCAN00_b12b678a_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_MainRelay_Enable_oVCUHV_Send_oCAN00_10fd8b9a_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_VehicleReady_Status_oVCUHV_Send_oCAN00_8602d488_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_MainNegativeRelay_Enable_oVCUHV_Send_oCAN00_47506650_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_Dcdc_Enable_oVCUHV_Send_oCAN00_ff201339_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_DcdcFault_Status_oVCUHV_Send_oCAN00_1ff6e880_Tx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/write_BmsFault_Status_oVCUHV_Send_oCAN00_3bb6edf6_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/sig_LampCnt_omsg_MyECU_Lamp_oCAN00_f37e68ea_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/sig_RearInteriorLight_omsg_Transmit_oCAN00_49a633c1_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VCUHV_Send_oCAN00_b4e3e134_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/






/**********************************************************************************************************************
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/


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
 *          File:  Rte_VCUHVACT.h
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <VCUHVACT>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VCUHVACT_H
# define _RTE_VCUHVACT_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_VCUHVACT_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_read_AcceleratorPedal_Opening_uint16_t (0U)
#  define Rte_InitValue_read_ActualGear_Status_uint8_t (0U)
#  define Rte_InitValue_read_BmsBatteryTotal_Current_float64 (0.0)
#  define Rte_InitValue_read_BmsBattery_SocValue_float64 (0.0)
#  define Rte_InitValue_read_BmsMainNegativeRelayClosed_Status_uint8_t (0U)
#  define Rte_InitValue_read_BmsMainNegativeRelay_Status_bool (FALSE)
#  define Rte_InitValue_read_BmsRelayOff_Request_uint8_t (0U)
#  define Rte_InitValue_read_BrakePedal_Status_uint8_t (0U)
#  define Rte_InitValue_read_DcdcWorking_Status_uint8_t (0U)
#  define Rte_InitValue_read_FastChargePlug_Status_bool (FALSE)
#  define Rte_InitValue_read_KeyOnSwitch_Signal_bool (FALSE)
#  define Rte_InitValue_read_KeyStartSwitch_Signal_bool (FALSE)
#  define Rte_InitValue_read_McuWorking_Status_uint8_t (0U)
#  define Rte_InitValue_read_PduMainPrechargeRelay_Status_uint8_t (0U)
#  define Rte_InitValue_read_PduMainRelay_Status_uint8_t (0U)
#  define Rte_InitValue_read_SelfCheck_Status_bool (FALSE)
#  define Rte_InitValue_read_SlowChargePlug_Status_bool (FALSE)
#  define Rte_InitValue_read_VehicleFaultLevel_uint8_t (0U)
#  define Rte_InitValue_read_VehicleSpeed_Kph_float64 (0.0)
#  define Rte_InitValue_write_BmsFault_Status_unit8_t (0U)
#  define Rte_InitValue_write_DcdcFault_Status_uint8_t (0U)
#  define Rte_InitValue_write_Dcdc_Enable_uint8_t (0U)
#  define Rte_InitValue_write_MainNegativeRelay_Enable_unit8_t (0U)
#  define Rte_InitValue_write_MainPrechargeRelay_Enable_uint8_t (0U)
#  define Rte_InitValue_write_MainRelay_Enable_uint8_t (0U)
#  define Rte_InitValue_write_VehicleReady_Status_uint8_t (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_BmsFault_Status_unit8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_DcdcFault_Status_uint8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_Dcdc_Enable_uint8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_MainNegativeRelay_Enable_unit8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_MainPrechargeRelay_Enable_uint8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_MainRelay_Enable_uint8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VCUHVACT_write_VehicleReady_Status_uint8_t(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_read_AcceleratorPedal_Opening_uint16_t Rte_Read_VCUHVACT_read_AcceleratorPedal_Opening_uint16_t
#  define Rte_Read_VCUHVACT_read_AcceleratorPedal_Opening_uint16_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_AcceleratorPedal_Opening_oVCUHV_Receive_oCAN00_487c0bf6_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_ActualGear_Status_uint8_t Rte_Read_VCUHVACT_read_ActualGear_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_ActualGear_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_ActualGear_Status_oVCUHV_Receive_oCAN00_7e6698b8_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_BmsBatteryTotal_Current_float64 Rte_Read_VCUHVACT_read_BmsBatteryTotal_Current_float64
#  define Rte_Read_VCUHVACT_read_BmsBatteryTotal_Current_float64(data) (Com_ReceiveSignal(ComConf_ComSignal_read_BmsBatteryTotal_Current_oVCUHV_Receive_oCAN00_a76f589b_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_BmsBattery_SocValue_float64 Rte_Read_VCUHVACT_read_BmsBattery_SocValue_float64
#  define Rte_Read_VCUHVACT_read_BmsBattery_SocValue_float64(data) (Com_ReceiveSignal(ComConf_ComSignal_read_BmsBattery_SocValue_oVCUHV_Receive_oCAN00_270f3267_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_BmsMainNegativeRelayClosed_Status_uint8_t Rte_Read_VCUHVACT_read_BmsMainNegativeRelayClosed_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_BmsMainNegativeRelayClosed_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_BmsMainNegativeRelayClosed_oVCUHV_Receive_oCAN00_753eb224_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_BmsMainNegativeRelay_Status_bool Rte_Read_VCUHVACT_read_BmsMainNegativeRelay_Status_bool
#  define Rte_Read_VCUHVACT_read_BmsMainNegativeRelay_Status_bool(data) (Com_ReceiveSignal(ComConf_ComSignal_read_BmsMainNegativeRelay_Status_oVCUHV_Receive_oCAN00_d2726e8d_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_BmsRelayOff_Request_uint8_t Rte_Read_VCUHVACT_read_BmsRelayOff_Request_uint8_t
#  define Rte_Read_VCUHVACT_read_BmsRelayOff_Request_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_BmsRelayOff_Request_oVCUHV_Receive_oCAN00_80bc2290_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_BrakePedal_Status_uint8_t Rte_Read_VCUHVACT_read_BrakePedal_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_BrakePedal_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_BrakePedal_Status_oVCUHV_Receive_oCAN00_ff534c6b_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_DcdcWorking_Status_uint8_t Rte_Read_VCUHVACT_read_DcdcWorking_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_DcdcWorking_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_DcdcWorking_Status_oVCUHV_Receive_oCAN00_47bf7105_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_FastChargePlug_Status_bool Rte_Read_VCUHVACT_read_FastChargePlug_Status_bool
#  define Rte_Read_VCUHVACT_read_FastChargePlug_Status_bool(data) (Com_ReceiveSignal(ComConf_ComSignal_read_FastChargePlug_Status_oVCUHV_Receive_oCAN00_20825129_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_KeyOnSwitch_Signal_bool Rte_Read_VCUHVACT_read_KeyOnSwitch_Signal_bool
#  define Rte_Read_VCUHVACT_read_KeyOnSwitch_Signal_bool(data) (Com_ReceiveSignal(ComConf_ComSignal_read_KeyONSwitch_Signal_oVCUHV_Receive_oCAN00_cc707b37_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_KeyStartSwitch_Signal_bool Rte_Read_VCUHVACT_read_KeyStartSwitch_Signal_bool
#  define Rte_Read_VCUHVACT_read_KeyStartSwitch_Signal_bool(data) (Com_ReceiveSignal(ComConf_ComSignal_read_KeyStartSwitch_Signal_oVCUHV_Receive_oCAN00_12b91abc_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_McuWorking_Status_uint8_t Rte_Read_VCUHVACT_read_McuWorking_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_McuWorking_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_McuWorking_Status_oVCUHV_Receive_oCAN00_46e05410_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_PduMainPrechargeRelay_Status_uint8_t Rte_Read_VCUHVACT_read_PduMainPrechargeRelay_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_PduMainPrechargeRelay_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_PduMainPrechargeRelay_oVCUHV_Receive_oCAN00_7a304762_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_PduMainRelay_Status_uint8_t Rte_Read_VCUHVACT_read_PduMainRelay_Status_uint8_t
#  define Rte_Read_VCUHVACT_read_PduMainRelay_Status_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_PduMainRelay_Status_oVCUHV_Receive_oCAN00_4bff4eb0_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_SelfCheck_Status_bool Rte_Read_VCUHVACT_read_SelfCheck_Status_bool
#  define Rte_Read_VCUHVACT_read_SelfCheck_Status_bool(data) (Com_ReceiveSignal(ComConf_ComSignal_read_SelfCheck_Status_oVCUHV_Receive_oCAN00_932015b8_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_SlowChargePlug_Status_bool Rte_Read_VCUHVACT_read_SlowChargePlug_Status_bool
#  define Rte_Read_VCUHVACT_read_SlowChargePlug_Status_bool(data) (Com_ReceiveSignal(ComConf_ComSignal_read_SlowChargePlug_Status_oVCUHV_Receive_oCAN00_00e8f3f1_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_VehicleFaultLevel_uint8_t Rte_Read_VCUHVACT_read_VehicleFaultLevel_uint8_t
#  define Rte_Read_VCUHVACT_read_VehicleFaultLevel_uint8_t(data) (Com_ReceiveSignal(ComConf_ComSignal_read_VehicleFaultLevel_oVCUHV_Receive_oCAN00_cf14497e_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_read_VehicleSpeed_Kph_float64 Rte_Read_VCUHVACT_read_VehicleSpeed_Kph_float64
#  define Rte_Read_VCUHVACT_read_VehicleSpeed_Kph_float64(data) (Com_ReceiveSignal(ComConf_ComSignal_read_VehicleSpeed_Kph_oVCUHV_Receive_oCAN00_55e74c51_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_write_BmsFault_Status_unit8_t Rte_Write_VCUHVACT_write_BmsFault_Status_unit8_t
#  define Rte_Write_write_DcdcFault_Status_uint8_t Rte_Write_VCUHVACT_write_DcdcFault_Status_uint8_t
#  define Rte_Write_write_Dcdc_Enable_uint8_t Rte_Write_VCUHVACT_write_Dcdc_Enable_uint8_t
#  define Rte_Write_write_MainNegativeRelay_Enable_unit8_t Rte_Write_VCUHVACT_write_MainNegativeRelay_Enable_unit8_t
#  define Rte_Write_write_MainPrechargeRelay_Enable_uint8_t Rte_Write_VCUHVACT_write_MainPrechargeRelay_Enable_uint8_t
#  define Rte_Write_write_MainRelay_Enable_uint8_t Rte_Write_VCUHVACT_write_MainRelay_Enable_uint8_t
#  define Rte_Write_write_VehicleReady_Status_uint8_t Rte_Write_VCUHVACT_write_VehicleReady_Status_uint8_t


# endif /* !defined(RTE_CORE) */


# define VCUHVACT_START_SEC_CODE
# include "VCUHVACT_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HVAct_100ms HVAct_100ms
# endif

FUNC(void, VCUHVACT_CODE) HVAct_100ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define VCUHVACT_STOP_SEC_CODE
# include "VCUHVACT_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_VCUHVACT_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/

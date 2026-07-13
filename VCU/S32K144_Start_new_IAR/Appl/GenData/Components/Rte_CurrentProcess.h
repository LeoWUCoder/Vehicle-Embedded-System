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
 *          File:  Rte_CurrentProcess.h
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <CurrentProcess>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CURRENTPROCESS_H
# define _RTE_CURRENTPROCESS_H

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

# include "Rte_CurrentProcess_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_DoorStatus_DoorStatus (0U)
#  define Rte_InitValue_rawCurrentData_rawCurrentData (32768U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrentProcess_rawCurrentData_rawCurrentData(P2VAR(rawCurrentData, AUTOMATIC, RTE_CURRENTPROCESS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DoorStatus_DoorStatus Rte_Read_CurrentProcess_DoorStatus_DoorStatus
#  define Rte_Read_CurrentProcess_DoorStatus_DoorStatus(data) (Com_ReceiveSignal(ComConf_ComSignal_DoorStatus_oBodyStatus_oCAN00_ae48aece_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_rawCurrentData_rawCurrentData Rte_Read_CurrentProcess_rawCurrentData_rawCurrentData


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_current_data Rte_Write_CurrentProcess_current_data
#  define Rte_Write_CurrentProcess_current_data(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_currentInvalid_data Rte_Write_CurrentProcess_currentInvalid_data
#  define Rte_Write_CurrentProcess_currentInvalid_data(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CurrentProcess_START_SEC_CODE
# include "CurrentProcess_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Runnable_CurrentProcess Runnable_CurrentProcess
# endif

FUNC(void, CurrentProcess_CODE) Runnable_CurrentProcess(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CurrentProcess_STOP_SEC_CODE
# include "CurrentProcess_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CURRENTPROCESS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/

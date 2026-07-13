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
 *        Config:  D:\Vector SIP\SIP-S32K14x\AUTOSAR_TOOLs\S32K144_SIP\MICROSAR\CBD1800257_D01_S32K1xx\DaVinciConfigurator\Core/"D:/Vector SIP/SIP-S32K14x/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa"
 *     SW-C Type:  CurrentProcess
 *  Generated at:  Fri Jan 30 11:22:39 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <CurrentProcess> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CURRENTPROCESS_H
# define _RTE_CURRENTPROCESS_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CurrentProcess_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CurrentProcess
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CurrentProcess, RTE_CONST, RTE_CONST) Rte_Inst_CurrentProcess; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CurrentProcess, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DoorStatus_DoorStatus (0U)
# define Rte_InitValue_rawCurrentData_rawCurrentData (32768U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrentProcess_DoorStatus_DoorStatus(P2VAR(DoorStatus, AUTOMATIC, RTE_CURRENTPROCESS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CurrentProcess_rawCurrentData_rawCurrentData(P2VAR(rawCurrentData, AUTOMATIC, RTE_CURRENTPROCESS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CurrentProcess_current_data(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CurrentProcess_currentInvalid_data(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DoorStatus_DoorStatus Rte_Read_CurrentProcess_DoorStatus_DoorStatus
# define Rte_Read_rawCurrentData_rawCurrentData Rte_Read_CurrentProcess_rawCurrentData_rawCurrentData


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_current_data Rte_Write_CurrentProcess_current_data
# define Rte_Write_currentInvalid_data Rte_Write_CurrentProcess_currentInvalid_data




# define CurrentProcess_START_SEC_CODE
# include "CurrentProcess_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Runnable_CurrentProcess
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DoorStatus_DoorStatus(DoorStatus *data)
 *   Std_ReturnType Rte_Read_rawCurrentData_rawCurrentData(rawCurrentData *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_current_data(float32 data)
 *   Std_ReturnType Rte_Write_currentInvalid_data(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Runnable_CurrentProcess Runnable_CurrentProcess
FUNC(void, CurrentProcess_CODE) Runnable_CurrentProcess(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CurrentProcess_STOP_SEC_CODE
# include "CurrentProcess_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CURRENTPROCESS_H */

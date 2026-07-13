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
 *          File:  Rte_A.h
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <A>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_A_H
# define _RTE_A_H

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

# include "Rte_A_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_NOINIT) Rte_A_A_data_Element1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_A_A_data_Element2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_A_WindowStatus_1_data; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_A_data_Element1 (0U)
#  define Rte_InitValue_A_data_Element2 (0U)
#  define Rte_InitValue_DoorStatus_data (0U)
#  define Rte_InitValue_HeadLampStatus_data (0U)
#  define Rte_InitValue_SteeringWheelAngle_Element (0)
#  define Rte_InitValue_WindowStatus_data (0U)
#  define Rte_InitValue_WindowStatus_1_data (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DoorStatus_data Rte_Read_A_DoorStatus_data
#  define Rte_Read_A_DoorStatus_data(data) (Com_ReceiveSignal(ComConf_ComSignal_DoorStatus_oBodyStatus_oCAN00_ae48aece_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HeadLampStatus_data Rte_Read_A_HeadLampStatus_data
#  define Rte_Read_A_HeadLampStatus_data(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SteeringWheelAngle_Element Rte_Read_A_SteeringWheelAngle_Element
#  define Rte_Read_A_SteeringWheelAngle_Element(data) (*(data) = 0, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WindowStatus_data Rte_Read_A_WindowStatus_data
#  define Rte_Read_A_WindowStatus_data(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_A_data_Element1 Rte_Write_A_A_data_Element1
#  define Rte_Write_A_A_data_Element1(data) (Rte_A_A_data_Element1 = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_A_data_Element2 Rte_Write_A_A_data_Element2
#  define Rte_Write_A_A_data_Element2(data) (Rte_A_A_data_Element2 = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_WindowStatus_1_data Rte_Write_A_WindowStatus_1_data
#  define Rte_Write_A_WindowStatus_1_data(data) (Rte_A_WindowStatus_1_data = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define A_START_SEC_CODE
# include "A_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RunnableA RunnableA
# endif

FUNC(void, A_CODE) RunnableA(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define A_STOP_SEC_CODE
# include "A_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_A_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/

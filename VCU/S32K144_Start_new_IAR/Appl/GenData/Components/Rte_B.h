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
 *          File:  Rte_B.h
 *        Config:  S32K144_Start.dpa"
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <B>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_B_H
# define _RTE_B_H

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

# ifndef RTE_CORE
#  define RTE_MULTI_INST_API
# endif

/* include files */

# include "Rte_B_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef uint8 Rte_Instance; /* PRQA S 1508 */ /* MD_Rte_1508 */
# endif

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_NOINIT) Rte_B_DoorStatus_1_data; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_NOINIT) Rte_A_A_data_Element1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_A_A_data_Element2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_A_data_Element1 (0U)
#  define Rte_InitValue_A_data_Element2 (0U)
#  define Rte_InitValue_A_data_1_Element1 (0U)
#  define Rte_InitValue_A_data_1_Element2 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage01 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage02 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage03 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage04 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage05 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage06 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage07 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage08 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage09 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage10 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage11 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage12 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage13 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage14 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage15 (0U)
#  define Rte_InitValue_CellVoltage_CellVoltage16 (0U)
#  define Rte_InitValue_DoorStatus_1_data (0U)
#  define Rte_InitValue_DriverSeatHeatStatus_DriverSeatHeatStatus (0U)
#  define Rte_InitValue_DriverSeatHeatStatus_1_DriverSeatHeatStatus (0U)
#  define Rte_InitValue_HeadLampStatus_data (0U)
#  define Rte_InitValue_SteeringWheelAngle_Element (0)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage01(CellVoltage01 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage02(CellVoltage02 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage03(CellVoltage03 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage04(CellVoltage04 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage05(CellVoltage05 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage06(CellVoltage06 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage07(CellVoltage07 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage08(CellVoltage08 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage09(CellVoltage09 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage10(CellVoltage10 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage11(CellVoltage11 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage12(CellVoltage12 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage13(CellVoltage13 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage14(CellVoltage14 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage15(CellVoltage15 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_CellVoltage_CellVoltage16(CellVoltage16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_B_DriverSeatHeatStatus_1_DriverSeatHeatStatus(DriverSeatHeatStatus data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_A_data_Element1(self, data) Rte_Read_B_A_data_Element1(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_B_A_data_Element1(data) (*(data) = Rte_A_A_data_Element1, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_A_data_Element2(self, data) Rte_Read_B_A_data_Element2(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_B_A_data_Element2(data) (*(data) = Rte_A_A_data_Element2, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_A_data_1_Element1(self, data) Rte_Read_B_A_data_1_Element1(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_B_A_data_1_Element1(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_A_data_1_Element2(self, data) Rte_Read_B_A_data_1_Element2(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_B_A_data_1_Element2(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DoorStatus_data(self, data) Rte_Read_B_DoorStatus_data(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_B_DoorStatus_data(data) (Com_ReceiveSignal(ComConf_ComSignal_DoorStatus_oBodyStatus_oCAN00_ae48aece_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_CellVoltage_CellVoltage01(self, data) Rte_Write_B_CellVoltage_CellVoltage01(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage02(self, data) Rte_Write_B_CellVoltage_CellVoltage02(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage03(self, data) Rte_Write_B_CellVoltage_CellVoltage03(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage04(self, data) Rte_Write_B_CellVoltage_CellVoltage04(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage05(self, data) Rte_Write_B_CellVoltage_CellVoltage05(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage06(self, data) Rte_Write_B_CellVoltage_CellVoltage06(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage07(self, data) Rte_Write_B_CellVoltage_CellVoltage07(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage08(self, data) Rte_Write_B_CellVoltage_CellVoltage08(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage09(self, data) Rte_Write_B_CellVoltage_CellVoltage09(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage10(self, data) Rte_Write_B_CellVoltage_CellVoltage10(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage11(self, data) Rte_Write_B_CellVoltage_CellVoltage11(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage12(self, data) Rte_Write_B_CellVoltage_CellVoltage12(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage13(self, data) Rte_Write_B_CellVoltage_CellVoltage13(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage14(self, data) Rte_Write_B_CellVoltage_CellVoltage14(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage15(self, data) Rte_Write_B_CellVoltage_CellVoltage15(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CellVoltage_CellVoltage16(self, data) Rte_Write_B_CellVoltage_CellVoltage16(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DoorStatus_1_data(self, data) Rte_Write_B_DoorStatus_1_data(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_B_DoorStatus_1_data(data) (Rte_B_DoorStatus_1_data = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(self, data) Rte_Write_B_DriverSeatHeatStatus_DriverSeatHeatStatus(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_B_DriverSeatHeatStatus_DriverSeatHeatStatus(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(self, data) Rte_Write_B_DriverSeatHeatStatus_1_DriverSeatHeatStatus(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HeadLampStatus_data(self, data) Rte_Write_B_HeadLampStatus_data(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_B_HeadLampStatus_data(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SteeringWheelAngle_Element(self, data) Rte_Write_B_SteeringWheelAngle_Element(data) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_B_SteeringWheelAngle_Element(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define B_START_SEC_CODE
# include "B_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RunnableB RunnableB
# endif

FUNC(void, B_CODE) RunnableB(uint8 self); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define B_STOP_SEC_CODE
# include "B_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_B_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1508:  MISRA rule: 5.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/

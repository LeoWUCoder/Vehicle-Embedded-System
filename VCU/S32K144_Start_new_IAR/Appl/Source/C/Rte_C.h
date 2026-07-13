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
 *          File:  Rte_C.h
 *        Config:  D:\Vector SIP\SIP-S32K14x\AUTOSAR_TOOLs\S32K144_SIP\MICROSAR\CBD1800257_D01_S32K1xx\DaVinciConfigurator\Core/"D:/Vector SIP/SIP-S32K14x/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa"
 *     SW-C Type:  C
 *  Generated at:  Sun Jan 11 22:42:41 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <C> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_C_H
# define _RTE_C_H

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

# include "Rte_C_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_C
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_C, RTE_CONST, RTE_CONST) Rte_Inst_C; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_C, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_A_data_Element1 (0U)
# define Rte_InitValue_A_data_Element2 (0U)
# define Rte_InitValue_DoorStatus_data (0U)
# define Rte_InitValue_HeadLampStatus_data (0U)
# define Rte_InitValue_SteeringWheelAngle_Element (0)
# define Rte_InitValue_WindowStatus_data (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_C_DoorStatus_data(P2VAR(uint8, AUTOMATIC, RTE_C_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_C_HeadLampStatus_data(P2VAR(uint8, AUTOMATIC, RTE_C_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_C_SteeringWheelAngle_Element(P2VAR(sint16, AUTOMATIC, RTE_C_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_C_WindowStatus_data(P2VAR(uint8, AUTOMATIC, RTE_C_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_C_A_data_Element1(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_C_A_data_Element2(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DoorStatus_data Rte_Read_C_DoorStatus_data
# define Rte_Read_HeadLampStatus_data Rte_Read_C_HeadLampStatus_data
# define Rte_Read_SteeringWheelAngle_Element Rte_Read_C_SteeringWheelAngle_Element
# define Rte_Read_WindowStatus_data Rte_Read_C_WindowStatus_data


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_A_data_Element1 Rte_Write_C_A_data_Element1
# define Rte_Write_A_data_Element2 Rte_Write_C_A_data_Element2




# define C_START_SEC_CODE
# include "C_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RunnableC1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DoorStatus_data(uint8 *data)
 *   Std_ReturnType Rte_Read_HeadLampStatus_data(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_A_data_Element1(uint16 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RunnableC1 RunnableC1
FUNC(void, C_CODE) RunnableC1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RunnableC2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1s
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SteeringWheelAngle_Element(sint16 *data)
 *   Std_ReturnType Rte_Read_WindowStatus_data(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_A_data_Element2(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RunnableC2 RunnableC2
FUNC(void, C_CODE) RunnableC2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define C_STOP_SEC_CODE
# include "C_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_C_H */

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
 *        Config:  D:\Vector SIP\SIP-S32K14x\AUTOSAR_TOOLs\S32K144_SIP\MICROSAR\CBD1800257_D01_S32K1xx\DaVinciConfigurator\Core/"D:/Vector SIP/SIP-S32K14x/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa"
 *     SW-C Type:  B
 *  Generated at:  Sun Jan 11 22:42:41 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <B> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_B_H
# define _RTE_B_H

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

# define RTE_MULTI_INST_API

/* include files */

# include "Rte_B_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_PDS_B_CellVoltage_P
{
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage01) (CellVoltage01); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage02) (CellVoltage02); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage03) (CellVoltage03); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage04) (CellVoltage04); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage05) (CellVoltage05); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage06) (CellVoltage06); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage07) (CellVoltage07); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage08) (CellVoltage08); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage09) (CellVoltage09); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage10) (CellVoltage10); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage11) (CellVoltage11); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage12) (CellVoltage12); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage13) (CellVoltage13); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage14) (CellVoltage14); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage15) (CellVoltage15); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Write_CellVoltage16) (CellVoltage16); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_B_DoorStatus_R
{
  P2FUNC(Std_ReturnType, RTE_CODE, Read_data) (P2VAR(DoorStatus, AUTOMATIC, RTE_B_APPL_VAR)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_B_DriverSeatHeatStatus_P
{
  P2FUNC(Std_ReturnType, RTE_CODE, Write_DriverSeatHeatStatus) (DriverSeatHeatStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_B_DriverSeatHeatStatus_2_P
{
  P2FUNC(Std_ReturnType, RTE_CODE, Write_DriverSeatHeatStatus) (DriverSeatHeatStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_B_int16data_P
{
  P2FUNC(Std_ReturnType, RTE_CODE, Write_Element) (sint16); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_B_port01_R
{
  P2FUNC(Std_ReturnType, RTE_CODE, Read_Element1) (P2VAR(uint16, AUTOMATIC, RTE_B_APPL_VAR)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2FUNC(Std_ReturnType, RTE_CODE, Read_Element2) (P2VAR(uint8, AUTOMATIC, RTE_B_APPL_VAR)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_PDS_B_uint8data_P
{
  P2FUNC(Std_ReturnType, RTE_CODE, Write_data) (uint8); /* PRQA S 0850 */ /* MD_MSR_19.8 */
};

struct Rte_CDS_B
{
  /* Port API section */
  struct Rte_PDS_B_CellVoltage_P CellVoltage;
  struct Rte_PDS_B_DoorStatus_R DoorStatus;
  struct Rte_PDS_B_DriverSeatHeatStatus_2_P DriverSeatHeatStatus_1;
  struct Rte_PDS_B_DriverSeatHeatStatus_P DriverSeatHeatStatus;
  struct Rte_PDS_B_int16data_P SteeringWheelAngle;
  struct Rte_PDS_B_port01_R A_data;
  struct Rte_PDS_B_port01_R A_data_1;
  struct Rte_PDS_B_uint8data_P DoorStatus_1;
  struct Rte_PDS_B_uint8data_P HeadLampStatus;
  /* Instance Id section */
  uint8 Instance_Id;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_B, RTE_CONST, RTE_CONST) Rte_Inst_B; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_B, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_A_data_Element1 (0U)
# define Rte_InitValue_A_data_Element2 (0U)
# define Rte_InitValue_A_data_1_Element1 (0U)
# define Rte_InitValue_A_data_1_Element2 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage01 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage02 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage03 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage04 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage05 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage06 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage07 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage08 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage09 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage10 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage11 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage12 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage13 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage14 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage15 (0U)
# define Rte_InitValue_CellVoltage_CellVoltage16 (0U)
# define Rte_InitValue_DoorStatus_1_data (0U)
# define Rte_InitValue_DriverSeatHeatStatus_DriverSeatHeatStatus (0U)
# define Rte_InitValue_DriverSeatHeatStatus_1_DriverSeatHeatStatus (0U)
# define Rte_InitValue_HeadLampStatus_data (0U)
# define Rte_InitValue_SteeringWheelAngle_Element (0)



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_A_data_Element1(self, data) ((self)->A_data.Read_Element1(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Read_A_data_Element2(self, data) ((self)->A_data.Read_Element2(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Read_A_data_1_Element1(self, data) ((self)->A_data_1.Read_Element1(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Read_A_data_1_Element2(self, data) ((self)->A_data_1.Read_Element2(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Read_DoorStatus_data(self, data) ((self)->DoorStatus.Read_data(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CellVoltage_CellVoltage01(self, data) ((self)->CellVoltage.Write_CellVoltage01(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage02(self, data) ((self)->CellVoltage.Write_CellVoltage02(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage03(self, data) ((self)->CellVoltage.Write_CellVoltage03(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage04(self, data) ((self)->CellVoltage.Write_CellVoltage04(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage05(self, data) ((self)->CellVoltage.Write_CellVoltage05(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage06(self, data) ((self)->CellVoltage.Write_CellVoltage06(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage07(self, data) ((self)->CellVoltage.Write_CellVoltage07(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage08(self, data) ((self)->CellVoltage.Write_CellVoltage08(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage09(self, data) ((self)->CellVoltage.Write_CellVoltage09(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage10(self, data) ((self)->CellVoltage.Write_CellVoltage10(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage11(self, data) ((self)->CellVoltage.Write_CellVoltage11(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage12(self, data) ((self)->CellVoltage.Write_CellVoltage12(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage13(self, data) ((self)->CellVoltage.Write_CellVoltage13(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage14(self, data) ((self)->CellVoltage.Write_CellVoltage14(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage15(self, data) ((self)->CellVoltage.Write_CellVoltage15(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_CellVoltage_CellVoltage16(self, data) ((self)->CellVoltage.Write_CellVoltage16(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_DoorStatus_1_data(self, data) ((self)->DoorStatus_1.Write_data(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(self, data) ((self)->DriverSeatHeatStatus.Write_DriverSeatHeatStatus(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(self, data) ((self)->DriverSeatHeatStatus_1.Write_DriverSeatHeatStatus(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_HeadLampStatus_data(self, data) ((self)->HeadLampStatus.Write_data(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_Write_SteeringWheelAngle_Element(self, data) ((self)->SteeringWheelAngle.Write_Element(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */




# define B_START_SEC_CODE
# include "B_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RunnableB
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
 *   Std_ReturnType Rte_Read_A_data_Element1(Rte_Instance self, uint16 *data)
 *   Std_ReturnType Rte_Read_A_data_Element2(Rte_Instance self, uint8 *data)
 *   Std_ReturnType Rte_Read_A_data_1_Element1(Rte_Instance self, uint16 *data)
 *   Std_ReturnType Rte_Read_A_data_1_Element2(Rte_Instance self, uint8 *data)
 *   Std_ReturnType Rte_Read_DoorStatus_data(Rte_Instance self, DoorStatus *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage01(Rte_Instance self, CellVoltage01 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage02(Rte_Instance self, CellVoltage02 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage03(Rte_Instance self, CellVoltage03 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage04(Rte_Instance self, CellVoltage04 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage05(Rte_Instance self, CellVoltage05 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage06(Rte_Instance self, CellVoltage06 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage07(Rte_Instance self, CellVoltage07 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage08(Rte_Instance self, CellVoltage08 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage09(Rte_Instance self, CellVoltage09 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage10(Rte_Instance self, CellVoltage10 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage11(Rte_Instance self, CellVoltage11 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage12(Rte_Instance self, CellVoltage12 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage13(Rte_Instance self, CellVoltage13 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage14(Rte_Instance self, CellVoltage14 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage15(Rte_Instance self, CellVoltage15 data)
 *   Std_ReturnType Rte_Write_CellVoltage_CellVoltage16(Rte_Instance self, CellVoltage16 data)
 *   Std_ReturnType Rte_Write_DoorStatus_1_data(Rte_Instance self, uint8 data)
 *   Std_ReturnType Rte_Write_DriverSeatHeatStatus_DriverSeatHeatStatus(Rte_Instance self, DriverSeatHeatStatus data)
 *   Std_ReturnType Rte_Write_DriverSeatHeatStatus_1_DriverSeatHeatStatus(Rte_Instance self, DriverSeatHeatStatus data)
 *   Std_ReturnType Rte_Write_HeadLampStatus_data(Rte_Instance self, uint8 data)
 *   Std_ReturnType Rte_Write_SteeringWheelAngle_Element(Rte_Instance self, sint16 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RunnableB RunnableB
FUNC(void, B_CODE) RunnableB(Rte_Instance self); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define B_STOP_SEC_CODE
# include "B_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_B_H */

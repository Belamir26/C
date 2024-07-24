/*******************************************************************************
* File Name: Teclado_Columns.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Teclado_Columns_ALIASES_H) /* Pins Teclado_Columns_ALIASES_H */
#define CY_PINS_Teclado_Columns_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Teclado_Columns_0			(Teclado_Columns__0__PC)
#define Teclado_Columns_0_INTR	((uint16)((uint16)0x0001u << Teclado_Columns__0__SHIFT))

#define Teclado_Columns_1			(Teclado_Columns__1__PC)
#define Teclado_Columns_1_INTR	((uint16)((uint16)0x0001u << Teclado_Columns__1__SHIFT))

#define Teclado_Columns_2			(Teclado_Columns__2__PC)
#define Teclado_Columns_2_INTR	((uint16)((uint16)0x0001u << Teclado_Columns__2__SHIFT))

#define Teclado_Columns_3			(Teclado_Columns__3__PC)
#define Teclado_Columns_3_INTR	((uint16)((uint16)0x0001u << Teclado_Columns__3__SHIFT))

#define Teclado_Columns_INTR_ALL	 ((uint16)(Teclado_Columns_0_INTR| Teclado_Columns_1_INTR| Teclado_Columns_2_INTR| Teclado_Columns_3_INTR))

#endif /* End Pins Teclado_Columns_ALIASES_H */


/* [] END OF FILE */

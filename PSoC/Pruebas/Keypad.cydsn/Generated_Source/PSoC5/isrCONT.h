/*******************************************************************************
* File Name: isrCONT.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_isrCONT_H)
#define CY_ISR_isrCONT_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isrCONT_Start(void);
void isrCONT_StartEx(cyisraddress address);
void isrCONT_Stop(void);

CY_ISR_PROTO(isrCONT_Interrupt);

void isrCONT_SetVector(cyisraddress address);
cyisraddress isrCONT_GetVector(void);

void isrCONT_SetPriority(uint8 priority);
uint8 isrCONT_GetPriority(void);

void isrCONT_Enable(void);
uint8 isrCONT_GetState(void);
void isrCONT_Disable(void);

void isrCONT_SetPending(void);
void isrCONT_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isrCONT ISR. */
#define isrCONT_INTC_VECTOR            ((reg32 *) isrCONT__INTC_VECT)

/* Address of the isrCONT ISR priority. */
#define isrCONT_INTC_PRIOR             ((reg8 *) isrCONT__INTC_PRIOR_REG)

/* Priority of the isrCONT interrupt. */
#define isrCONT_INTC_PRIOR_NUMBER      isrCONT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isrCONT interrupt. */
#define isrCONT_INTC_SET_EN            ((reg32 *) isrCONT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isrCONT interrupt. */
#define isrCONT_INTC_CLR_EN            ((reg32 *) isrCONT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isrCONT interrupt state to pending. */
#define isrCONT_INTC_SET_PD            ((reg32 *) isrCONT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isrCONT interrupt. */
#define isrCONT_INTC_CLR_PD            ((reg32 *) isrCONT__INTC_CLR_PD_REG)


#endif /* CY_ISR_isrCONT_H */


/* [] END OF FILE */

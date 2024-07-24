/*******************************************************************************
* File Name: isrTEC.h
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
#if !defined(CY_ISR_isrTEC_H)
#define CY_ISR_isrTEC_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isrTEC_Start(void);
void isrTEC_StartEx(cyisraddress address);
void isrTEC_Stop(void);

CY_ISR_PROTO(isrTEC_Interrupt);

void isrTEC_SetVector(cyisraddress address);
cyisraddress isrTEC_GetVector(void);

void isrTEC_SetPriority(uint8 priority);
uint8 isrTEC_GetPriority(void);

void isrTEC_Enable(void);
uint8 isrTEC_GetState(void);
void isrTEC_Disable(void);

void isrTEC_SetPending(void);
void isrTEC_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isrTEC ISR. */
#define isrTEC_INTC_VECTOR            ((reg32 *) isrTEC__INTC_VECT)

/* Address of the isrTEC ISR priority. */
#define isrTEC_INTC_PRIOR             ((reg8 *) isrTEC__INTC_PRIOR_REG)

/* Priority of the isrTEC interrupt. */
#define isrTEC_INTC_PRIOR_NUMBER      isrTEC__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isrTEC interrupt. */
#define isrTEC_INTC_SET_EN            ((reg32 *) isrTEC__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isrTEC interrupt. */
#define isrTEC_INTC_CLR_EN            ((reg32 *) isrTEC__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isrTEC interrupt state to pending. */
#define isrTEC_INTC_SET_PD            ((reg32 *) isrTEC__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isrTEC interrupt. */
#define isrTEC_INTC_CLR_PD            ((reg32 *) isrTEC__INTC_CLR_PD_REG)


#endif /* CY_ISR_isrTEC_H */


/* [] END OF FILE */

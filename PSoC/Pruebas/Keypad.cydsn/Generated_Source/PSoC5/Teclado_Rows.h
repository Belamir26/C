/*******************************************************************************
* File Name: Teclado_Rows.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Teclado_Rows_H) /* Pins Teclado_Rows_H */
#define CY_PINS_Teclado_Rows_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Teclado_Rows_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Teclado_Rows__PORT == 15 && ((Teclado_Rows__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Teclado_Rows_Write(uint8 value);
void    Teclado_Rows_SetDriveMode(uint8 mode);
uint8   Teclado_Rows_ReadDataReg(void);
uint8   Teclado_Rows_Read(void);
void    Teclado_Rows_SetInterruptMode(uint16 position, uint16 mode);
uint8   Teclado_Rows_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Teclado_Rows_SetDriveMode() function.
     *  @{
     */
        #define Teclado_Rows_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Teclado_Rows_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Teclado_Rows_DM_RES_UP          PIN_DM_RES_UP
        #define Teclado_Rows_DM_RES_DWN         PIN_DM_RES_DWN
        #define Teclado_Rows_DM_OD_LO           PIN_DM_OD_LO
        #define Teclado_Rows_DM_OD_HI           PIN_DM_OD_HI
        #define Teclado_Rows_DM_STRONG          PIN_DM_STRONG
        #define Teclado_Rows_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Teclado_Rows_MASK               Teclado_Rows__MASK
#define Teclado_Rows_SHIFT              Teclado_Rows__SHIFT
#define Teclado_Rows_WIDTH              4u

/* Interrupt constants */
#if defined(Teclado_Rows__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Teclado_Rows_SetInterruptMode() function.
     *  @{
     */
        #define Teclado_Rows_INTR_NONE      (uint16)(0x0000u)
        #define Teclado_Rows_INTR_RISING    (uint16)(0x0001u)
        #define Teclado_Rows_INTR_FALLING   (uint16)(0x0002u)
        #define Teclado_Rows_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Teclado_Rows_INTR_MASK      (0x01u) 
#endif /* (Teclado_Rows__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Teclado_Rows_PS                     (* (reg8 *) Teclado_Rows__PS)
/* Data Register */
#define Teclado_Rows_DR                     (* (reg8 *) Teclado_Rows__DR)
/* Port Number */
#define Teclado_Rows_PRT_NUM                (* (reg8 *) Teclado_Rows__PRT) 
/* Connect to Analog Globals */                                                  
#define Teclado_Rows_AG                     (* (reg8 *) Teclado_Rows__AG)                       
/* Analog MUX bux enable */
#define Teclado_Rows_AMUX                   (* (reg8 *) Teclado_Rows__AMUX) 
/* Bidirectional Enable */                                                        
#define Teclado_Rows_BIE                    (* (reg8 *) Teclado_Rows__BIE)
/* Bit-mask for Aliased Register Access */
#define Teclado_Rows_BIT_MASK               (* (reg8 *) Teclado_Rows__BIT_MASK)
/* Bypass Enable */
#define Teclado_Rows_BYP                    (* (reg8 *) Teclado_Rows__BYP)
/* Port wide control signals */                                                   
#define Teclado_Rows_CTL                    (* (reg8 *) Teclado_Rows__CTL)
/* Drive Modes */
#define Teclado_Rows_DM0                    (* (reg8 *) Teclado_Rows__DM0) 
#define Teclado_Rows_DM1                    (* (reg8 *) Teclado_Rows__DM1)
#define Teclado_Rows_DM2                    (* (reg8 *) Teclado_Rows__DM2) 
/* Input Buffer Disable Override */
#define Teclado_Rows_INP_DIS                (* (reg8 *) Teclado_Rows__INP_DIS)
/* LCD Common or Segment Drive */
#define Teclado_Rows_LCD_COM_SEG            (* (reg8 *) Teclado_Rows__LCD_COM_SEG)
/* Enable Segment LCD */
#define Teclado_Rows_LCD_EN                 (* (reg8 *) Teclado_Rows__LCD_EN)
/* Slew Rate Control */
#define Teclado_Rows_SLW                    (* (reg8 *) Teclado_Rows__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Teclado_Rows_PRTDSI__CAPS_SEL       (* (reg8 *) Teclado_Rows__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Teclado_Rows_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Teclado_Rows__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Teclado_Rows_PRTDSI__OE_SEL0        (* (reg8 *) Teclado_Rows__PRTDSI__OE_SEL0) 
#define Teclado_Rows_PRTDSI__OE_SEL1        (* (reg8 *) Teclado_Rows__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Teclado_Rows_PRTDSI__OUT_SEL0       (* (reg8 *) Teclado_Rows__PRTDSI__OUT_SEL0) 
#define Teclado_Rows_PRTDSI__OUT_SEL1       (* (reg8 *) Teclado_Rows__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Teclado_Rows_PRTDSI__SYNC_OUT       (* (reg8 *) Teclado_Rows__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Teclado_Rows__SIO_CFG)
    #define Teclado_Rows_SIO_HYST_EN        (* (reg8 *) Teclado_Rows__SIO_HYST_EN)
    #define Teclado_Rows_SIO_REG_HIFREQ     (* (reg8 *) Teclado_Rows__SIO_REG_HIFREQ)
    #define Teclado_Rows_SIO_CFG            (* (reg8 *) Teclado_Rows__SIO_CFG)
    #define Teclado_Rows_SIO_DIFF           (* (reg8 *) Teclado_Rows__SIO_DIFF)
#endif /* (Teclado_Rows__SIO_CFG) */

/* Interrupt Registers */
#if defined(Teclado_Rows__INTSTAT)
    #define Teclado_Rows_INTSTAT            (* (reg8 *) Teclado_Rows__INTSTAT)
    #define Teclado_Rows_SNAP               (* (reg8 *) Teclado_Rows__SNAP)
    
	#define Teclado_Rows_0_INTTYPE_REG 		(* (reg8 *) Teclado_Rows__0__INTTYPE)
	#define Teclado_Rows_1_INTTYPE_REG 		(* (reg8 *) Teclado_Rows__1__INTTYPE)
	#define Teclado_Rows_2_INTTYPE_REG 		(* (reg8 *) Teclado_Rows__2__INTTYPE)
	#define Teclado_Rows_3_INTTYPE_REG 		(* (reg8 *) Teclado_Rows__3__INTTYPE)
#endif /* (Teclado_Rows__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Teclado_Rows_H */


/* [] END OF FILE */

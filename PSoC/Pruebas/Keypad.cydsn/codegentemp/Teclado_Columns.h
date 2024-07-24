/*******************************************************************************
* File Name: Teclado_Columns.h  
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

#if !defined(CY_PINS_Teclado_Columns_H) /* Pins Teclado_Columns_H */
#define CY_PINS_Teclado_Columns_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Teclado_Columns_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Teclado_Columns__PORT == 15 && ((Teclado_Columns__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Teclado_Columns_Write(uint8 value);
void    Teclado_Columns_SetDriveMode(uint8 mode);
uint8   Teclado_Columns_ReadDataReg(void);
uint8   Teclado_Columns_Read(void);
void    Teclado_Columns_SetInterruptMode(uint16 position, uint16 mode);
uint8   Teclado_Columns_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Teclado_Columns_SetDriveMode() function.
     *  @{
     */
        #define Teclado_Columns_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Teclado_Columns_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Teclado_Columns_DM_RES_UP          PIN_DM_RES_UP
        #define Teclado_Columns_DM_RES_DWN         PIN_DM_RES_DWN
        #define Teclado_Columns_DM_OD_LO           PIN_DM_OD_LO
        #define Teclado_Columns_DM_OD_HI           PIN_DM_OD_HI
        #define Teclado_Columns_DM_STRONG          PIN_DM_STRONG
        #define Teclado_Columns_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Teclado_Columns_MASK               Teclado_Columns__MASK
#define Teclado_Columns_SHIFT              Teclado_Columns__SHIFT
#define Teclado_Columns_WIDTH              4u

/* Interrupt constants */
#if defined(Teclado_Columns__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Teclado_Columns_SetInterruptMode() function.
     *  @{
     */
        #define Teclado_Columns_INTR_NONE      (uint16)(0x0000u)
        #define Teclado_Columns_INTR_RISING    (uint16)(0x0001u)
        #define Teclado_Columns_INTR_FALLING   (uint16)(0x0002u)
        #define Teclado_Columns_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Teclado_Columns_INTR_MASK      (0x01u) 
#endif /* (Teclado_Columns__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Teclado_Columns_PS                     (* (reg8 *) Teclado_Columns__PS)
/* Data Register */
#define Teclado_Columns_DR                     (* (reg8 *) Teclado_Columns__DR)
/* Port Number */
#define Teclado_Columns_PRT_NUM                (* (reg8 *) Teclado_Columns__PRT) 
/* Connect to Analog Globals */                                                  
#define Teclado_Columns_AG                     (* (reg8 *) Teclado_Columns__AG)                       
/* Analog MUX bux enable */
#define Teclado_Columns_AMUX                   (* (reg8 *) Teclado_Columns__AMUX) 
/* Bidirectional Enable */                                                        
#define Teclado_Columns_BIE                    (* (reg8 *) Teclado_Columns__BIE)
/* Bit-mask for Aliased Register Access */
#define Teclado_Columns_BIT_MASK               (* (reg8 *) Teclado_Columns__BIT_MASK)
/* Bypass Enable */
#define Teclado_Columns_BYP                    (* (reg8 *) Teclado_Columns__BYP)
/* Port wide control signals */                                                   
#define Teclado_Columns_CTL                    (* (reg8 *) Teclado_Columns__CTL)
/* Drive Modes */
#define Teclado_Columns_DM0                    (* (reg8 *) Teclado_Columns__DM0) 
#define Teclado_Columns_DM1                    (* (reg8 *) Teclado_Columns__DM1)
#define Teclado_Columns_DM2                    (* (reg8 *) Teclado_Columns__DM2) 
/* Input Buffer Disable Override */
#define Teclado_Columns_INP_DIS                (* (reg8 *) Teclado_Columns__INP_DIS)
/* LCD Common or Segment Drive */
#define Teclado_Columns_LCD_COM_SEG            (* (reg8 *) Teclado_Columns__LCD_COM_SEG)
/* Enable Segment LCD */
#define Teclado_Columns_LCD_EN                 (* (reg8 *) Teclado_Columns__LCD_EN)
/* Slew Rate Control */
#define Teclado_Columns_SLW                    (* (reg8 *) Teclado_Columns__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Teclado_Columns_PRTDSI__CAPS_SEL       (* (reg8 *) Teclado_Columns__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Teclado_Columns_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Teclado_Columns__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Teclado_Columns_PRTDSI__OE_SEL0        (* (reg8 *) Teclado_Columns__PRTDSI__OE_SEL0) 
#define Teclado_Columns_PRTDSI__OE_SEL1        (* (reg8 *) Teclado_Columns__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Teclado_Columns_PRTDSI__OUT_SEL0       (* (reg8 *) Teclado_Columns__PRTDSI__OUT_SEL0) 
#define Teclado_Columns_PRTDSI__OUT_SEL1       (* (reg8 *) Teclado_Columns__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Teclado_Columns_PRTDSI__SYNC_OUT       (* (reg8 *) Teclado_Columns__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Teclado_Columns__SIO_CFG)
    #define Teclado_Columns_SIO_HYST_EN        (* (reg8 *) Teclado_Columns__SIO_HYST_EN)
    #define Teclado_Columns_SIO_REG_HIFREQ     (* (reg8 *) Teclado_Columns__SIO_REG_HIFREQ)
    #define Teclado_Columns_SIO_CFG            (* (reg8 *) Teclado_Columns__SIO_CFG)
    #define Teclado_Columns_SIO_DIFF           (* (reg8 *) Teclado_Columns__SIO_DIFF)
#endif /* (Teclado_Columns__SIO_CFG) */

/* Interrupt Registers */
#if defined(Teclado_Columns__INTSTAT)
    #define Teclado_Columns_INTSTAT            (* (reg8 *) Teclado_Columns__INTSTAT)
    #define Teclado_Columns_SNAP               (* (reg8 *) Teclado_Columns__SNAP)
    
	#define Teclado_Columns_0_INTTYPE_REG 		(* (reg8 *) Teclado_Columns__0__INTTYPE)
	#define Teclado_Columns_1_INTTYPE_REG 		(* (reg8 *) Teclado_Columns__1__INTTYPE)
	#define Teclado_Columns_2_INTTYPE_REG 		(* (reg8 *) Teclado_Columns__2__INTTYPE)
	#define Teclado_Columns_3_INTTYPE_REG 		(* (reg8 *) Teclado_Columns__3__INTTYPE)
#endif /* (Teclado_Columns__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Teclado_Columns_H */


/* [] END OF FILE */

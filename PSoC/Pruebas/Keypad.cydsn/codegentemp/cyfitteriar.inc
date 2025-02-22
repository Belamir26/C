;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* LCD */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

/* PWM_1 */
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB09_10_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB09_10_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_1_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB09_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB09_ST_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B1_UDB09_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB09_ST_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB09_MSK
PWM_1_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_1_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
PWM_1_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_1_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_1_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_1_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_1_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_1_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B1_UDB09_MSK
PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B1_UDB09_ST_CTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B1_UDB09_ST_CTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B1_UDB09_ST
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB08_09_A0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB08_09_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB08_09_D0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB08_09_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB08_09_F0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB08_09_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B1_UDB08_A0_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B1_UDB08_A0
PWM_1_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B1_UDB08_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B1_UDB08_D0_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B1_UDB08_D0
PWM_1_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B1_UDB08_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B1_UDB08_F0_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B1_UDB08_F0
PWM_1_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B1_UDB08_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B1_UDB09_10_A0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B1_UDB09_10_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B1_UDB09_10_D0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B1_UDB09_10_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B1_UDB09_10_F0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B1_UDB09_10_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B1_UDB09_A0_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B1_UDB09_A0
PWM_1_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B1_UDB09_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B1_UDB09_D0_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B1_UDB09_D0
PWM_1_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B1_UDB09_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B1_UDB09_F0_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B1_UDB09_F0
PWM_1_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B1_UDB09_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU1_INTTYPE2
Pin_1__0__MASK EQU 0x04
Pin_1__0__PC EQU CYREG_PRT1_PC2
Pin_1__0__PORT EQU 1
Pin_1__0__SHIFT EQU 2
Pin_1__AG EQU CYREG_PRT1_AG
Pin_1__AMUX EQU CYREG_PRT1_AMUX
Pin_1__BIE EQU CYREG_PRT1_BIE
Pin_1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Pin_1__BYP EQU CYREG_PRT1_BYP
Pin_1__CTL EQU CYREG_PRT1_CTL
Pin_1__DM0 EQU CYREG_PRT1_DM0
Pin_1__DM1 EQU CYREG_PRT1_DM1
Pin_1__DM2 EQU CYREG_PRT1_DM2
Pin_1__DR EQU CYREG_PRT1_DR
Pin_1__INP_DIS EQU CYREG_PRT1_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT1_LCD_EN
Pin_1__MASK EQU 0x04
Pin_1__PORT EQU 1
Pin_1__PRT EQU CYREG_PRT1_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Pin_1__PS EQU CYREG_PRT1_PS
Pin_1__SHIFT EQU 2
Pin_1__SLW EQU CYREG_PRT1_SLW

/* isrTEC */
isrTEC__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isrTEC__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isrTEC__INTC_MASK EQU 0x02
isrTEC__INTC_NUMBER EQU 1
isrTEC__INTC_PRIOR_NUM EQU 7
isrTEC__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
isrTEC__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isrTEC__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
isrTEC_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isrTEC_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isrTEC_1__INTC_MASK EQU 0x04
isrTEC_1__INTC_NUMBER EQU 2
isrTEC_1__INTC_PRIOR_NUM EQU 7
isrTEC_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
isrTEC_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isrTEC_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Clock_1 */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x02
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x04
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x04

/* Clock_2 */
Clock_2__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_2__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_2__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_2__CFG2_SRC_SEL_MASK EQU 0x07
Clock_2__INDEX EQU 0x00
Clock_2__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_2__PM_ACT_MSK EQU 0x01
Clock_2__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_2__PM_STBY_MSK EQU 0x01

/* Clock_3 */
Clock_3__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_3__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_3__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_3__CFG2_SRC_SEL_MASK EQU 0x07
Clock_3__INDEX EQU 0x01
Clock_3__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_3__PM_ACT_MSK EQU 0x02
Clock_3__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_3__PM_STBY_MSK EQU 0x02

/* Counter */
Counter_CounterHW__CAP0 EQU CYREG_TMR0_CAP0
Counter_CounterHW__CAP1 EQU CYREG_TMR0_CAP1
Counter_CounterHW__CFG0 EQU CYREG_TMR0_CFG0
Counter_CounterHW__CFG1 EQU CYREG_TMR0_CFG1
Counter_CounterHW__CFG2 EQU CYREG_TMR0_CFG2
Counter_CounterHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Counter_CounterHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Counter_CounterHW__PER0 EQU CYREG_TMR0_PER0
Counter_CounterHW__PER1 EQU CYREG_TMR0_PER1
Counter_CounterHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Counter_CounterHW__PM_ACT_MSK EQU 0x01
Counter_CounterHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Counter_CounterHW__PM_STBY_MSK EQU 0x01
Counter_CounterHW__RT0 EQU CYREG_TMR0_RT0
Counter_CounterHW__RT1 EQU CYREG_TMR0_RT1
Counter_CounterHW__SR0 EQU CYREG_TMR0_SR0

/* Teclado */
Teclado_Columns__0__INTTYPE EQU CYREG_PICU0_INTTYPE4
Teclado_Columns__0__MASK EQU 0x10
Teclado_Columns__0__PC EQU CYREG_PRT0_PC4
Teclado_Columns__0__PORT EQU 0
Teclado_Columns__0__SHIFT EQU 4
Teclado_Columns__1__INTTYPE EQU CYREG_PICU0_INTTYPE5
Teclado_Columns__1__MASK EQU 0x20
Teclado_Columns__1__PC EQU CYREG_PRT0_PC5
Teclado_Columns__1__PORT EQU 0
Teclado_Columns__1__SHIFT EQU 5
Teclado_Columns__2__INTTYPE EQU CYREG_PICU0_INTTYPE6
Teclado_Columns__2__MASK EQU 0x40
Teclado_Columns__2__PC EQU CYREG_PRT0_PC6
Teclado_Columns__2__PORT EQU 0
Teclado_Columns__2__SHIFT EQU 6
Teclado_Columns__3__INTTYPE EQU CYREG_PICU0_INTTYPE7
Teclado_Columns__3__MASK EQU 0x80
Teclado_Columns__3__PC EQU CYREG_PRT0_PC7
Teclado_Columns__3__PORT EQU 0
Teclado_Columns__3__SHIFT EQU 7
Teclado_Columns__AG EQU CYREG_PRT0_AG
Teclado_Columns__AMUX EQU CYREG_PRT0_AMUX
Teclado_Columns__BIE EQU CYREG_PRT0_BIE
Teclado_Columns__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Teclado_Columns__BYP EQU CYREG_PRT0_BYP
Teclado_Columns__CTL EQU CYREG_PRT0_CTL
Teclado_Columns__DM0 EQU CYREG_PRT0_DM0
Teclado_Columns__DM1 EQU CYREG_PRT0_DM1
Teclado_Columns__DM2 EQU CYREG_PRT0_DM2
Teclado_Columns__DR EQU CYREG_PRT0_DR
Teclado_Columns__INP_DIS EQU CYREG_PRT0_INP_DIS
Teclado_Columns__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Teclado_Columns__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Teclado_Columns__LCD_EN EQU CYREG_PRT0_LCD_EN
Teclado_Columns__MASK EQU 0xF0
Teclado_Columns__PORT EQU 0
Teclado_Columns__PRT EQU CYREG_PRT0_PRT
Teclado_Columns__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Teclado_Columns__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Teclado_Columns__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Teclado_Columns__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Teclado_Columns__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Teclado_Columns__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Teclado_Columns__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Teclado_Columns__PS EQU CYREG_PRT0_PS
Teclado_Columns__SHIFT EQU 4
Teclado_Columns__SLW EQU CYREG_PRT0_SLW
Teclado_Rows__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Teclado_Rows__0__MASK EQU 0x01
Teclado_Rows__0__PC EQU CYREG_PRT0_PC0
Teclado_Rows__0__PORT EQU 0
Teclado_Rows__0__SHIFT EQU 0
Teclado_Rows__1__INTTYPE EQU CYREG_PICU0_INTTYPE1
Teclado_Rows__1__MASK EQU 0x02
Teclado_Rows__1__PC EQU CYREG_PRT0_PC1
Teclado_Rows__1__PORT EQU 0
Teclado_Rows__1__SHIFT EQU 1
Teclado_Rows__2__INTTYPE EQU CYREG_PICU0_INTTYPE2
Teclado_Rows__2__MASK EQU 0x04
Teclado_Rows__2__PC EQU CYREG_PRT0_PC2
Teclado_Rows__2__PORT EQU 0
Teclado_Rows__2__SHIFT EQU 2
Teclado_Rows__3__INTTYPE EQU CYREG_PICU0_INTTYPE3
Teclado_Rows__3__MASK EQU 0x08
Teclado_Rows__3__PC EQU CYREG_PRT0_PC3
Teclado_Rows__3__PORT EQU 0
Teclado_Rows__3__SHIFT EQU 3
Teclado_Rows__AG EQU CYREG_PRT0_AG
Teclado_Rows__AMUX EQU CYREG_PRT0_AMUX
Teclado_Rows__BIE EQU CYREG_PRT0_BIE
Teclado_Rows__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Teclado_Rows__BYP EQU CYREG_PRT0_BYP
Teclado_Rows__CTL EQU CYREG_PRT0_CTL
Teclado_Rows__DM0 EQU CYREG_PRT0_DM0
Teclado_Rows__DM1 EQU CYREG_PRT0_DM1
Teclado_Rows__DM2 EQU CYREG_PRT0_DM2
Teclado_Rows__DR EQU CYREG_PRT0_DR
Teclado_Rows__INP_DIS EQU CYREG_PRT0_INP_DIS
Teclado_Rows__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Teclado_Rows__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Teclado_Rows__LCD_EN EQU CYREG_PRT0_LCD_EN
Teclado_Rows__MASK EQU 0x0F
Teclado_Rows__PORT EQU 0
Teclado_Rows__PRT EQU CYREG_PRT0_PRT
Teclado_Rows__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Teclado_Rows__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Teclado_Rows__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Teclado_Rows__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Teclado_Rows__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Teclado_Rows__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Teclado_Rows__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Teclado_Rows__PS EQU CYREG_PRT0_PS
Teclado_Rows__SHIFT EQU 0
Teclado_Rows__SLW EQU CYREG_PRT0_SLW
Teclado_Status_Reg_sts_sts_reg__0__MASK EQU 0x01
Teclado_Status_Reg_sts_sts_reg__0__POS EQU 0
Teclado_Status_Reg_sts_sts_reg__1__MASK EQU 0x02
Teclado_Status_Reg_sts_sts_reg__1__POS EQU 1
Teclado_Status_Reg_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
Teclado_Status_Reg_sts_sts_reg__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
Teclado_Status_Reg_sts_sts_reg__2__MASK EQU 0x04
Teclado_Status_Reg_sts_sts_reg__2__POS EQU 2
Teclado_Status_Reg_sts_sts_reg__3__MASK EQU 0x08
Teclado_Status_Reg_sts_sts_reg__3__POS EQU 3
Teclado_Status_Reg_sts_sts_reg__4__MASK EQU 0x10
Teclado_Status_Reg_sts_sts_reg__4__POS EQU 4
Teclado_Status_Reg_sts_sts_reg__MASK EQU 0x1F
Teclado_Status_Reg_sts_sts_reg__MASK_REG EQU CYREG_B0_UDB02_MSK
Teclado_Status_Reg_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
Teclado_Status_Reg_sts_sts_reg__STATUS_REG EQU CYREG_B0_UDB02_ST

/* isrCONT */
isrCONT__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isrCONT__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isrCONT__INTC_MASK EQU 0x01
isrCONT__INTC_NUMBER EQU 0
isrCONT__INTC_PRIOR_NUM EQU 7
isrCONT__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isrCONT__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isrCONT__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E127069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000006
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */

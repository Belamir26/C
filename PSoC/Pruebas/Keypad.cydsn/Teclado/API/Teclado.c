/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "project.h"

uint8 `$INSTANCE_NAME`_AsignarTecla(void)
{
    uint8 `$INSTANCE_NAME`_Key[4][4] = {
		{'1','2','3','A'},//Row 1
		{'4','5','6','B'},//Row 2
		{'7','8','9','C'},//Row 3
		{'*','0','#','D'}//Row 4
  	};
    
	uint8 Button;
	uint8 fila,columna;

	fila = (`$INSTANCE_NAME`_Status_Reg_Read() & 0b11); //Row extract
    //Search for row
    `$INSTANCE_NAME`_Columns_Write(0b1111);
    `$INSTANCE_NAME`_Rows_Write(0b0000);
     CyDelayUs(10);
    
    columna = ((`$INSTANCE_NAME`_Status_Reg_Read() & 0b1100) >> 2);
    //Back to normal
    `$INSTANCE_NAME`_Rows_Write(0b1111);
    `$INSTANCE_NAME`_Columns_Write(0b0000);
    CyDelayUs(10);
    
	Button=`$INSTANCE_NAME`_Key[fila][columna];//Assign Character
	return Button;
}

uint8 `$INSTANCE_NAME`_AsignarTeclaExtern(const int matriz[4][4])
{
    uint8 Button;
	uint8 fila,columna;

	fila = (`$INSTANCE_NAME`_Status_Reg_Read() & 0b11); //Row extract
    //Search for row
    `$INSTANCE_NAME`_Columns_Write(0b1111);
    `$INSTANCE_NAME`_Rows_Write(0b0000);
     CyDelayUs(10);
    
    columna = ((`$INSTANCE_NAME`_Status_Reg_Read() & 0b1100) >> 2);
    //Back to normal
    `$INSTANCE_NAME`_Rows_Write(0b1111);
    `$INSTANCE_NAME`_Columns_Write(0b0000);
    CyDelayUs(10);
    
	Button=matriz[fila][columna];//Assign Character
	return Button;
}


void `$INSTANCE_NAME`_Start(void){
    `$INSTANCE_NAME`_Rows_Write(0b1111);
    `$INSTANCE_NAME`_Columns_Write(0b0000);
}

/* [] END OF FILE */

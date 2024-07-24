
#include "project.h"
#include "stdio.h"

char buff[30];


uint16 temperatura=0;
uint16 peso=0;
uint8 decimaltemp=0;
uint8 decimalpeso=0;
uint8 valortemp=0;
uint8 valorpeso=0;

float temp=0;
float pes=0;

int main(void)
{
    CyGlobalIntEnable; 
    LCD_Start();
    
    temperatura= 298;
    peso= 7895;
    
    temp = 30.8;
    pes= 78.95;
    
    
    for(;;)
    {
        
        
        
        sprintf(buff, "temp_float: %.1f",temp );
        LCD_Position(0,0);
        LCD_PrintString(buff);
        sprintf(buff,"pes_floar: %.2f", pes);
        LCD_Position(1,0);
        LCD_PrintString(buff);
     
        
        decimaltemp= temperatura %10;
        valortemp = temperatura/10;
        sprintf(buff, "temp: %u.%u  ",valortemp,decimaltemp);
        LCD_Position(2,0);
        LCD_PrintString(buff);
        
        
        decimalpeso = peso % 100;
        valorpeso = peso/100;
        sprintf(buff, "peso: %u.%u", valorpeso, decimalpeso);
        CyDelay(1000);
        LCD_Position(3,0);
        LCD_PrintString(buff);
        
        
        
        
    
        
        
        
    }
}



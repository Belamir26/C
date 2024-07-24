
#include "project.h"
#include "stdio.h"

#include "LXD.h"
char buff[20];
int main(void)
{
    CyGlobalIntEnable; 
    I2C_Start();
    LXD_Start(0x27);
    LXD_Position(0,0);
    sprintf(buff, "Prueba I2C LCD");
    LXD_String(buff);
    uint8 Cont=0;
    for(;;)
    {
        Cont++;
        LXD_Position(1,0);
        sprintf(buff, "Segundos: %d",Cont);
        LXD_String(buff);
        
        LXD_Position(2,0);
        
        LXD_Char('C');
        LXD_Char('H');
        LXD_Char('A');
        LXD_Char('R');
        LXD_Char(0XFF);
        CyDelay(1000);
        
    }
}


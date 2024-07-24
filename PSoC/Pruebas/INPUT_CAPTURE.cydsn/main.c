
#include "project.h"

CY_ISR_PROTO(fisrTimer);

int8 Calculos=0;
int8 status=1;
uint32 mod=16777216; // modulador de 24 bits
uint32 valor1=0;
uint32 valor2=0;
uint32 ovf1=0;
uint32 CiclosPeriodo=0;
uint32 Tiempo=0;
uint32 cont=0;
uint32 Mili=0;

int main(void)
{
    CyGlobalIntEnable; 
    Timer_Start();
    isrTimer_StartEx(fisrTimer);

    for(;;)
    {
        if(Calculos){
            CiclosPeriodo=(uint32)((uint32)(ovf1)*mod+valor1-valor2);//Se obtiene numero de conteos
            Tiempo = CiclosPeriodo/24;//Tiempo en us, la frecuencia de conteo está a 24MHz
            Mili=Tiempo/1000000;
            Calculos=0;
            ovf1=0;
            cont=0;
            CyDelay(200);
            Timer_Start();
        }
    }
}

CY_ISR_PROTO(fisrTimer){
    status=Timer_ReadStatusRegister(); //Leer el registro de estado
    if(status & Timer_STATUS_TC){
        if(cont==1 ){
            ovf1++;
        }
    }
    if(status & Timer_STATUS_CAPTURE){ 
        if(cont==0){
            valor1=Timer_ReadCapture();//Obtiene primer valor
            cont++;
        }
    else if(cont==1){
        valor2=Timer_ReadCapture(); //Obtiene segundo valor
        Timer_Stop(); //Detiene Timer
        Calculos=1;
        } 
    }

}


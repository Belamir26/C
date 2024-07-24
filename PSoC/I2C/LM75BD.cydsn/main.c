
#include "project.h"

#define addr_LM75B 0b01001000 
#define addr_LM75   0x48
#define addr_LM     72


uint16 get_temp(void);
uint8 temp[2]; //Complemento a2
uint16 temperatura;
uint16 tempFinal;
uint8 signo;

int main(void)
{
    CyGlobalIntEnable; 
    I2C_Start();

    for(;;)
    {
        get_temp();
        CyDelay(100);
    }
}


//SE DEBE HACER CADA 100MS para darle respiro -> Counter
uint16 get_temp(void){
    //read buff nos permite leer en cascada cada byte 
    //desde el valor de puntero, en el caso de LM75 es 0X00, por lo que,
    //Empieza desde la temperatura.
    
    
    I2C_MasterReadBuf(addr_LM75,temp,2,I2C_MODE_COMPLETE_XFER);
        //addr -> dirreccion del esclavo
        //temp -> vector donde se guarda la informacion apuntada
        //2    -> Numero de iteraciones, en el caso de la temperatura son 2
        //Modo completo, espera a que termine la operacion
    
    //Procesamiento de la informacion!

    signo = temp[0]>>7; // 1 si es negativo, 0 Si es positivo
    temperatura = temp[0] & 0b01111111; //Aca se elimina el Signo* con bitwise AND
    temperatura= temperatura<<8; // Bitwise left shift
    temperatura |= temp[1]; // append -> bitwise or
    temperatura = temperatura >>5; //Bitwise right shift
    
    //Conversion con float
    //tempFinal = (float) temperatura * 0.125; //Conversion 
    
    //Conversion sin punto flotante
    tempFinal = temperatura * 1.25;  //Un decimal
    
    return tempFinal;
    
}
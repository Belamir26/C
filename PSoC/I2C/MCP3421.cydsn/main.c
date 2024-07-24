



#include "project.h"
#include "stdio.h"

char buff[20];


#define addr_MCP3421 0x68


#define PGAX1  1
#define PGAX2  2
#define PGAX3  3
#define PGAX4  4

#define BITS12   12
#define BITS14   14
#define BITS16   16
#define BITS18   18


//Este tiene 4 registros  -> 0x00 1data byte   01 2nd data byte  02 3rd data byte 03 configuration
uint8 retorno[4];
uint16 data;
uint32 pot;
uint8 PGA, BIT;



uint8 MCP3421_Start(void);
void MCP3421_GetConfig(void);
void MCP3421_Data(void);




int main(void)
{
    CyGlobalIntEnable;
    I2C_Start();
    if(MCP3421_Start()){
        MCP3421_GetConfig();
        
        
    }else{
        //No esta activo
    }
    

    for(;;)
    {
        MCP3421_Data();
        CyDelay(500); 
    }
}




uint8 MCP3421_Start(void){
    uint8 config;
    
    I2C_MasterReadBuf(addr_MCP3421,retorno,4,I2C_MODE_COMPLETE_XFER);   
    config=retorno[3];
    if(config==0b10010000){
        CyDelay(100); //Timeout Inicial
        return 1;   //Si esta en configuracion inicial
    }
    return 0;
}




void MCP3421_GetConfig(void) {
    uint8 bit,pga,config;
    config=retorno[3];
    pga = config & 0b00000011;
    bit= config & 0b00001100;
    bit= bit>>2;
    
    switch(bit) {
        case 0: BIT = BITS12; break;
        case 1: BIT = BITS14; break;
        case 2: BIT = BITS16; break;
        case 3: BIT = BITS18; break;
        default: BIT = BITS12; break; 
    }
    switch(pga) {
        case 0: PGA = PGAX1; break;
        case 1: PGA = PGAX2; break;
        case 2: PGA = PGAX3; break;
        case 3: PGA = PGAX4; break;
        default: PGA = PGAX1; break; 
    }
}


void MCP3421_Data(void){
    I2C_MasterReadBuf(addr_MCP3421,retorno,3,I2C_MODE_COMPLETE_XFER);
    if(BIT==BITS12){
        if(PGA==PGAX1){
            data = retorno[1] & 0b00001111;
            data = data <<8;
            data |= retorno[2];
            pot=(data -272) * 5000 /3584;
        }
    }
    
    
}



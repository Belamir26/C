
#include "project.h"


/*

ESTE CODIGO NO ESTA PROBADO, ES DIRECTAMENTE LO QUE DICE EL DATASHEET
Y DEBE DE SER MODIFICADO POR CADA DIPOSITIVO I2C, ES DECIR:
QUE LA LECTURA Y ESCRITURA SEA INDEPENDIENTE

POR LO CUAL ESTO ES TEORICO, PARA DISPOSITIVOS I2C AVANZADOS, 
IMUS, ACCEL, MAGNETO (Con muchos registros)
*/


/* lectura de registros*/
void lecturaRegistros(uint8 addr_slave, uint8 reg, uint8 cadena, uint8* retorno);
void lecturaRegistros2(uint8 addr_slave, uint8* reg, uint8 cadena, uint8* retorno);

int main(void)
{
    CyGlobalIntEnable; 

    for(;;)
    {
        
    }
}

//Este dependerá de cada dispostivo I2C y de como funcione
void lecturaRegistros(uint8 addr_slave, uint8 reg, uint8 cadena, uint8* retorno){
    uint8 estado;

    //Escritura
    estado= I2C_MasterSendStart(addr_slave, I2C_WRITE_XFER_MODE);
    if(I2C_MSTR_NO_ERROR ==estado){
        for(;;){
            estado= I2C_MasterWriteByte(reg);
            if(estado != I2C_MSTR_NO_ERROR){ 
                break;
            }
        }
    }
    I2C_MasterSendStop(); 

    //Lectura
    estado= I2C_MasterSendStart(addr_slave, I2C_READ_XFER_MODE);
    if(I2C_MSTR_NO_ERROR==estado){
        for(uint8 i=0; i<cadena;i++){
            if(i<cadena-1){
                retorno[i]= I2C_MasterReadByte(I2C_ACK_DATA);
            }else{
                retorno[i]= I2C_MasterReadByte(I2C_NAK_DATA);
            }
        }
    }
    I2C_MasterSendStop();
}

void lecturaRegistros2(uint8 addr_slave, uint8* reg, uint8 cadena, uint8* retorno){
    I2C_MasterWriteBuf(addr_slave,reg,1,I2C_MODE_COMPLETE_XFER);
    I2C_MasterReadBuf(addr_slave,retorno,cadena,I2C_MODE_COMPLETE_XFER);   
}
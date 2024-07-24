
#include "project.h"


uint8 bandTec=0;
uint8 bandCont=0;
CY_ISR_PROTO(fisr_Teclado);
CY_ISR_PROTO(fisr_CONT);
uint8 tinsta=0;
uint8 pulsaciones=0;
uint8 lugar=0;
uint32 mili=0;
uint32 seg=0;

//Matriz derivada
uint8 KEY[9][3] = {
		{'A','B','C'}, //0       
		{'D','E','F'},
		{'G','H','I'},
		{'J','K','L'},//3
        {'M','N','O'},
        {'P','Q','R'},//5
        {'S','T','U'},//6
        {'V','W','X'},
        {'Y','Z',' '},
        // 9 Y EL 0 -> NO LOS USOS...
  	};
int main(void)
{
    Teclado_Start();
    LCD_Start();
    Counter_Start();
    isrTEC_StartEx(fisr_Teclado);
    isrCONT_StartEx(fisr_CONT);
    CyGlobalIntEnable;
    uint16 xxxx = 1000;
    uint8 tecDer[10];
  
    for(;;)
    {
        
        
        if(bandTec){
            bandTec=0;
            tinsta=Teclado_AsignarTecla();
            if(tinsta=='1'){
                tecDer[lugar]= KEY[0][pulsaciones];
            }
            if(tinsta=='2'){
                tecDer[lugar]= KEY[1][pulsaciones];
            }
            if(tinsta=='3'){
                tecDer[lugar]= KEY[2][pulsaciones];
            }
            
            if(tinsta=='*'){
                lugar++;
            }

            pulsaciones++;
            if(pulsaciones==3){
                pulsaciones=0;
            }
            
        }
        
        if(bandCont){
            bandCont=0;
            mili++;
            if(mili==500){
                lugar++;
            }
        }
            /*
            > X
            1 - -> A B C 
            2 -> D E F
            3 -> G H I
            */
            
            
            VECTTO = {H,O,L,A, , M,U,N,D,O}
            STR = HOLAMUNDO
            
            
            
            
            
            
        }
        

        if(bandCont){
            bandCont=0;
            mili++;
            if(mili%1000==0){
                seg++;
                LCD_Position(3,0);
                LCD_PrintNumber(seg);
            }
            
            if(mili==5000){
                lugar++;
                mili=0;
                seg=0;
            }
        }

        if(bandTec){
            bandTec=0;
            tinsta=Teclado_AsignarTecla();
            pulsaciones++;
            
            mili=0;
            if(tinsta=='7'){
                LCD_Position(0,lugar);
                LCD_PutChar(KEY[6][pulsaciones-1]);
                if(pulsaciones==3){
                    pulsaciones=0;
                }
            }
            if(tinsta=='4'){
                LCD_Position(0,lugar);
                LCD_PutChar(KEY[3][pulsaciones-1]);
                if(pulsaciones==3){
                    pulsaciones=0;
                }
            }
            if(tinsta=='1'){
                LCD_Position(0,lugar);
                LCD_PutChar(KEY[0][pulsaciones-1]);
                if(pulsaciones==3){
                    pulsaciones=0;
                }
            }
            if(tinsta=='*'){
                LCD_Position(0,lugar);
                LCD_PutChar(KEY[5][pulsaciones-1]);
                if(pulsaciones==3){
                    pulsaciones=0;
                }
            }
            



                
        }
      
    }
}

CY_ISR_PROTO(fisr_Teclado){
    bandTec=1;
}
CY_ISR_PROTO(fisr_CONT){
    bandCont=1;
}
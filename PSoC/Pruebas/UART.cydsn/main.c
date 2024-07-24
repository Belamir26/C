
#include "project.h"
#include <stdlib.h>


char* uno = "1";
char* dos = "2";
char* tres = "5";

uint8 angulouno;
uint8 angulodos;
uint8 angulotres;
uint16 ANG;
uint8 bandera=1;

int main(void)
{
    CyGlobalIntEnable;

    for(;;)
    {
        
        
        if(bandera){
            angulouno = atoi(uno);
            angulodos = atoi(dos);
            angulotres = atoi(tres);
            
            ANG= angulouno*100 + angulodos*10 + angulotres;
           
            bandera=0;
        }
        
    }
}




        




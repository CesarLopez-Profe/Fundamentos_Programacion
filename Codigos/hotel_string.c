#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
   
    //Declaro e inicializo
    char dotacion[2]; //string o cadena de texto
    int nro_camas=0;

    //Pido los datos de entrada
    printf("Ingrese la dotacion de la habitacion, AA o VE\n");
    scanf("%s", &dotacion);
    strupr(dotacion);

    printf("Ingrese el número de camas que necesita \n");
    scanf("%d",&nro_camas);


    //Validar los datos de entrada
    if(nro_camas > 0 && strcmp(dotacion,"AA") || strcmp(dotacion,"VE") ){
        //Si los datos de entrada esán bien operamos y arrojamos las salidas
       if (nro_camas == 1 && strcmp(dotacion,"VE")==0){
            printf("La habitación es la 102 con Ventilador y una cama\n");
        }
        else if (nro_camas == 2 && strcmp(dotacion,"VE")==0){
            printf("La habitación es la 202 con Ventilador y 2 camas\n");
        }
        else if (nro_camas == 2 && strcmp(dotacion,"AA")==0){
            printf("La habitación es la 101 o la 301 con AA y 2 camas\n");
        }
        else if (nro_camas == 3 && strcmp(dotacion,"AA")==0){
            printf("La habitación es la 201 con AA y 3 camas\n");
        }
        else{
            printf("No poseemos Habitaciones como las solicita el usuario\n");
        }
    }
    else{
        printf("Revise los datos de entrada\n");
    }

    return 0; //Instrucción final

    
}
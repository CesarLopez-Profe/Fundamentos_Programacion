#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int seleccion = 0; //Declaración e inicialización

    printf("Seleccione su entrada\n1. Ceviche\n2.Crema\n3.Patacones\n");
    scanf("%d", &seleccion);

    if(seleccion >=1 && seleccion <=3){

        switch(seleccion){
            case 1: printf("Seleccionó Ceviche");
                    break;
            case 2: printf("Seleccionó Crema");
                    break;
            case 3: printf("Seleccionó Patacones");
                    break;
            default: printf("Opción de entrada no válida");
        }
    }
    else{
        printf("Selección de la entrada no válida");

    }
    

    return 0; //Instrucción final

    
}
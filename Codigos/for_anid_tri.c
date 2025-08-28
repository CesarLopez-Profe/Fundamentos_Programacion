#include <stdio.h>

int main(int argc, char const *argv[]){
   
    int tot_lineas = 30;

    for(int linea = 1; linea <= tot_lineas; linea++){

        for(int cant_ast = 1; cant_ast <= linea; cant_ast++){
            printf("*");
        }
        printf("\n");

    }
 

    return 0; //Instrucción final

    
}
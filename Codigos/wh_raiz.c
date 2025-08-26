#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){

    int nrousr;
    float raizcuad = 0;

    printf("Digite el numero para hallar la raiz cuadrada. \n Digite cero o negativo para terminar\n");
    scanf("%d",&nrousr);

    while(nrousr >0){

        raizcuad = sqrt(nrousr);
        printf("La raiz cuadrada de %d es %.2f", nrousr, raizcuad );

        printf("Digite el siguiente numero para hallar la raiz cuadrada.\nDigite cero o negativo para terminar\n");
        scanf("%d",&nrousr);

    }

    printf("Finalizo");


    return 0; //Instrucción final

    
}
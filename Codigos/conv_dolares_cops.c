#include <stdio.h>

int main(int argc, char const *argv[]){

    short trm = 0;
    float cant_dol = 0.0f, cant_cops = 0.0f;

    printf("Ingrese el valor de la TRM\n");
    scanf("%d",&trm);

    printf("Ingrese la cantidad de dólares: \n");
    scanf("%f",&cant_dol);

    cant_cops = cant_dol*trm;

    printf("La cantidad de $$ equivalentes son: %.2f",cant_cops );

    return 0;
}
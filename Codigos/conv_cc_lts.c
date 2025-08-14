#include <stdio.h>

int main(int argc, char const *argv[]){

    float cant_cc=0.0f, cant_litros=0.0f;
    printf("Ingrese la cantidad en CC\n");
    scanf("%f",&cant_cc);

    cant_litros = cant_cc/1000.0f;
    printf("La cantidad en litros es: %.2f equivalente a %.2f CC \n", cant_litros, cant_cc);
    return 0;
}
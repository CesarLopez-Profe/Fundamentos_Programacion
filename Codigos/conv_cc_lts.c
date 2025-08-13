#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float cant_litros=0.0f, cant_cc=0.0f;
    printf("Ingrese la cantidad de cc a convertir: \n");
    scanf("%f", &cant_cc);
    cant_litros = cant_cc / 1000.0f;
    printf("La cantidad de litros es: %.2f\n", cant_litros);
    return 0;
}

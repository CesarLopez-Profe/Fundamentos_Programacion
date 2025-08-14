#include <stdio.h>

int main(int argc, char const *argv[]){
    
    float km_r1=0.0f, km_r2=0.0f,km_r3=0.0f,km_r4=0.0f,km_tot=0.0f,comb_total=0.0f;

    printf("Ingrese el total de km de la ruta 1\n");
    scanf("%.2f",&km_r1);

    printf("Ingrese el total de km de la ruta 2\n");
    scanf("%.2f",&km_r2);

    printf("Ingrese el total de km de la ruta 3\n");
    scanf("%.2f",&km_r3);

    printf("Ingrese el total de km de la ruta 4\n");
    scanf("%.2f",&km_r4);

    comb_total = ((km_r1+km_r2+km_r3+km_r4)/60.8f*0.2f)+(1.6f*4);

    printf("El total de combustible para el avión es:\n %.2f \n",comb_total);
    

    return 0; //Instrucción final

    
}
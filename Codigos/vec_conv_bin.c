#include <string.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    
    int v_num_bin[8] = {1,0,1,2,0,1,1,0}, base=2, nro_dec=0, longi = sizeof(v_num_bin)/sizeof(int);

    for(int pos = 0; pos < longi; pos++){
        printf("| %d ", v_num_bin[pos]);
    }
    printf("|\n");
    
    for(int pos = longi-1; pos >=0 ; pos--){

        if (v_num_bin[pos] != 0 && v_num_bin[pos] !=1 ){
            printf("El vector debe contener solo binarios, hay u numero no binario en la posicion  %d\n", pos);
            return -1; //se detiene la ejecución
        }
        else 
            nro_dec = nro_dec + v_num_bin[pos] * pow(base,longi-1-pos);

    }

    printf("El numero decimal resultate es: %d \n", nro_dec );

    return 0;
}

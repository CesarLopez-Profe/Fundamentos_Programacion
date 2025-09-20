#include <string.h>
int main(int argc, char const *argv[])
{
     int vec_nros[50], longi= sizeof(vec_nros)/sizeof(int);

     memset(vec_nros,0,sizeof(vec_nros));

     //Llenamos el vector con aleatorios
     for(int pos = 0; pos < longi; pos++){
        vec_nros[pos] = (rand() % 900 )+100;
     }

     //pintamos el vector
     for(int pos = 0; pos < longi; pos++){

        if(vec_nros[pos] >=100 && vec_nros[pos]<=300)
             
            printf("| \033[0;31m %d \033[0m", vec_nros[pos]);

        else if (vec_nros[pos] >=301 && vec_nros[pos]<=700)
            printf("| \033[0;33m %d \033[0m", vec_nros[pos]);

        else if (vec_nros[pos] > 701)
            printf("| \033[0;32m %d \033[0m", vec_nros[pos]);

     }
     printf("|\n");


    return 0;
}

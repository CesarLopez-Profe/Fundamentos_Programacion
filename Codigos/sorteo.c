#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
   
    int cifra1, cifra2, cifra3, cifra4;

    for(int premio =20;premio >=1; premio--){
        cifra1 = rand()%10;
        cifra2 = rand()%10;
        cifra3 = rand()%10;
        cifra4 = rand()%10;

        if(premio >=6){
            printf("Seco # %d - %d %d %d %d Gana $50.000.000\n", premio, cifra1, cifra2, cifra3, cifra4);
        }
        else if (premio >=2 && premio <6){
            printf("Seco # %d - %d %d %d %d Gana $200.000.000\n", premio, cifra1, cifra2, cifra3, cifra4);
        }
        else{
            printf("Premio Mayor - %d %d %d %d Gana $1.000.000.000\n", premio, cifra1, cifra2, cifra3, cifra4);
        }

    }
   

    return 0; //Instrucción final

    
}
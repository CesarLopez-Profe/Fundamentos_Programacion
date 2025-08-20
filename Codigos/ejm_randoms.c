#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Libreria para calcular randoms con la función srand. Tarea para mañana

int main(int argc, char const *argv[]){
   
    int nro_aleatorio;

    //Random sencillo
    nro_aleatorio = rand();
    printf ("Número aleatorio sencillo %d\n", nro_aleatorio);

    //Random entre 1 y 10
    nro_aleatorio = (rand() % 10 )+ 1;
    printf ("Número aleatorio entre 0 y 10 %d\n", nro_aleatorio);

    //Random entre 1 y 100
    nro_aleatorio = (rand() % 100 )+ 1;
    printf ("Número aleatorio entre 0 y 100 %d\n", nro_aleatorio);

    //Random entre 2 números: 5 y 15
    nro_aleatorio = (rand() % 11) + 5;
    printf ("Número aleatorio entre 5 y 15 %d\n", nro_aleatorio);

    //for para calcular una serie de 20 números aleatorios
    for(int termino = 1; termino <= 20; termino++){
        nro_aleatorio = (rand() % 11) + 5;
        printf ("Termino %d aleatorio entre 5 y 15 fue: %d\n", termino, nro_aleatorio);
    }

    return 0; //Instrucción final

    
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    setlocale(LC_ALL, "spanish"); // Establece la localización para la salida de texto
    
    //Con funcion rand: devuelve un número entero aleatorio entre 0 y el RAND_MAX
    int numero_aleatorio = rand(); // Genera un número aleatorio
    printf("Número aleatorio: %d\n", numero_aleatorio);
    
    numero_aleatorio = (rand() % 10)+1; // Genera un número aleatorio entre 1 y 10. EL mod limita el rango entre 0 y 9
    printf("Número aleatorio entre 1 y 10: %d\n", numero_aleatorio);

    numero_aleatorio = (rand()%100)+1; 
    printf("Numero aleatorio entre 1 y 100: %d\n", numero_aleatorio);

    for(int elem = 1; elem<=20; elem++){
        //Generar un aleatorio entre un mínimo y un máximo(rand() % (max - min + 1)) + min;
        numero_aleatorio = (rand() % 11) + 5; // Entre 5 y 15
        printf("Término %d  aleatorio entre 5 y 15: %d\n", elem, numero_aleatorio);

    }

    //Investigar Con funcion srand: establece la semilla para la generación de números aleatorios
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    return 0; //Instrucción final

    
}
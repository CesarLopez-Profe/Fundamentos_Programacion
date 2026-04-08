#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){

    FILE *arch_juego; //declaración de un puntero de tipo FILE
    arch_juego = fopen("c:\\Users\\000096175\\Documents\\programacion\\resultados_juego.txt", "r"); //abriendo el archivo en modo lectura
    int totptosJ1= 0, totptosJ2=0;
    
    if (arch_juego == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; //Finaliza el programa en este return
    }
    else {
        char puntos[5], jugador[3];
        int ptos_lin=0, cleaner;

        while (fgets(jugador, sizeof(jugador), arch_juego) !=NULL) //La función feof siempre devolverá cero (Falso) si no es encontrado EOF en el archivo, de lo contrario regresará un valor distinto de cero (Verdadero)
        {
            // Limpiar la línea a la que apunta arch_juego que es la próxima línea
            while ((cleaner = fgetc(arch_juego)) != '\n' && cleaner != EOF) {} 
            fgets(puntos, sizeof(puntos), arch_juego);
            //strcspn buscar la primera aparición de cualquiera de los caracteres de una cadena dentro de otra.
            puntos[strcspn(puntos, "\n")] = '\0';   // cuando lo encuentra lo remplaza por \0. Se limpian los saltos de línea 
            ptos_lin = atoi(puntos);
            

            if(strcmp(jugador,"J1") == 0){
                totptosJ1 += ptos_lin;
            }
            
            else if(strcmp(jugador,"J2") == 0){
                totptosJ2 += ptos_lin;
            }

        }
    }


    fclose(arch_juego); //cerrando el archivo
    printf("Total puntos J1: %d\n", totptosJ1);
    printf("Total puntos J2: %d\n", totptosJ2);


    return 0;
}

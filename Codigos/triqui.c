#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Este código se debe hacer una mejora 
//colocando ciclos en las validaciones del triqui

int main(int argc, char const *argv[])
{
    FILE *arch_triq; //declaración de un puntero de tipo FILE

    arch_triq = fopen("c:\\Users\\000096175\\Documents\\programacion\\triqui.txt", "r"); //abriendo el archivo en modo lectura
    char jugada[100];
    char tablero[3][3];
    char *j1, *lj1, *j2, *lj2, *movtos;
    int cont_juegos = 0, par_gan_j1 = 0, par_gan_j2 = 0, par_empa=0, cont_triq_j1 = 0, cont_triq_j2 = 0;
    

    if (arch_triq == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    else{
        while (feof (arch_triq)==0) //La función feof siempre devolverá cero (Falso) si no es encontrado EOF en el archivo, de lo contrario regresará un valor distinto de cero (Verdadero)
        {
            fgets(jugada, sizeof(jugada), arch_triq);

            j1 = strtok(jugada, "@");
            lj1 = strtok(NULL, "@");
            j2 = strtok(NULL, "@");
            lj2 = strtok(NULL, "@");
            movtos  = strtok(NULL, "");



            //Recorremos los movtos y los cargamos en el tablero
            for (int fil = 0; fil < 3; fil++) {
                for (int col = 0; col < 3; col++) {
                    tablero[fil][col] = movtos[fil*3 + col];
                }
            }

            //Acá ya se tiene el tablero cargado
            //imprimir el tablero
            cont_juegos++;
            printf("Juego %d: \n", cont_juegos);
            for (int fil = 0; fil < 3; fil++) { 
                for (int col = 0; col < 3; col++) {
                    printf("%c ", tablero[fil][col]);
                }
                printf("\n");
            }

            //Se revisan las jugadas teniendo en cuenta que en el tablero podrían haber más de un triqui
            if (tablero[0][0] == *lj1 && tablero[0][1] == *lj1 && tablero[0][2] == *lj1) //fila 1
                cont_triq_j1++;
            else if (tablero[0][0] == *lj2 && tablero[0][1] == *lj2 && tablero[0][2] == *lj2) //fila 1
                cont_triq_j2++;

            if (tablero[1][0] == *lj1 && tablero[1][1] == *lj1 && tablero[1][2] == *lj1)  //fila 2
                cont_triq_j1++;
            else if (tablero[1][0] == *lj2 && tablero[1][1] == *lj2 && tablero[1][2] == *lj2)  //fila 2
                cont_triq_j2++;

            if (tablero[2][0] == *lj1 && tablero[2][1] == *lj1 && tablero[2][2] == *lj1)  //fila 3
                cont_triq_j1++;
            else if (tablero[2][0] == *lj2 && tablero[2][1] == *lj2 && tablero[2][2] == *lj2)  //fila 3
                cont_triq_j2++;

            if (tablero[0][0] == *lj1 && tablero[1][0] == *lj1 && tablero[2][0] == *lj1)  //columna 1
                cont_triq_j1++;
            else if (tablero[0][0] == *lj2 && tablero[1][0] == *lj2 && tablero[2][0] == *lj2)  //columna 1
                cont_triq_j2++;

            if (tablero[0][1] == *lj1 && tablero[1][1] == *lj1 && tablero[2][1] == *lj1)  //columna 2
                cont_triq_j1++;
            else if (tablero[0][1] == *lj2 && tablero[1][1] == *lj2 && tablero[2][1] == *lj2)  //columna 2
                cont_triq_j2++;

            if (tablero[0][2] == *lj1 && tablero[1][2] == *lj1 && tablero[2][2] == *lj1)  //columna 3
                cont_triq_j1++;
            else if (tablero[0][2] == *lj2 && tablero[1][2] == *lj2 && tablero[2][2] == *lj2)  //columna 3
                cont_triq_j2++;

            if (tablero[0][0] == *lj1 && tablero[1][1] == *lj1 && tablero[2][2] == *lj1)  //diagonal ppal
                cont_triq_j1++;
            else if (tablero[0][0] == *lj2 && tablero[1][1] == *lj2 && tablero[2][2] == *lj2)  //diagonal ppal
                cont_triq_j2++;

            if (tablero[0][2] == *lj1 && tablero[1][1] == *lj1 && tablero[2][0] == *lj1)   //diagonal inversa
                cont_triq_j1++;
            else if (tablero[0][2] == *lj2 && tablero[1][1] == *lj2 && tablero[2][0] == *lj2)   //diagonal inversa
                cont_triq_j2++;

            //Se cuentan las pratidas ganadas por cada jugador
            if (cont_triq_j1 > cont_triq_j2) {
                printf("Esta partida la gana el jugador 1 con la letra %c\n", *lj1);
                par_gan_j1++;
            }
            else if (cont_triq_j2 > cont_triq_j1)
            {
                printf("Esta partida la gana el jugador 2 con la letra %c\n", *lj2);
                par_gan_j2++;
            }
            

            cont_triq_j1 = 0, cont_triq_j2 = 0; //reiniciando los contadores de triquis para el siguiente juego

        }   
    }

    fclose(arch_triq); //cerrando el archivo

    if (par_gan_j1 > par_gan_j2)
        printf("El jugador 1 gana con %d partidas ganadas\n", par_gan_j1);
    else if (par_gan_j2 > par_gan_j1)
        printf("El jugador 2 gana con %d partidas ganadas\n", par_gan_j2);
    else
        printf("Ambos jugadores empataron con %d partidas ganadas cada uno\n", par_gan_j1);    

    return 0;
}

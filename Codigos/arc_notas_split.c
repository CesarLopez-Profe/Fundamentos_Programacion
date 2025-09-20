#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *arch_notas; //declaración de un puntero de tipo FILE
    arch_notas = fopen("c:\\Users\\000096175\\Documents\\programacion\\notas.txt", "r"); //abriendo el archivo en modo lectura

    char s[100], *nombre, *n1, *n2, *n3, *n4;
    float ndef=0;

    if (arch_notas == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; //Finaliza el programa en este return
    }
    else {
        while (feof (arch_notas)==0) //La función feof siempre devolverá cero (Falso) si no es encontrado EOF en el archivo, de lo contrario regresará un valor distinto de cero (Verdadero)
        {

            fgets(s, sizeof(s), arch_notas);

            nombre = strtok(s, ",");
            n1 = strtok(NULL, ",");
            n2 = strtok(NULL, ",");
            n3 = strtok(NULL, ",");
            n4 = strtok(NULL, "");

            if (nombre && n1 && n2 && n3 && n4) {
                
                printf("Nombre: %s\n", nombre);
                printf("Nota 1: %s\n", n1);
                printf("Nota 2: %s\n", n2);
                printf("Nota 3: %s\n", n3);
                printf("Nota 4: %s\n", n4);
                ndef = (atof(n1) + atof(n2) + atof(n3) + atof(n4)) / 4;
                printf("Nota definitiva: %.2f\n\n", ndef);
            } else {
                printf("Formato inválido");
            }    
        }

        fclose(arch_notas); //cerrando el archivo
        return 0;

    }
}
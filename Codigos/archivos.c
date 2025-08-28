#include <stdio.h>

int main(int argc, char const *argv[]){
    
    //fopen: para abrir archivos

    /*
    Una lista de parámetros opentype para la función fopen son:

    "r" : abrir un archivo para lectura, el fichero debe existir.
    "w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
    "a" : abrir un archivo para escritura al final del contenido, si no existe se crea.
    "r+" : abrir un archivo para lectura y escritura, el fichero debe existir.
    "w+" : crear un archivo para lectura y escritura, se crea si no existe o se sobreescribe si existe.
    "r+b ó rb+" : Abre un archivo en modo binario para actualización (lectura y escritura).
    "rb" : Abre un archivo en modo binario para lectura.

    */

    FILE *arch_mediciones; //declaración de un puntero de tipo FILE
    arch_mediciones = fopen("mediciones.txt", "r"); //abriendo el archivo en modo lectura

    char temps[5];

    if (arch_mediciones == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; //Finaliza el programa en este retirn
    }
    else {
        while (feof (arch_mediciones)==0)
        {
            fgets(temps, 5, arch_mediciones);
            printf("Temperatura: %s\n", temps);
        }
        
    }

    //fclose
    fclose(arch_mediciones); //cerrando el archivo
    return 0; //Instrucción final

    
}
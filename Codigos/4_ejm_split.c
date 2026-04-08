#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "CC-56555987-JUAN PEREZ";

    char *tipo   = strtok(s, "-");
    char *numero = strtok(NULL, "-");
    char *nombre = strtok(NULL, "");   // toma el resto (soportado en muchos compiladores)

    if (tipo && numero && nombre) {
        printf("Tipo  : %s\n", tipo);
        printf("Número: %s\n", numero);
        printf("Nombre: %s\n", nombre);
    } else {
        puts("Formato inválido");
    }    
    return 0;
}

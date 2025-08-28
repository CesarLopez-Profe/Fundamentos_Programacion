#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
   
    //1. Declarar el puntero del archivo
    FILE *arc_serie;

    //2. Abrir el archivo en modo escritura "w" con fopen
    arc_serie = fopen("C:\\Users\\B09S202est\\Documents\\Flowgorithm\\algoritmos\\serie.txt","w");

    if(arc_serie == NULL){
        printf("Error al abrir el archivo \n");
        return 1;
    }
    else{
        for(int nro = 1; nro<=10;nro++){
            fprintf(arc_serie,"%d \n",nro);
        }
    }
    
    fclose(arc_serie);
    
    return 0; //Instrucción final

    
}
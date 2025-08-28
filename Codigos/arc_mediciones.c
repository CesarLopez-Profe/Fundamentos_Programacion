#include <stdio.h>

int main(int argc, char const *argv[]){

    //1.Declarar una variable tipo apuntador hacia la dirección del archivo
    FILE *arch_mediciones;
    //2. abrir el archivo
    arch_mediciones = fopen("C:\\Users\\B09S202est\\Documents\\Flowgorithm\\algoritmos\\mediciones.txt","r");
    //3. definir una variable cadena de caracteres
    char linea_temp[5];
    //Declaro otras variables que necesite
    int temp;

    //4.Validar si el archivo no está vacío
    if(arch_mediciones == NULL){ //==>puntero nulo
        printf("Error al abrir el archivo. \n");
        return 1;
    }
    else{
        //5. Leer la primera línea
        fgets(linea_temp,5,arch_mediciones);
        
        //6. Recorrer el archivo con while
        while(feof(arch_mediciones)==0){  //feof devuelve 0 cuando no ha llegado al fin de archivo

            temp = atoi(linea_temp);

            if(temp<=10){
                printf ("%d grados : Hace Frio\n",temp);
            }
            
            else if(temp>10 && temp <=20){
                printf ("%d grados : Esta Fresco\n",temp);
            }

            else if(temp>32 && temp <=32){
                printf ("%d grados : Hace Calor\n",temp);
            }

            else if(temp>32){
                printf ("%d grados : Calor Insoportable\n",temp);
            }

            else{
                printf ("%d grados : Temperatura no evaluada\n",temp);
            }


            fgets(linea_temp,5,arch_mediciones); //instr de continuidad para leer las siguientes líneas
        }
    }

    //7. Cerrar archivo afuera del while
    fclose(arch_mediciones);

    return 0;
}
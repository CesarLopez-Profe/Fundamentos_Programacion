#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //1. Declarar y abrir archivo
    FILE *arc_medic;
    arc_medic = fopen("C:\\Users\\B09S202est\\Documents\\programacion\\Fund_prog\\_80mediciones.txt","r");

    //2. Declarar Variables
    int v_medic[80], cont_lin=0, pos_int=0, medic_int=0;
    char opc, linea_medic[100];

    //3. Validar archivo con datos
    if(arc_medic==NULL){
        printf("Error al abrir el archivo");
        return -1;
    }
    else{
        //4. Menu (do While)
        do{

            printf("\nMENU DE OPCIONES\n");
            printf("1. Inicializar el vector con 0\n");
            printf("2. Validar el archivo \n");
            printf("3. Vaciar el archivo al vector\n");
            printf("4. Imprimir el vector\n");
            printf("9. Salir\n");

            //Leer la opción 
            opc = getchar();
            //limpiar para quitar el \n
            while(getchar() != '\n');

         
            

            //Switch Dentro del do while para cada opción
            switch (opc){

                case '1': memset(v_medic,0,sizeof(v_medic));
                        printf("Vector inicializado exitosamente\n");
                    break;

                case '2': 
                    rewind(arc_medic); //para ir a la linea 1 del archivo
                    while (feof(arc_medic) == 0){
                        //Leer las lineas
                        fgets(linea_medic, sizeof(linea_medic),arc_medic);
                        //Contar lineas
                        cont_lin++;
                    }
                    printf("La cantidad de lineas en el archivo es %d",cont_lin);
                    break;

                case '3':
                    //validar si tengo el archivo completo
                    if(cont_lin==160){
                        //Para llenar el vector
                        //1. recorrer el archivo
                        //2.leer la linea que tiene la posición, limpiar, convertir a entero y almacenarla en pos_int
                        //3.si no es fin de archivo, leer la medición, limpiar, convertir a entero y almacenarla en med_int
                        //4.con las dos variables anteriores --> v_medic[pos_int] = medic_int
                        printf("Vaciando el archivo al vector\n");
                        rewind(arc_medic); //para ir a la linea 1 del archivo
                        while(feof(arc_medic)==0){
                            fgets(linea_medic,sizeof(linea_medic),arc_medic);
                            linea_medic[strcspn(linea_medic, "\n")] = '\0'; //cambia en enter por \0 para convertir a entero
                            pos_int = atoi(linea_medic); //Ya tengo la posición

                            if(feof(arc_medic) == 0){
                                fgets(linea_medic,sizeof(linea_medic),arc_medic);
                                linea_medic[strcspn(linea_medic, "\n")] = '\0'; //cambia en enter por \0 para convertir a entero
                                medic_int = atoi(linea_medic);
                                printf("Llenando la posición %d con la medición %d\n", pos_int,medic_int);
                                v_medic[pos_int] = medic_int;
                            }
                        }
                        printf("Termino el vaciado\n");

                    }
                    else 
                        printf ("No se puede vaciar el archivo en el vector, faltan o sobran datos\n");
                    break;

                case '4': printf("|");
                        for(int pos = 0; pos <80; pos++){
                            printf(" %d |",v_medic[pos]);
                        }
                    break;

                case '9': printf("Programa Termina\n");
                    break;

                default:
                    break;
            }
        } while (opc != '9');
    }

    fclose(arc_medic);

    return 0;
}

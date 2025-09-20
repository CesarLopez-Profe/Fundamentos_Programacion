#include <string.h> //vamos a trabajar algunas operaciones

int main(int argc, char const *argv[])
{
    
    //declaracion: 
    int v_enteros[5], tam_vec=0;
    float v_reales[10];
    int v_puntos[] = {10,15,12,8,25,3};

    printf("El tamano del vector en bytes es: %d\n", sizeof(v_enteros));
    tam_vec = sizeof(v_enteros) / sizeof(int);
    printf("La longitud del vector es de %d posiciones\n", tam_vec);

    //en la libreria string hay una función que se llama memset para incializar todo el vector
    memset(v_enteros,0,sizeof(v_enteros));

    //llenar el vector con randoms
    for(int pos = 0; pos < tam_vec; pos++){
        v_enteros[pos] = rand()%100 + 1;
    }

    printf("Vector con aleatorios\n");
    for(int pos = 0; pos < tam_vec; pos++){
       
        printf("Posicion %d tiene el valor %d \n", pos, v_enteros[pos]);
    }


    for(int pos = 0; pos < tam_vec; pos++){
       
        printf("| %d ", v_enteros[pos]);
    }
    printf("|\n");



    return 0;
}

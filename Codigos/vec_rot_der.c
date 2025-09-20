#include <string.h>

int main(int argc, char const *argv[])
{
    //size_t tam = (size_t)((rand() % 11) + 5);
    int vec_nros[5], longi=0, ult_elm=0;

    longi = sizeof(vec_nros)/sizeof(int);

    for(int pos = 0; pos < longi; pos++){
       vec_nros[pos] = rand()%100 + 1;
    }

    printf("Vector Original");
    for(int i = 0; i < longi; i++){
            printf("| %d ",vec_nros[i]);
        }
    printf("|\n");

    for(int rot = 1; rot <= longi; rot++){ //Rotaciones
        ult_elm = vec_nros[longi-1];
        
        for(int elem = longi-1; elem > 0; elem--){ //Halar los elementos
            vec_nros[elem] = vec_nros[elem-1];
        }
        vec_nros[0] = ult_elm;

        printf("Rotacion # %d \n", rot);

        for(int i = 0; i < longi; i++){
            printf("| %d ",vec_nros[i]);
        }
        printf("|\n");
    }

    return 0;
}

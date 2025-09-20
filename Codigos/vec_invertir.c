#include <string.h>

int main(int argc, char const *argv[])
{
    int vec1[10], vec2[10], longi=0;

    longi = sizeof(vec1)/sizeof(int);

    memset(vec1,0,sizeof(vec1));
    memset(vec2,0,sizeof(vec2));

    for(int pos = 0; pos < longi; pos++){
       vec1[pos] = rand()%100 + 1;
    }

    printf("\nVector 1\n");

    for(int pos = 0; pos < longi; pos++){
        printf("| %d ", vec1[pos]);
    }
    printf("|\n");


    //Ciclo para Invertir
    for(int pos = 0; pos < longi; pos++){
        vec2[longi - 1 -pos] = vec1[pos];
    }

    printf("\nVector 2\n");

    for(int pos = 0; pos < longi; pos++){
        printf("| %d ", vec2[pos]);
    }
    printf("|\n");
    
    return 0;
}

int main(int argc, char const *argv[]){
   
    int cant_lotes=50, cantcajaxlote = 20, cantempxcaja = 30, cantgallxemp=150;

    for(int lote = 1; lote <= cant_lotes; lote++){
        for(int caja = 1; caja <= cantcajaxlote; caja++){
            for(int empaque = 1; empaque <= cantempxcaja; empaque++){
                printf("Lote: %d Caja : %d Empaque: %d ==> ",lote,caja,empaque);
                for(int galleta=1;galleta <= cantgallxemp; galleta++ ){
                    printf("#");
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0; //Instrucción final

    
}
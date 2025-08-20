int main(int argc, char const *argv[]){
   
    char dotacion;
    int nro_camas=0;

    printf("Ingrese la dotación de la habitacion, A para AA y V para Ventilador\n");
    scanf("%c",&dotacion);

    if(dotacion == 'A'){
        printf("Selecciono AA");
    }
    else if(dotacion == 'V'){
        printf("Ventilador");
    }
    else{
        printf("No valida");
    }


    return 0; //Instrucción final

    
}
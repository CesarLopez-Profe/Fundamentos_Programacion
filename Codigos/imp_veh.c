#include <stdio.h>
int main(int argc, char const *argv[]){
   
    int decada_modelo=0, avaluo=0;
    double valor_seg=0,val_imp_rod=0,total=0;

    printf("Ingrese la decada del vehiculo: \n");
    scanf("%d",&decada_modelo);

    printf("Ingrese el avaluo del vehiculo: \n");
    scanf("%d",&avaluo);

    if (avaluo > 0 && decada_modelo%10 == 0 && decada_modelo <100 && decada_modelo >=0){

        if(decada_modelo==70){
            valor_seg = avaluo * (0.876/100);
            val_imp_rod = avaluo * (3.76/100);
            total = valor_seg + val_imp_rod;
        }

        else if(decada_modelo==80){
            valor_seg = avaluo * (0.854/100);
            val_imp_rod = avaluo * (3.98/100);
            total = valor_seg + val_imp_rod;
        }
        
        else if(decada_modelo==90){
            valor_seg = avaluo * (0.816/100);
            val_imp_rod = avaluo * (4.09/100);
            total = valor_seg + val_imp_rod;
        }
        
        else if(decada_modelo==0){
            valor_seg = avaluo * (0.798/100);
            val_imp_rod = avaluo * (4.34/100);
            total = valor_seg + val_imp_rod;
        }
        
        else if(decada_modelo==10){
            valor_seg = avaluo * (0.712/100);
            val_imp_rod = avaluo * (4.93/100);
            total = valor_seg + val_imp_rod;
        }

        else if(decada_modelo==20){
            valor_seg = avaluo * (0.699/100);
            val_imp_rod = avaluo * (5.68/100);
            total = valor_seg + val_imp_rod;
        }
        
        else{
            valor_seg = avaluo * (0.9/100);
            val_imp_rod = avaluo * (6/100);
            total = valor_seg + val_imp_rod;
        }

        printf("El valor del seguro para un avaluo de %d es %.2f \n", avaluo, valor_seg);
        printf("El valor del impuesto para un avaluo de %d es %.2f \n", avaluo, val_imp_rod);
        printf("El valor total a pagar para un avaluo de %d es %.2f \n", avaluo, total);

    }
    else{
        printf("Revise los datos de entrada");
    }

    return 0; //Instrucción final
    
}
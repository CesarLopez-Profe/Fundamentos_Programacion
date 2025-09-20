#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*printf("\033[0;31m\n Hola Mundo  \033[0m \n");
    printf("\033[0;37;41m\n  \033[0m \n");*/

    char opc_n1, opc_nesp, opc_nayd;
    int hh, mm, mes, dia;

    
    do{
        printf("\nMENU GENERAL\n");
        printf("1. Agendar cita con Especialista\n");
        printf("2. Agendar cita Ayudas Diagnosticas\n");
        printf("3. Agendar cita Medico General\n");
        printf("9. Para Salir\n");

        //Leer opc_n1, limpiar
        opc_n1 = getchar();
        while(getchar() != '\n');

        switch (opc_n1) {

            case '1':   

                do{
                    printf("\nMENU SELECCION CITA CON ESPECIALISTA\n");
                    printf("1. Hepatologia\n");
                    printf("2. Oftalmologia\n");
                    printf("3. Cardiologia\n");
                    printf("4. Internista\n");
                    printf("9. Salir\n");
                
                    opc_nesp = getchar();
                    while(getchar() != '\n');

                    switch (opc_nesp)
                    {
                        case '1': printf("\nCita con Hepatologo asignada\n");
                            break;
                        case '2': printf("\nCita con Oftalmologo asignada\n");
                            break;
                        case '3': printf("\nCita con Cardiologo asignada\n");
                            break;
                        case '4': printf("\nCita con Internista asignada\n");
                            break;
                        case '9': printf("Volviendo al menu anterior\n");
                            break;
                        default: 
                            printf("\033[0;37;41m Opcion no valida \033[0m\n");
                    }

                }while (opc_nesp != '9');
                
                break; //1er caso del SWTICH opcn1

            case '2':

                do{
                    printf("\nMENU SELECCION AYUDAS DIAGNOSTICAS\n");
                    printf("1. Rayos X\n");
                    printf("2. Tomografia\n");
                    printf("3. TAC\n");
                    printf("9. Salir\n");
                
                    opc_nayd = getchar();
                    while(getchar() != '\n');

                    switch (opc_nayd)
                    {
                        case '1': printf("\nAsignada Cita Rayos X\n");
                            break;
                        case '2': printf("\nAsignada Cita Tomografia\n");
                            break;
                        case '3': printf("\nAsignada Cita TAC\n");
                            break;
                            break;
                        case '9': printf("Volviendo al menu anterior\n");
                            break;
                        default: 
                            printf("\033[0;37;41m Opcion no valida \033[0m\n");
                    }

                }while (opc_nayd != '9');

                break; //2do caso del SWTICH opcn1

            case '3': printf("");
                break;

            case '9': printf("");
                break;
            
            default: printf("\033[0;37;41m Opcion no valida \033[0m\n");

        }
    }while(opc_n1 !='9');

    mes = (rand() % 13) + 1; 

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11) 
        dia = (rand() % 31) + 1;
    else if (mes == 2)
        dia = (rand() % 29) + 1; //ojo bisiesto
    else
        dia = (rand() % 32) + 1;


    hh = (rand() % 12) + 6;
    mm = (rand() % 4) * 15; 
    printf("\033[0;37;42m La cita queda asignada para el dia: %d del mes %d  a las  %d:%d \033[0m\n", dia, mes, hh, mm);

    printf("Finalizo");



    return 0;
}

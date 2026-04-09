#include <stdio.h>


int main(int argc, char const *argv[]){
    int cantretirar, cajab50, cajab20, cajab10, cantb50, cantb20, cantb10, saldocajero, faltante;

    cajab50 = 60;
    cajab20 = 60;
    cajab10 = 60;
    cantb50 = 0;
    cantb20 = 0;
    cantb10 = 0;
    saldocajero = cajab50 * 50000 + cajab20 * 20000 + cajab10 * 10000;

    printf("Ingrese el monto a retirar: ");
    scanf("%d", &cantretirar);

    faltante = cantretirar;

    if (cantretirar % 10000 == 0 && saldocajero >= cantretirar && cantretirar >= 20000 && cantretirar <= 1200000) {
        if (cantretirar >= 50000) {
            cantb50 = cantretirar / 50000;                // integer division, same as (double) cast then truncation
            if (cajab50 >= cantb50) {
                cajab50 = cajab50 - cantb50;
                faltante = cantretirar - cantb50 * 50000;
            } else {
                faltante = cantretirar - cajab50 * 50000;
                cantb50 = cajab50;
                cajab50 = 0;
            }
            if (faltante >= 20000) {
                cantb20 = faltante / 20000;
                if (cajab20 >= cantb20) {
                    cajab20 = cajab20 - cantb20;
                    faltante = faltante - cantb20 * 20000;
                } else {
                    faltante = cantretirar - cajab20 * 20000;   // original uses cantretirar, not faltante
                    cantb20 = cajab20;
                    cajab20 = 0;
                }
            }
            if (faltante >= 10000) {
                cantb10 = faltante / 10000;
                if (cajab10 >= cantb10) {
                    cajab10 = cajab10 - cantb10;
                    faltante = faltante - cantb10 * 10000;
                } else {
                    faltante = cantretirar - cajab10 * 10000;   // original uses cantretirar
                    cantb10 = cajab10;
                    cajab10 = 0;
                }
            }
        } else {
            if (cantretirar >= 20000) {
                cantb20 = cantretirar / 20000;
                if (cajab20 >= cantb20) {
                    cajab20 = cajab20 - cantb20;
                    faltante = faltante - cantb20 * 20000;
                } else {
                    faltante = cantretirar - cajab20 * 20000;
                    cantb20 = cajab20;
                    cajab20 = 0;
                }
                if (faltante >= 10000) {
                    cantb10 = faltante / 10000;
                    if (cajab10 >= cantb10) {
                        cajab10 = cajab10 - cantb10;
                        faltante = faltante - cantb10 * 10000;
                    } else {
                        faltante = cantretirar - cajab10 * 10000;
                        cantb10 = cajab10;
                        cajab10 = 0;
                    }
                }
            }
        }
        printf("Valor Entregado %d\n", cantretirar);
        printf("Cantidad de billetes de 50.000 entregados %d\n", cantb50);
        printf("Cantidad de billetes de 20.000 entregados %d\n", cantb20);
        printf("Cantidad de billetes de 10.000 entregados %d\n", cantb10);
    } else {
        printf("No se puede entregar la cantidad solicitada\n");
    }

    return 0;
}
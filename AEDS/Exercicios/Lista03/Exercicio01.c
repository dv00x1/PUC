/*
Construa um algoritmo que identifique se é um inteiro lido par ou ímpar.
*/
#include <stdio.h>

int main(){
    int numero = 30;

    if(numero % 2 == 0){
        printf("Eh par");
    }else{
        printf("Eh impar");
    }

    return 0;
}
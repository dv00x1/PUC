/*
Construa um algoritmo que verifique qual o maior valor entre três números reais lidos.
*/
#include <stdio.h>

int main(){
    int numero1 = 3;
    int numero2 = 9;
    int numero3 = 3;

    if(numero1 > numero2 && numero1 > numero2){
        printf("O numero: %d eh maior que %d e %d", numero1, numero2, numero3);
    }else if(numero2 > numero1 && numero2 > numero3){
        printf("O numero: %d eh maior que %d e %d", numero2, numero1, numero3);
    }else if(numero3 > numero1 && numero3 > numero2){
        printf("O numero: %d eh maior que %d e %d", numero3, numero1, numero2);
    }

    return 0;
}
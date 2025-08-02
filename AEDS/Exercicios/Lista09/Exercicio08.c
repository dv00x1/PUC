/*
Ler um inteiro qualquer. Informar se é ele um número primo ou não
*/
#include <stdio.h>

int main(){
    int numero = 0;
    int ehPrimo = 1;
    printf("Fale seu numero:");
    scanf("%d", &numero);

    if(numero <= 1){
        ehPrimo = 0;
    }else{
        for(int i = 2;i< numero; i++){
            if(numero % i == 0){
                ehPrimo = 0;
            }
        }
    }

    if(ehPrimo){
        printf("Numero primo\n");
    }else{
        printf("Nao eh primo");
    }
    return 0;
}
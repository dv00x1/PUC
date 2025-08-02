/*
Ler um conjunto de 10 números reais. Ao final, informar a amplitude dos valores lidos.
*/

#include <stdio.h>

int main(){
    float numero = 0;
    float maior = 0;
    float menor = 1000;
    float amplitude = 0;

    for(int i = 1; i <= 10; i++){
        printf("Informe o %d numero: ", i);
        scanf("%f", &numero);

        f(maior < numero){
            maior = numero;
        }

        if(menor > numero){
            menor = numero;
        }
    }

    amplitude = maior - menor;
    printf("%.1f", amplitude);
    
    return 0;
}
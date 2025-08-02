/*
Ler um conjunto de números reais. Sabe-se que o valor zero não é um valor válido para o domínio,
indicando, unicamente, a interrupção da leitura. Ao final, informar a amplitude dos valores lidos.
*/
#include <stdio.h>

int main(){
    float numero = 0;
    float maior = 0;
    float menor = 1000; 
    float amplitude = 0;
    int contador = 1;
    int primeiro = 1;
        do{
        printf("Escolha o %d numero: ", contador);
        scanf("%f", &numero);
        printf("Digite 0 para sair do aplicativo.\n");

        if(numero != 0){
        contador++;
        if(maior < numero){
            maior = numero;
        }

        if(menor > numero){
            menor = numero;
        }
        }

    }while(numero != 0);
    amplitude = maior - menor;
    printf("%.1f", amplitude);
    //caso seja 3, -10, 20, 80 o numero 80 eh o maior e o -10 eh o menor ou seja 80 -(-10) = 90


   return 0;
}
/*
Ler um inteiro qualquer. Calcular e escrever o número de divisores que o número lido possui.
*/
#include <stdio.h>

int main(){
    int numero, contador = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++){
        if (numero % i == 0){
            contador++;
        }
    }
    printf("O número %d possui %d divisores.\n", numero, contador);

    return 0;
}
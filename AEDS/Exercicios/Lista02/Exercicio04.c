/*
Calcular o índice de massa corporal (IMC) de uma pessoa:
Índice de Massa Corporal: peso / altura2
*/
#include <stdio.h>

int main(){
    float peso = 63.4;
    float altura = 1.80;
    float imc = peso / (altura * altura);
    printf("%.1f", imc);

    return 0;
}
/*
Codifique em C o algoritmo relativo à seguinte questão: calcular o número de dias vividos até o último
aniversário.
*/
#include <stdio.h>

int main(){
    int anodenascimento = 2005;
    int anoatual = 2025;
    int anos = (anoatual - anodenascimento) * 365;
    printf("Dias: %d", anos);

    return 0;
}
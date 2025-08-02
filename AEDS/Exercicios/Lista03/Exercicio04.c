/*
Identificar se um ano lido é bissexto ou não. Pesquise o que deve ser observado para verificar se um ano
é bissexto.
*/
#include <stdio.h>

int main(){
    int ano = 2020;

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("Eh bissexto");
    }else{
        printf("Nao eh um ano bissexto");
    }
    return 0;
}
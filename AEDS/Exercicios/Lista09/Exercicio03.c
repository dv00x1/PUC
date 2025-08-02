/*
Escrever os 10 primeiros termos da série:
2, 5, 8, ...

5 - 2 = 3
8 - 5 = 3
*/
#include <stdio.h>

int main(){
    int numero = 2;
    for(int i =1; i <= 10; i++){
        printf("%d\n", numero);
        numero = numero + 3;
    }


    return 0;
}


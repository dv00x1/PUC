/*
Calcular o valor de H, com precisão de 10 termos, onde:
H = 1 + 2 + 3 + 4 ...
*/
#include <stdio.h>

int main(){
    int h = 0;
    for(int i = 1; i <= 10; i++){
        h = h + i;
    }
    printf("%d", h);
    return 0;
}
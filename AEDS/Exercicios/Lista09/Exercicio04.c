/*Escrever os 10 primeiros termos da série:
1 , 1 , 1 , 1 , ...
*/
#include <stdio.h>

int main(){
    int numero = 1;
    for(int i = 0; i <= 10; i++){
        printf("%d, ",numero);
    }
    return 0;
}
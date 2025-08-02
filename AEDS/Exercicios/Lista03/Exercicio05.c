/*
Ler três lados e verificar se eles atendem aos critérios para formação de um triângulo.
a + b > c
a + c > b
b + c > a
*/

#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite os tres lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os lados formam um triângulo.\n");
    } else {
        printf("Os lados nao formam um triângulo.\n");
    }
    return 0;
}

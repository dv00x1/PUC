/*
Ler três lados de um triângulo e, sendo ele válido, identificar o seu tipo: equilátero, isóscele ou
escaleno.
*/
#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite os tres lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    
    if(a + b > c && a + c > b && b + c > a) {
        printf("Eh um triangulo válido.\n");

        // Identificando o tipo
        if(a == b && b == c) {
            printf("Tipo: Equilatero\n");
        }else if(a == b || a == c || b == c) {
            printf("Tipo: Isosceles\n");
        } else{
            printf("Tipo: Escaleno\n");
        }
        }else{
        printf("Os lados informados nao formam um triangulo.\n");
    }

    return 0;
}

/*Codifique em C o algoritmo relativo à seguinte questão: calcular a área e o perímetro de um quadrado,*/
#include <stdio.h>

int area();
int perimetro();

int main(){
    int lado = 0;
    printf("Fala ai o lado:");
    scanf("%d", &lado);
    printf("Area: %d\n", area(lado));
    printf("Perimetro: %d", perimetro(lado));

    return 0;
}

int perimetro(int lado){
    int perimetro = 0;
    perimetro = lado * 4;

    return perimetro;
}

int area(int lado){
    int area = 0;
    area = lado * lado;

    return area;

}
/*Construa um algoritmo e codifique-o em C para o seguinte problema: calcular e escrever a área e o
perímetro de um círculo.
*/
#include <stdio.h>

float area(float pi, float raio);
float perimetro(float pi, float raio);

int main(){
    float raio = 0;
    float pi = 3.1416;
    printf("%.3f\n", area(pi, 3));
    printf("%.3f", perimetro(pi, 3));
    return 0;
}

float area(float pi, float raio){
    float contaarea = 0;
    contaarea = pi * (raio * raio);

    return contaarea;
}

float perimetro(float pi, float raio){
    float contaperimetro = 0;
    contaperimetro = 2 * pi * raio;

    return contaperimetro;
}
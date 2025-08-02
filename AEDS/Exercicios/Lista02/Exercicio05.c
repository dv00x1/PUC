/*
Uma família desejar planejar sua viagem. A partir da distância a ser percorrida (em Km) e da velocidade
média que tipicamente praticam em suas viagens, calcule o tempo que gastarão na viagem. Lembre-se
que:
Distância = Tempo x Velocidade
*/
#include <stdio.h>

int main(){
    float distancia = 90;
    float velocidade = 60;
    float tempo = 0;

    tempo = distancia / velocidade;
    printf("%.2f", tempo);


    return 0;
}
/*Refaça os programas do cálculo do peso ideal de uma pessoa, unificando ambos, peso ideal de pessoas
do gênero masculino e do gênero feminino. O usuário deverá informar o gênero através de um único
caractere, ‘M’ ou ‘F’, representando masculino ou feminino, respectivamente.
peso_ideal = (72.7 * altura) - 58 HOMEM
peso_ideal = (62.1 * altura) - 44.7 MULHER
*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char genero;
    float altura = 0;
    float pesoideal = 0;
    printf("Fale seu genero M/F: ");
    scanf(" %c", &genero);
    printf("Fale sua altura em metros: ");
    scanf("%f", &altura);
    genero = toupper(genero);
    if(genero == 'M'){
        pesoideal = (72.7 * altura) - 58;
        printf("%.2f", pesoideal);
    }else if(genero == 'F'){
        pesoideal = (62.1 * altura) - 44.7;
        printf("%.2f", pesoideal);
    }else{
        printf("Genero nao existente.");
    }
}
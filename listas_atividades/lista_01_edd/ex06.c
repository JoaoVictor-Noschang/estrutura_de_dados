/*
6. Cada degrau de uma escada tem X de altura. Escreva um algoritmo que receba essa altura e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário
*/

#include <stdio.h>
#include <math.h> // Necessário para a função ceil() (arredondar para cima)

int main() {

    float altura_degrau, altura_alcancar;
    int deve_subir;

    printf("Insira a altera do degrau (ex. 0.18): ");
    scanf("%f", &altura_degrau);

    printf("Insirsa a altura a ser alcancada (ex. 2.70): ");
    scanf("%f", &altura_alcancar);

    // Processamento: ceil() garante que o número de degraus seja suficiente para cobrir toda a altura
    deve_subir = ceil(altura_alcancar / altura_degrau);

    printf("C onsiderando que cada degrau tem %0.2f de altura, e seu objetivo e subir uma altura de %0.2f, voce devera subir %d degraus", altura_degrau, altura_alcancar, deve_subir);
}
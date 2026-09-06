/*
4. Escreva um programa em C que receba uma hora formada por hora e minutos, e calcule a hora digitada apenas em minutos.
*/

#include <stdio.h>

int main(void) {

    int horas, minutos, total_minutos;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    total_minutos = (horas * 60) + minutos;

    printf("O tempo %d hora(s) e %d minuto(s), equivale ao total de %d minutos.", horas, minutos, total_minutos);


    return 0;
}
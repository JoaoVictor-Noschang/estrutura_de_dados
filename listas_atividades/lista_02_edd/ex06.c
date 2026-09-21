/*
6.Crie um programa que leia um ano (ex: 2024) e determine se ele é bissexto ou não.
Regra de negócio: Um ano é bissexto se for divisível por 4 E (não for divisível por 100 OU for divisível por 400).
*/

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano:");
    scanf("%d", &ano);

    // primeiro verificamos se o resto da divisao do ano por 4 é exata
    // depois verificamos se a divisao por 100 não é exata
    // ou se a divisao por 400 é exata
    // sabemos que uma divisao é exata quando o seu resto é 0 (zero) 
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("O ano %d eh BISSEXTO :)", ano);
    } else {
        printf("O ano %d NAO eh bissexto :(", ano);
    }
}
/*
Utilizar FOR
5. Escreva um programa que solicite ao usuário um número inteiro (ex: 7). Em seguida, utilizando a estrutura para, mostre a tabuada desse número de 1 a 10 no formato:
    7 x 1 = 7
    7 x 2 = 14
    ...
    7 x 10 = 70
 */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro para ver a tabuada: ");
    scanf("%d", &numero);

    printf("--- TABUADA DO %d ---\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

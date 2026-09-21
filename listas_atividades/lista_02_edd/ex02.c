/*
2. Crie um programa que leia um número inteiro e exiba se ele é Par ou Ímpar.
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero eh PAR!");
    } else {
        printf("O numeor eh IMPAR!");
    }
}
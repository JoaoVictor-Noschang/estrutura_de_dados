/*
1.Escreva um programa em C que solicite a idade de uma pessoa e informe se ela é maior de idade (18 anos ou mais) ou menor de idade.
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }
}
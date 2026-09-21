/*
5. Faça um programa que receba um valor inteiro e verifique se ele está no intervalo fechado entre 10 e 50 (inclusive). Exiba mensagens apropriadas informando se o número está dentro ou fora do intervalo.
*/

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor para analise:");
    scanf("%d", &valor);

    if (valor >= 10 && valor <= 50) {
        printf("O valor %d esta dentro do intervalo :)", valor);
    } else {
        printf("Valor fora do intervalo :(");
    }
}

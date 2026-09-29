/* 1. Soma e Média de Elementos: Crie um programa que leia 10 números inteiros e os armazene em um vetor. Em seguida, calcule e exiba a soma de todos os valores, a média aritmética e quais elementos armazenados são estritamente maiores que a média. */

#include <stdio.h>

int main() {
    int vetor[10];
    int soma = 0;
    float media;

    // Leitura dos 10 elementos e acúmulo da soma
    for (int i = 0; i < 10; i++) {
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // Cálculo da média
    media = soma / 10.0;

    printf("\nSoma dos elementos: %d\n", soma);
    printf("Media aritmetica: %.2f\n", media);

    // Exibição dos elementos que são estritamente maiores que a média
    printf("Elementos estritamente maiores que a media:\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
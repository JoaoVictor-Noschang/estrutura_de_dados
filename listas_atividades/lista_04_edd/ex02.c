/* 2. Inversão de Vetor: Escreva um algoritmo que receba 8 números inteiros em um vetor A. Crie um segundo vetor B do mesmo tamanho que receba os elementos de A em ordem inversa e exiba o vetor B na tela. */
#include <stdio.h>

int main() {
    int vetA[8];
    int vetB[8];

    // Leitura dos elementos do vetor A
    for (int i = 0; i < 8; i++) {
        printf("Digite o elemento [%d] do vetor A: ", i);
        scanf("%d", &vetA[i]);
    }

    // Copia os elementos de A para B em ordem inversa
    // A posição i de B recebe a posição (7 - i) de A
    for (int i = 0; i < 8; i++) {
        vetB[i] = vetA[7 - i];
    }

    // Impressão do vetor A
    printf("\nVetor A:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetA[i]);
    }
    printf("\n");

    // Impressão do vetor B
    printf("\nVetor B (ordem inversa de A):\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetB[i]);
    }
    printf("\n");

    return 0;
}
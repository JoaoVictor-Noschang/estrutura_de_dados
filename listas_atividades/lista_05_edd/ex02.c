/* Exercício 02 - Soma de Todos os Elementos: Escreva um programa que leia uma matriz 6x6 de números inteiros, calcule a soma total de todos os valores armazenados e a média, e exiba o resultado final na tela. */
#include <stdio.h>

int main() {
    int matriz[6][6];
    int soma_total = 0;
    float media;
    int total_elementos = 6 * 6; // Uma matriz 6x6 possui 36 elementos

    // Leitura dos elementos e acúmulo imediato da soma total
    printf("Digite os elementos da matriz 6x6:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma_total += matriz[i][j];
        }
    }

    // Cálculo da média
    media = soma_total / total_elementos;

    // Imprimindo a matriz
    printf("Matriz preenchida pelo usuario:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d \t", matriz[i][j]);
        }
        puts("");
    }

    // Exibição do resultado final
    printf("\nSoma de todos os elementos: %d\n", soma_total);
    printf("Media dos elementos: %.2f\n", media);

    return 0;
}
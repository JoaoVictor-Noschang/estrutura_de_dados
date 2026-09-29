/* Exercício 01 - Soma da Diagonal Principal: Construa um programa que leia uma matriz 3x3 de números inteiros e calcule a soma apenas dos elementos localizados na diagonal principal (M[i][j] onde i = j). */

#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_diagonal = 0;

    // Leitura dos elementos da matriz 3x3 utilizando laços aninhados
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma apenas os elementos onde o índice da linha eh igual ao índice da coluna (i == j)
    for (int i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    // ou percorremos toda a matriz e colocamos um if para verificar os indices iguais
    /*
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                soma_diagonal += matriz[i][j];
            }
        }
    }
    */

    // Exibição do resultado
    printf("\nA soma dos elementos da diagonal principal eh: %d\n", soma_diagonal);

    return 0;
}
// Exercício 9: Matriz 3x3

#include <stdio.h>

int main(void) {
    int mat[3][3];
    int somaTotal = 0, somaDiagonal = 0;

    /* Lê linha por linha: i é a linha, j é a coluna */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    /* Soma todos os elementos e, quando linha = coluna, soma a diagonal */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somaTotal += mat[i][j];
            if (i == j)               /* diagonal principal: [0][0], [1][1], [2][2] */
                somaDiagonal += mat[i][j];
        }
    }

    printf("Soma total: %d\n", somaTotal);
    printf("Soma da diagonal principal: %d\n", somaDiagonal);
    return 0;
}

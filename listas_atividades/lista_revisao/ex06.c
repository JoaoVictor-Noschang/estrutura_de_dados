// Exercício 6: for (repetição contada)

#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    /* i começa em 1 e vai até 10, somando 1 a cada volta */
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
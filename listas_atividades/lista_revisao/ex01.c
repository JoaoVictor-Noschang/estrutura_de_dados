// Exercício 1: Operadores aritméticos e módulo

#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Dobro: %d\n", n * 2);          /* multiplica por 2 */
    printf("Metade inteira: %d\n", n / 2); /* divisão de inteiros descarta a parte decimal */
    printf("Resto da divisão por 2: %d\n", n % 2); /* % devolve o resto da divisão */

    return 0;
}


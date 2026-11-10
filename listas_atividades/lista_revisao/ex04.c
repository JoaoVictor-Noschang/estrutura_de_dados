// Exercício 4: while (pré-teste)

#include <stdio.h>

int main(void) {
    int n, soma = 0;

    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &n);       /* lê o primeiro número antes do laço */

    /* O laço só repete enquanto n for diferente de 0 */
    while (n != 0) {
        soma += n;         /* acumula o valor na soma */
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &n);   /* lê o próximo número */
    }

    printf("Soma total: %d\n", soma);
    return 0;
}
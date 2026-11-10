// Exercício 10: Função com retorno

#include <stdio.h>

/* Retorna 1 se n for par e 0 se for ímpar */
int ehPar(int n) {
    if (n % 2 == 0)   /* resto 0 na divisão por 2 = par */
        return 1;
    return 0;
}

int main(void) {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    /* Usa o retorno da função para decidir a mensagem */
    if (ehPar(n))
        printf("PAR\n");
    else
        printf("IMPAR\n");

    return 0;
}

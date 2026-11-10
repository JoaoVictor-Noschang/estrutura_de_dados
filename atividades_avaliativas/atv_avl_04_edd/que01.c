//Questão 01 – Somando Dois Números

#include <stdio.h>

/* Recebe dois inteiros e devolve a soma deles */
int somar(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;

    /* Lê os dois números digitados pelo usuário */
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    /* Chama a função e mostra o resultado */
    printf("A soma eh: %d\n", somar(a, b));
    return 0;
}
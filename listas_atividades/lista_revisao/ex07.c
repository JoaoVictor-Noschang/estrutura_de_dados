// Exercício 7: Vetores

#include <stdio.h>

int main(void) {
    int v[10];
    int soma = 0, maior, indiceMaior;
    float media;

    /* Lê os 10 valores (índices de 0 a 9) */
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    /* Começa supondo que o primeiro elemento é o maior */
    maior = v[0];
    indiceMaior = 0;

    /* Percorre o vetor somando e procurando o maior */
    for (int i = 0; i < 10; i++) {
        soma += v[i];
        if (v[i] > maior) {
            maior = v[i];
            indiceMaior = i;
        }
    }

    media = soma / 10.0f;   /* 10.0f força divisão com decimais */

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior elemento: %d (indice %d)\n", maior, indiceMaior);

    return 0;
}

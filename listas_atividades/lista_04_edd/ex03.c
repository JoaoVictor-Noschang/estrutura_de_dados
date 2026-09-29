/* 3. Maior e Menor Valor com Índice: Desenvolva um programa que leia 12 valores inteiros, identifique qual é o maior e o menor valor digitado e mostre a posição (índice) de cada um deles dentro do vetor. */
#include <stdio.h>

int main() {
    int vetor[12];
    int indice_maior = 0;
    int indice_menor = 0;

    // Leitura dos 12 valores
    for (int i = 0; i < 12; i++) {
        printf("Digite o valor para o indice [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Assume inicialmente que o primeiro elemento (índice 0) é o maior e o menor,
    // depois compara com o restante do vetor.
    for (int i = 1; i < 12; i++) {
        if (vetor[i] > vetor[indice_maior]) {
            indice_maior = i;
        }
        if (vetor[i] < vetor[indice_menor]) {
            indice_menor = i;
        }
    }

    // Exibição dos resultados
    printf("\nMaior valor: %d (no indice [%d])\n", vetor[indice_maior], indice_maior);
    printf("Menor valor: %d (no indice [%d])\n", vetor[indice_menor], indice_menor);

    return 0;
}
/*
Utilizar FOR
6. Escreva um programa que pergunte ao usuário a quantidade de notas que ele deseja digitar (ex: 5). Em seguida, use o para para ler essa quantidade exata de notas, calcular a soma de todas elas e, ao final, exibir a média aritmética da turma.
 */

#include <stdio.h>

int main() {
    int quantidade;
    float nota, soma = 0.0, media;

    printf("Digite a quantidade de notas que deseja inserir: ");
    scanf("%d", &quantidade);

    // Validação simples para evitar divisão por zero
    if (quantidade <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota; // Equivale a: soma = soma + nota
    }

    media = soma / quantidade;

    printf("\nSoma total das notas: %.2f\n", soma);
    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}

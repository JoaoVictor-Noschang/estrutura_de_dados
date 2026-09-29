/* 6. Inversão Manual: Faça um programa que leia uma string de até 50 caracteres e imprima essa string ao contrário sem utilizar funções prontas de inversão de biblioteca. */
#include <stdio.h>

int main() {
    char texto[51];
    int tamanho = 0;

    printf("Digite uma string (ate 50 caracteres): ");
    fgets(texto, sizeof(texto), stdin);

    // Calcula o tamanho útil da string manualmente ignorando '\0' e a quebra de linha '\n'
    while (texto[tamanho] != '\0' && texto[tamanho] != '\n') {
        tamanho++;
    }

    printf("String invertida: ");
    // Percorre o texto do último caractere válido de volta até o índice 0
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    printf("\n");

    return 0;
}
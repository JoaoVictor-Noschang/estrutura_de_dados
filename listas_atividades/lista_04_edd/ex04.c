/* 4. Contagem de Vogais: Crie um programa que receba uma string do usuário (utilizando fgets) e conte quantas vogais (a, e, i, o, u, tanto maiúsculas quanto minúsculas) existem no texto inserido. */
#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[100];
    int total_vogais = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Percorre a string até o caractere nulo '\0'
    for (int i = 0; texto[i] != '\0'; i++) {
        // Converte o caractere para minúsculo para simplificar a checagem
        char c = tolower(texto[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            total_vogais++;
        }
    }

    printf("Total de vogais no texto: %d\n", total_vogais);

    return 0;
}
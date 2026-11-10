// Exercício 8: Strings com fgets e contagem de vogais

#include <stdio.h>
#include <ctype.h>   /* tolower() */

int main(void) {
    char texto[51];   /* 50 caracteres + '\0' no fim */
    int contador = 0;

    printf("Digite um texto (ate 50 caracteres): ");
    fflush(stdin);                 /* limpa o buffer (não é padrão em todos os compiladores) */
    fgets(texto, 50, stdin);  /* lê a linha inteira, com espaços */

    /* Percorre até encontrar o fim da string '\0' */
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);  /* transforma em minúscula para aceitar A e a */
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }

    printf("Quantidade de vogais: %d\n", contador);
    return 0;
}
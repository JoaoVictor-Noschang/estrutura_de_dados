// Questão 1: Registro de cadastro de livro

#include <stdio.h>
#include <string.h>

/* Modelo do livro: agrupa título, autor e ano em um só tipo */
struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};

int main(void) {
    struct Livro l;   /* variável do tipo struct Livro */

    printf("Digite o titulo: ");
    fgets(l.titulo, sizeof(l.titulo), stdin);
    l.titulo[strcspn(l.titulo, "\n")] = '\0';   /* remove o '\n' que o fgets guarda */

    printf("Digite o autor: ");
    fgets(l.autor, sizeof(l.autor), stdin);
    l.autor[strcspn(l.autor, "\n")] = '\0';

    /* Lê o ano por último, então não precisa de fgets depois do scanf */
    printf("Digite o ano: ");
    scanf("%d", &l.ano);

    /* Acessa cada campo com o ponto (.) */
    printf("\n--- Livro cadastrado ---\n");
    printf("Titulo: %s\n", l.titulo);
    printf("Autor: %s\n", l.autor);
    printf("Ano: %d\n", l.ano);

    return 0;
}
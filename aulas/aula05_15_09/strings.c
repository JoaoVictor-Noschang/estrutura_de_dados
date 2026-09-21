#include <stdio.h>

int main() {
    char nome[5];

    printf("Digite o seu nome:");
    gets(nome);
    fflush(stdin);

    printf("%s\n", nome);

    printf("Digite o seu nome:");
    fgets(nome, 5, stdin);
    fflush(stdin);

    //printf("O texto e :%s\n", nome);
    puts("O texto e:");
    puts(nome);

}

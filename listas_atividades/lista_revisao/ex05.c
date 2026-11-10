// Exercício 5: do...while (pós-teste)

#include <stdio.h>

int main(void) {
    float nota;

    /* do executa pelo menos uma vez, então pede a nota antes de testar */
    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
            printf("Nota invalida, tente novamente.\n");

    } while (nota < 0 || nota > 10);  /* repete enquanto a nota for inválida */

    printf("Nota válida registrada com sucesso!\n");
    return 0;
}

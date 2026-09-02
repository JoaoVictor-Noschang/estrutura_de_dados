#include <stdio.h>


int main(void) {

    /*
    printf("Igual: %d\n", 2 == 5);
    printf("Diferente: %d\n", 2 != 5);
    printf("Maior que: %d\n", 2 > 5);
    printf("Maior ou igual que: %d\n", 2 >= 5);
    printf("Menor que: %d\n", 2 < 5);
    printf("Menor ou igual que: %d\n", 2 <= 5);
    */


    float nota;

    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if (nota >= 6) {
        printf("Aluno Aprovado!");
    } else {
        printf("Aluno Reprovado!");
    }

    return 0;
}

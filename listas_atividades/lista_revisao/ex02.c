// Exercício 2: if / else e &&

#include <stdio.h>

int main(void) {
    float media;
    int frequencia;

    printf("Digite a media final: ");
    scanf("%f", &media);
    printf("Digite a frequencia (%%): ");
    scanf("%d", &frequencia);

    /* Aprovado só se AMBAS as condições forem verdadeiras (&&) */
    if (media >= 7.0f && frequencia >= 75)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
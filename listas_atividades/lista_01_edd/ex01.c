/*
    1.Escreva um programa em C que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada entre essas notas.
 */

#include <stdio.h>

int main(void) {

    float n1, n2, n3;
    float p1, p2, p3;
    float medPond;

    printf("Digite o valor para a NOTA 1:");
    scanf("%f", &n1);
    printf("Digite o valor para p PESO da nota 1:");
    scanf("%f", &p1);

    printf("Digite o valor para a nota 2:");
    scanf("%f", &n2);
    printf("Digite o valor para p PESO da nota 2:");
    scanf("%f", &p2);

    printf("Digite o valor para a nota 1:");
    scanf("%f", &n3);
    printf("Digite o valor para p PESO da nota 3:");
    scanf("%f", &p3);

    // Calculando a média ponderada do aluno
    medPond = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);
    printf("A media ponderada do aluno eh: %.2f", medPond);

    return 0;
}

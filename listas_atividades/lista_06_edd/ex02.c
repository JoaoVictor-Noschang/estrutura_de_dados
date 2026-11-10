// Questão 2: Struct passada para função

#include <stdio.h>

/* Retângulo guarda largura e altura */
struct Retangulo {
    float largura;
    float altura;
};

/* Recebe uma cópia da struct e devolve a área */
float calcularArea(struct Retangulo r) {
    return r.largura * r.altura;   /* acessa os campos com o ponto */
}

int main(void) {
    struct Retangulo r;

    printf("Digite a largura: ");
    scanf("%f", &r.largura);
    printf("Digite a altura: ");
    scanf("%f", &r.altura);

    /* Passa a struct inteira para a função */
    printf("Area: %.2f\n", calcularArea(r));

    return 0;
}
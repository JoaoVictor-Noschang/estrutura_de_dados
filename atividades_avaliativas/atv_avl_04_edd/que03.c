// Questão 03: Média e situação do aluno

#include <stdio.h>

/* Soma as duas notas e divide por 2 para obter a média aritmética */
float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2.0f;
}

/* Não retorna valor (void): só decide e exibe a situação */
void exibirSituacao(float media) {
    /* Média igual ou acima de 6.0 é aprovação */
    if (media >= 6.0f)
        printf("Situacao: Aprovado\n");
    else
        printf("Situacao: Reprovado\n");
}

int main(void) {
    float n1, n2, media;

    /* Lê as duas notas */
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    /* Guarda a média calculada na variável media */
    media = calcularMedia(n1, n2);
    printf("Media: %.2f\n", media);

    /* Passa a média para a função que mostra a situação */
    exibirSituacao(media);

    return 0;
}

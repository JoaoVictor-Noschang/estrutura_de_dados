//Questão 04: Desconto em uma compra

#include <stdio.h>

/* Desconto em reais: preço * percentual / 100 */
float calcularDesconto(float preco, float percentual) {
    return preco * percentual / 100.0f;
}

/* Preço final = preço original menos o desconto.
   Esta função chama calcularDesconto para não repetir a conta. */
float calcularPrecoFinal(float preco, float percentual) {
    return preco - calcularDesconto(preco, percentual);
}

int main(void) {
    float preco, percentual;

    /* Lê o preço e o percentual (digite só o número, sem "R$") */
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual);

    /* Mostra o valor do desconto e o preço final, com 2 casas decimais */
    printf("Desconto: R$ %.2f\n", calcularDesconto(preco, percentual));
    printf("Preco final: R$ %.2f\n", calcularPrecoFinal(preco, percentual));

    return 0;
}

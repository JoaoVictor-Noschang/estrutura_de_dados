// Questão 3: Produto com desconto

#include <stdio.h>
#include <string.h>

/* Produto guarda nome, preço unitário e quantidade */
struct Produto {
    char nome[100];
    float preco;
    int quantidade;
};

/* Total = preço unitário × quantidade */
float calcularTotal(struct Produto p) {
    return p.preco * p.quantidade;
}

int main(void) {
    struct Produto p;
    float total;

    printf("Digite o nome do produto: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';   /* tira o '\n' do final */

    printf("Digite o preco unitario: ");
    scanf("%f", &p.preco);
    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);

    total = calcularTotal(p);
    printf("Total: R$ %.2f\n", total);

    /* Desconto de 10% para quantidade maior ou igual a 10 */
    if (p.quantidade >= 10) {
        float final = total - total * 0.10f;   /* subtrai 10% do total */
        printf("Desconto de 10%% aplicado. Valor final: R$ %.2f\n", final);
    }

    return 0;
}

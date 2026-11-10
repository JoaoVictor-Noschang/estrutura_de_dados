#include <stdio.h>

float somarVendas(float vet[], int tam) {
    float somaDasVendas;

    for (int i=0; i<tam; i++) {
        somaDasVendas += vet[i];
    }

    return somaDasVendas;
}

float calcularMedia(float somaTotal, int numDias) {
    return somaTotal/numDias;
}

int encontrarDiaMaiorVenda(float vet[], int tam) {
    float maiorValor = vet[0];
    int diaMaior;

    for (int i=0; i<tam; i++) {
        if (vet[i] > maiorValor) {
            maiorValor = vet[i];
            diaMaior = i;
        }
    }

    return diaMaior;
}

void exibirVetor(float vet[], int tam) {
    for (int i=0; i<tam; i++) {
        printf("%.2f\n", vet[i]);
    }
}

int main() {

    float vendas[7];
    float soma = 0.0;
    float media;

    for (int i=0; i<7; i++) {
        printf("Digite a venda do %d dia: ", i+1);
        scanf("%f", &vendas[i]);
    }

    for (int i=0; i<7; i++) {
        printf("%.2f\n", vendas[i]);
    }

    soma = somarVendas(vendas, 7);
    media = calcularMedia(soma, 7);
    printf("A soma vale %.2f\n", soma);
    printf("A media diaria vale %.2f\n", media);

    /* float maiorVenda = vendas[0];
    int diaMaiorVenda;
    for (int i=0; i<7; i++) {
        if (vendas[i] > maiorVenda) {
            maiorVenda = vendas[i];
            diaMaiorVenda = i;
        }
    } */

    int diaMaiorVenda = encontrarDiaMaiorVenda(vendas, 7);
    float valorMaiorVenda = vendas[diaMaiorVenda];

    printf("venda %f  dia %d\n", valorMaiorVenda, diaMaiorVenda);

    exibirVetor(vendas, 7);

    return 0;
}

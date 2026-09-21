#include <stdio.h>

int main() {
    /*
    int lista[5];
    float media;

    lista[0] = 10;
    lista[1] = 20;
    lista[2] = 30;
    lista[3] = 40;
    lista[4] = 50;
    lista[5] = 60; // endereco inesistente

    printf("%d", lista[5]);

    media = (lista[0] + lista[1] + lista[2] + lista[3] + lista[4]) / 5;

    printf("Valor medio %.2f\n", media);
    */

    /*
    int lista[5] = {10, 20, 30, 40, 50};
    int soma = 0;
    int i;

    for (i=0; i<5; i++) {
        soma += lista[i];
    }

    float media = soma / 5;

    printf("%.2f\n", media);
    */

    // Teste de endereçamento incorreto
    int vet[5];
    int i;

    for (i=0; i<8; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    }

    printf("Vetor completo:\n");
    for (i=0; i<8; i++) {
        printf("%d\n", vet[i]);
    }
}

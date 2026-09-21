/*
Usar WHILE
1. Escreva um programa que peça para o usuário digitar vários números inteiros, um de cada vez. O programa deve ir somando esses números. A repetição deve parar assim que o usuário digitar o valor 0. Ao final, o programa deve exibir a soma total dos números digitados.
*/

#include <stdio.h>

int main() {
    int numero = -1;
    int soma = 0;

    while (numero != 0) {
        printf("%d", numero);
        printf("Digite um valor:");
        scanf("%d", &numero);

        soma += numero;
    }

    printf("A soma dos numeros digitados foi: %d", soma);
}

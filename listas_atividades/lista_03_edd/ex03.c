/*
Usar DO...WHILE
3.Crie um programa que exiba um menu de opções na tela:

( 1 ) Ver Saldo
( 2 ) Fazer Depósito
( 3 ) Sair

O programa deve ler a opção digitada pelo usuário e mostrar uma mensagem simples correspondente. O menu deve continuar aparecendo na tela até que o usuário escolha a opção 3 (Sair).
*/

#include <stdio.h>

int main() {

    int opcao;

    do {
        printf("Escolha uma opcao:\n");
        printf("( 1 ) Ver Saldo\n");
        printf("( 2 ) Fazer Deposito\n");
        printf("( 3 ) Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("-> Seu saldo e: R$ 1.000,00\n");
                break;
            case 2:
                printf("-> Deposito realizado com sucesso!\n");
                break;
            case 3:
                printf("Opcao de sair selecionada!\n");
                break;
            default:
                printf("-> Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 3);
}
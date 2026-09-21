/*
Utilizar DO...WHILE
4. Faça um programa que solicite ao usuário uma nota entre 0 e 10. Se o usuário digitar uma nota inválida (por exemplo, -5 ou 15), o programa deve obrigatoriamente solicitar a nota novamente. O loop só deve encerrar quando uma nota válida (entre 0 e 10) for informada. Ao final, exiba: "Nota válida registrada com sucesso!".
*/

#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero valido:");
        scanf("%d", &numero);

        if (numero < 0 || numero > 10) {
            printf("Numero invalido, tente novamente!\n");
        } else {
            printf("numero valido, encerrando...\n");
        }

    } while (numero < 0 || numero > 10);

    printf("Finalizado!");
}
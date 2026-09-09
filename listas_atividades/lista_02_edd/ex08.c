/*
8. Um banco concede empréstimos com base na idade, renda mensal e presença de fiador. Um cliente é considerado Elegível se cumprir todas as seguintes regras:
    - Ter idade entre 21 e 65 anos (inclusive); E
    - Possuir renda mensal de pelo menos R$ 3000.00 OU possuir um fiador (representado por 1 para sim, 0 para não).
Escreva um programa que receba a idade, a renda mensal e o indicador de fiador e exiba a decisão do banco.
*/

#include <stdio.h>

int main() {

    int idade;
    float renda;
    int fiador; // receber 0 (nao existe fiador) ou 1 (existe fiador)

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Insira sua renda: ");
    scanf("%f", &renda);

    printf("Existe um fiador? Digite 0 para NAO e 1 para SIM: ");
    scanf("%d", &fiador);

    if (idade >= 21 && idade <= 65) {
        if (renda >= 3000 || fiador) {
            printf("Elegivel");
        } else {
            printf("Nao elegivel");
        }
    } else {
        printf("Nao elegivel!");
    }

    // ou mais simplificado
    /*
    if ((idade >= 21 && idade <= 65) && (renda >= 3000 || fiador)) {
        printf("Elegivel");
    } else {
        printf("Nao elegivel!");
    }
    */

}
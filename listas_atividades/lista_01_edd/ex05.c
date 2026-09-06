/*
5. Escreva um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade desta pessoa, e quantos anos essa pessoa terá em 2077.
*/

#include <stdio.h>

int main(void) {

    int ano_atual, data_nascimento, idade_atual, idade_2077;

    printf("Em que ano estamos? ");
    scanf("%d", &ano_atual);

    printf("Insira sua data de nascimento: ");
    scanf("%d", &data_nascimento);

    idade_atual = ano_atual - data_nascimento;
    idade_2077 = 2077 - data_nascimento;

    printf("Agora em %d voce tem %d anos, porem em em 2077 voce tera %d anos. Bom envelhecimento!", ano_atual, idade_atual, idade_2077);

    return 0;
}
/*
7. Desenvolva uma calculadora simples. O programa deve ler dois números reais e um caractere representando a operação (+, -, *, /). Utilize a estrutura switch para realizar a operação informada. Caso o usuário tente dividir por zero (0), exiba uma mensagem de erro.
*/

#include <stdio.h>

int main() {

    float num1, num2;
    char ope;

    printf("Digite o primeiro numero da operacao: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero da operacao: ");
    scanf("%f", &num2);

    printf("Selecione uma operacao (ex.: +, -, *, /)");
    scanf("%s", &ope);

    switch (ope) {
        case '+':
            printf("A soma de %f + %f = %f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("A subtracao de %f - %f = %f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("A multiplicacao de %f * %f = %f", num1, num2, num1 * num2);
            break;
        case '/':
            if (num1 == 0 || num2 == 0) {
                printf("Divisao por zero invalida!");
                break;
            } else {
                printf("A divisao de %f / %f = %f", num1, num2, num1 / num2);
                break;
            }
    }

}

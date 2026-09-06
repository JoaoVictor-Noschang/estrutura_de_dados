/*
3. Escreva um programa em C que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base, e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>

int main(void) {

    float salarioBase;
    float gratificacao, imposto;
    float salarioFinal;

    printf("Informe o calor do seu salario: ");
    scanf("%f", &salarioBase);

    gratificacao = (salarioBase * 5) / 100;
    imposto = (salarioBase * 7) / 100;

    salarioFinal = salarioBase - imposto + gratificacao;

    printf("Com uma gratificacao de R$ %0.2f e o desconto de R$ %0.2f do imposto, o seu salario final que era R$ %0.2f sera de R$ %0.2f", gratificacao, imposto, salarioBase, salarioFinal);

    return 0;
}

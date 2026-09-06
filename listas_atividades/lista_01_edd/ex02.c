/*
2. Escreva um programa em C que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>

int main(void) {

    float salario, aumento, novoSalario;

    printf("Digite um salario:");
    scanf("%f", &salario);

    aumento = (salario * 25)/100;

    novoSalario = salario + aumento;

    printf("O salario de %0.2f tera um aumento de R$ %0.2f (correspondente a 25%%), assim resultando em um salario de R$ %0.2f", salario, aumento, novoSalario);

    return 0;
}

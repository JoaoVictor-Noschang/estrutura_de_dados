/* Exercício 3: Quadrado de um Número (Função com 1 parâmetro e retorno) Escreva uma função chamada calcularQuadrado que receba um número inteiro como parâmetro e retorne o quadrado desse número. No programa principal (main), peça para o usuário digitar um número inteiro, chame a função e exiba o resultado na tela. */

#include <stdio.h>

// Função que recebe um número inteiro e retorna seu valor elevado ao quadrado
int calcularQuadrado(int numero) {
    return numero * numero;
}

int main() {
    int valor, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    // Chamada da função atribuindo seu retorno à variável resultado
    resultado = calcularQuadrado(valor);

    printf("O quadrado de %d eh: %d\n", valor, resultado);

    return 0;
}
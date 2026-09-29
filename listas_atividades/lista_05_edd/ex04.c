/* Exercício 2: Verificador de Número Par (Função com retorno lógico/condicional) Crie uma função chamada ehPar que receba um número inteiro como parâmetro. A função deve retornar 1 se o número for par e 0 se for ímpar. No main, leia um número do usuário e utilize o retorno da função para imprimir uma mensagem dizendo se o número é PAR ou ÍMPAR. */
#include <stdio.h>

// Função que verifica paridade: retorna 1 para verdadeiro (par) e 0 para falso (ímpar)
int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // O comando 'if' interpreta 1 como verdadeiro e 0 como falso
    if (ehPar(numero)) {
        printf("O numero %d eh PAR.\n", numero);
    } else {
        printf("O numero %d eh IMPAR.\n", numero);
    }

    return 0;
}
#include <stdio.h>

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

void saudacao() {
    puts("Olá, seja bem vindo(a)");
}

int ehPar(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero1, numero2;
    int resultado;
    int numero3, verificacao;

    saudacao();

    printf("Digite o 1 numero:");
    scanf("%d", &numero1);

    saudacao();

    printf("Digite o 2 numero:");
    scanf("%d", &numero2);

    resultado = maior(numero1, numero2);

    printf("%d", resultado);

    saudacao();

    printf("Digite um numero par ou impar:");
    scanf("%d", &numero3);

    //verificacao = ;

    //printf("%d", verificacao);

    if (ehPar(numero3)) {
        puts("eh PAR");
    } else {
        puts("eh IMPAR");
    }

}
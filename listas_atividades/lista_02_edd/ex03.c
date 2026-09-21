/*
3. Desenvolva um programa que leia dois números inteiros e determine qual deles é o maior, ou se ambos são iguais.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero:");
    scanf("%d", &num1);

    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("%d e %d sao iguais", num1, num2);
    } else if (num1 > num2) {
        printf("%d eh maior que %d", num1, num2);
    } else {
        printf("%d eh maior que %d", num2, num1);
    }
}

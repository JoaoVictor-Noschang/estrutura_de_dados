#include <stdio.h>

void maior(int num1, int num2) {

    int i;

    if (num1 > num2) {
        printf("\n %d", num1);
    } else {
        printf("\n %d", num2);
    }
}

int main() {
    int numero1, numero2;

    printf("Digite o 1 numero:");
    scanf("%d", &numero1);

    printf("Digite o 2 numero");
    scanf("%d", &numero2);

    maior(numero1, numero2);
    maior(5, 3);


}
// Exercício 3: switch-case

#include <stdio.h>

int main(void) {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    /* switch compara o valor de 'dia' com cada case */
    switch (dia) {
        case 1: printf("Domingo\n");       break; /* break encerra o switch */
        case 2: printf("Segunda-feira\n");  break;
        case 3: printf("Terca-feira\n");    break;
        case 4: printf("Quarta-feira\n");   break;
        case 5: printf("Quinta-feira\n");   break;
        case 6: printf("Sexta-feira\n");    break;
        case 7: printf("Sabado\n");         break;
        default:                            /* nenhum case combinou */
            printf("Dia invalido!\n");
    }

    return 0;
}

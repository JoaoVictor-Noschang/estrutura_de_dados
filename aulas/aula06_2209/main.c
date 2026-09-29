#include <stdio.h>

int main(void) {

    /*
    int tabela[3][3];
    int lin, col;

    // linha 0
    tabela[0][0] = 10;
    tabela[0][1] = 20;
    tabela[0][2] = 30;

    // linha 1
    tabela[1][0] = 40;
    tabela[1][1] = 5;
    tabela[1][2] = 60;

    // linha 2
    tabela[2][0] = 70;
    tabela[2][1] = 80;
    tabela[2][2] = 90;

    puts("Imprimindo a matriz:");
    for (lin=0;lin<3;lin++) {
        for (col=0;col<3;col++) {
            printf("%d\t", tabela[lin][col]);
        }
        puts("");
    }
    */

    /*
    int tabela[3][3] = {
                        {10, 20, 30},
                        {40, 50, 60},
                        {70, 80, 90}
                        };
    */

    int tabela2[3][3];
    int lin, col;

    // FORs de preenchimento - ENTRADA
    for (lin=0;lin<3;lin++) {
        for (col=0;col<3;col++) {
            printf("Digite o endereco %d %d: ", lin, col);
            scanf("%d", &tabela2[lin][col]);
        }
    }

    // FORs de impressão - SAÍDA
    puts("Imprimindo a matriz:");
    for (lin=0;lin<3;lin++) {
        for (col=0;col<3;col++) {
            printf("%d\t", tabela2[lin][col]);
        }
        puts("");
    }


    return 0;
}

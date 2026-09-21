#include <stdio.h>

int main() {

    // Testando o WHILE

    /*
    int idade = 0;

    while (idade == 0) {

        printf("Digite uma idade: ");
        scanf("%d", &idade);

        printf("idade %d\n", idade);
    }
    */


    // Testando o DO...WHILE

    /*
    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);
    */


    // Testando FOR

    /*
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    */

    // Comando BREAK e CONTINUE

    // BREAK
    /*
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);

        if (i == 5) {
            printf(" | 5 identificado \n");
            break;
        }
    }

    printf("teste");
    */

    // BREAK
    int i;

    for (i = 1; i <= 10; i++) {

        if (i == 5) {
            printf(" | num pulado \n");
            continue;
        }

        printf("%d\n", i);
    }

}

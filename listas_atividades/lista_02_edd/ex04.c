/*
4. Faça um programa que solicite ao usuário uma nota entre 0 e 10. Se o usuário digitar uma nota inválida (por exemplo, -5 ou 15), o programa deve obrigatoriamente solicitar a nota novamente. O loop só deve encerrar quando uma nota válida (entre 0 e 10) for informada. Ao final, exiba: "Nota válida registrada com sucesso!".
*/

#include <stdio.h>
int main () {
    float n1;

    do {
        printf("Digite uma nota");
        scanf("%f", &n1);

        if (n1 >= 0 && n1 <= 10) {
            printf("Aceito\n");
        } else if (n1 < 0 || n1 > 10) {
            printf("rejeitado\n");
        }

    } while (n1 < 0 || n1 > 10);
}

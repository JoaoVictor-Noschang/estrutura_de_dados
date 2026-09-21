/*
Usar WHILE
2. Escreva um programa que possua uma senha correta armazenada (por exemplo, 1234). O programa deve solicitar a senha ao usuário. Enquanto a senha informada for incorreta, deve exibir a mensagem "Senha incorreta! Tente novamente:" e pedir a senha de novo. Quando o usuário acertar, exiba "Acesso concedido!".
*/

#include <stdio.h>

int main() {

    int senha_correta = 1234;
    int senha;

    while (senha != senha_correta) {
        printf("Insira a senha:");
        scanf("%d", &senha);

        if (senha != senha_correta) {
            printf("Senha incorreta, tente novamente!\n");
        }
    }

    printf("Senha correta, seja bem-vindo(a)!");


}
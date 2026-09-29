/* 5. Verificador de Palíndromo: Escreva um algoritmo que leia uma palavra e verifique se ela é um palíndromo (uma palavra que se lê da mesma forma de trás para frente, como "arara" ou "radar"). */
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int tamanho;
    int eh_palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Utilizamos para calcular o tamanho do nosso vetor, no caso da string
    tamanho = strlen(palavra);

    // Compara o primeiro caractere com o último, o segundo com o penúltimo, etc.
    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            eh_palindromo = 0; // Se houver divergência, não é palíndromo
            break;
        }
    }

    if (eh_palindromo == 1) {
        printf("A palavra \"%s\" eh um palindromo.\n", palavra);
    } else {
        printf("A palavra \"%s\" nao eh um palindromo.\n", palavra);
    }

    return 0;
}
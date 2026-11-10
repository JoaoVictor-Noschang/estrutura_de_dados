// Questão 02: Quilômetros para milhas

#include <stdio.h>

/* Multiplica a distância em km pelo fator de conversão (1 km = 0.621371 milhas) */
float quilometrosParaMilhas(float km) {
    return km * 0.621371f;
}

int main(void) {
    float km;

    /* Lê a distância como número real (float) */
    printf("Digite a distancia em quilometros: ");
    scanf("%f", &km);

    /* %.2f mostra o número com 2 casas decimais */
    printf("%.2f km equivalem a %.2f milhas\n", km, quilometrosParaMilhas(km));
    return 0;
}

#include <stdio.h>

void exibirDados(float dados[], int tam) {
    for (int i=0; i<tam; i++) {
        printf("Temperatura do dia %d eh %.2f C\n", i+1, dados[i]);
    }
}

float somarTemps(float dados[], int tam) {
    float sm = 0;
    for (int i=0; i<tam;i++) {
        sm = sm + dados[i];
    }
    return sm;
}

float calcMed(float total, int quant) {
    return total/quant;
}

void verificarSaude(float medSemanal) {
    if (medSemanal <= 10) {
        printf("Alerta: Frio / Risco para a cultura\n");

    } else if (medSemanal > 10 && medSemanal <= 28) {
        printf("Temperatura Ideal\n");

    } else if (medSemanal > 28) {
        printf("Alerta de Calor Intenso\n");
    }
}

float converter(float temp) {
    return temp * 1.8 + 32;
}

int main() {

    float temperaturas[7];

    // Passo 1 - Entrada e Saída de dados básica
    for (int i=0; i<7;i++) {
        printf("Digite a temperatura do dia %d:", i+1);
        scanf("%f", &temperaturas[i]);
    }

    exibirDados(temperaturas, 7);

    // Passo 2 - Somar temperaturas e calcular media
    float soma;
    float media;

    soma = somarTemps(temperaturas, 7);
    media = calcMed(soma, 7);

    printf("A soma das temperaturas eh %.2f C\n", soma);
    printf("A media de temperaturas eh %.2f C\n", media);


    // Passo 5 - Verificar Saúde da Estufa
    verificarSaude(media);

    // Passo 7 - Converter temperaturas
    for (int i=0; i<7; i++) {
        temperaturas[i] = converter(temperaturas[i]);
    }

    printf("Temperaturas Convertidas\n");
    for (int i=0; i<7; i++) {
        printf("%.2f F\n", temperaturas[i]);
    }

}

/*
1. struct Aluno: nome[50], idade (int), nota (float), antes do main
2. Declarar a variável: struct Aluno a;
3. Ler nome (fgets), idade e nota (scanf)
4. Exibir os dados com printf
5. Se a.nota >= 6.0: "Aprovado"; senão: "Reprovado"
*/

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

void imprimirAluno(struct Aluno registro) {
    printf("Nome: %s\n", registro.nome);
    printf("Idade: %d\n", registro.idade);
    printf("Nota: %.2f", registro.nota);
}

int main() {

    struct Aluno alun1;

    printf("Digite o Nome do Alun1: ");
    fgets(alun1.nome, 50, stdin);
    alun1.nome[strcspn(alun1.nome, "\n")] = '\0';

    printf("Digite a Idade: ");
    scanf("%d", &alun1.idade);

    printf("Digite a Nota: ");
    scanf("%f", &alun1.nota);

    imprimirAluno(alun1);
}

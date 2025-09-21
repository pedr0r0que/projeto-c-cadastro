#include <stdio.h>

int main () {
    int idade;
    float altura;
    char nome [50];
    int matricula [50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula \n");
    scanf("%d", &matricula);

    printf("-nome do aluno: %s\n - matricula: %d\n", nome, matricula);
    printf("-idade: %d\n - altura: %2f\n", idade, altura);


    return 0;
}
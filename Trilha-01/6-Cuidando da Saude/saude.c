#include <stdio.h>

int main() {

    char nome[50];

    float altura;
    float peso;
    float imc;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("%s, seu IMC e de %.4f\n", nome, imc);

    return 0;
}
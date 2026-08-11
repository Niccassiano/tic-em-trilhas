#include <stdio.h>

int main() {

    char nome[50];
    char curso[100];
    char hobby[100];

    int semestre;

    printf("Digite seu nome:\n");
    scanf(" %[^\n]", nome);

    printf("Digite seu curso:\n");
    scanf(" %[^\n]", curso);

    printf("Digite o semestre atual:\n");
    scanf("%d", &semestre);

    printf("Digite seu hobby favorito:\n");
    scanf(" %[^\n]", hobby);

    printf("\nPrazer, eu sou o(a) %s!\n", nome);

    printf("Atualmente estou no %dº semestre de %s e meu hobby favorito e %s.\n",
           semestre, curso, hobby);

    return 0;
}
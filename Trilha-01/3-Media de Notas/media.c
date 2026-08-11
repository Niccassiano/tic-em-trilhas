#include <stdio.h>

int main() {

    char nome[50];

    float nota1, nota2, nota3;
    float media;

    printf("Digite o nome do aluno:\n");
    scanf("%s", nome);

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("O(A) estudante %s ficou com media %.1f\n", nome, media);

    return 0;
}
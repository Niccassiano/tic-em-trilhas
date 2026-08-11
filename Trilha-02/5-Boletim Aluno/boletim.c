#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    int faltas;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);

    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);

    printf("Digite a nota 3:\n");
    scanf("%f", &nota3);

    printf("Digite as faltas:\n");
    scanf("%d", &faltas);

    media = (nota1 + nota2 + nota3) / 3;

    if (
        media < 0 || media > 10 ||
        faltas < 0
    ) {

        printf("Parametros invalidos\n");
    }
    else {

        printf("Media: %.1f.\n", media);

        if (faltas > 4) {
            printf("Situacao: Reprovado por Falta\n");
        }
        else if (media >= 8 && media <= 10) {
            printf("Situacao: Aprovado com sucesso\n");
        }
        else if (media >= 6 && media < 8) {
            printf("Situacao: Aprovado\n");
        }
        else if (media == 0) {
            printf("Situacao: Desistente\n");
        }
        else {
            printf("Situacao: Recuperacao\n");
        }

    }

    return 0;
}
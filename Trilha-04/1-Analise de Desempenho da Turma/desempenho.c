#include <stdio.h>

int main() {
    int qtd, i, aprovados = 0, reprovados = 0;
    float notas[100], soma = 0, maior = -1, menor = 11;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] >= 6) aprovados++;
        else reprovados++;
    }

    printf(">> Resultado da Turma <<\nNotas informadas: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", notas[i]);
        if (i < qtd-1) printf(", ");
    }
    printf("\nMédia da turma: %.2f\n", soma/qtd);
    printf("Maior nota: %.0f\nMenor nota: %.0f\n", maior, menor);
    printf("Aprovados: %d\nReprovados: %d\n", aprovados, reprovados);
    if (reprovados == 0) printf("Situação geral: Todos os alunos foram aprovados\n");
    else printf("Situação geral: Nem todos os alunos foram aprovados\n");

    return 0;
}

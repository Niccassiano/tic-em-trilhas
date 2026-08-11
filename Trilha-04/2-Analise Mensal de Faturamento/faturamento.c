#include <stdio.h>

int main() {
    int meses, i, crescimento = 1, queda = 1, constante = 1;
    float fat[100];

    scanf("%d", &meses);
    for (i = 0; i < meses; i++) scanf("%f", &fat[i]);

    printf(">> Análise de Faturamento <<\nFaturamento informado: ");
    for (i = 0; i < meses; i++) {
        printf("%.0f", fat[i]);
        if (i < meses-1) printf(", ");
    }
    printf("\n");

    for (i = 1; i < meses; i++) {
        if (fat[i] < fat[i-1]) crescimento = 0;
        if (fat[i] > fat[i-1]) queda = 0;
        if (fat[i] != fat[i-1]) constante = 0;
    }

    if (constante) printf("Situação: Constante\n");
    else if (crescimento) printf("Situação: Crescimento\n");
    else if (queda) printf("Situação: Queda\n");
    else printf("Situação: Sem padrão\n");

    return 0;
}

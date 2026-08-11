#include <stdio.h>

int main() {
    char projeto[50];
    int qtd, i;
    float meta, doacoes[100], total = 0, maior = 0;

    scanf(" %[^\n]", projeto);
    scanf("%d", &qtd);
    scanf("%f", &meta);

    for (i = 0; i < qtd; i++) {
        scanf("%f", &doacoes[i]);
        total += doacoes[i];
        if (doacoes[i] > maior) maior = doacoes[i];
    }

    printf(">> Resumo das Doações <<\nProjeto: %s\nDoações recebidas: ", projeto);
    for (i = 0; i < qtd; i++) {
        printf("%.0f", doacoes[i]);
        if (i < qtd-1) printf(", ");
    }
    printf("\nTotal arrecadado: %.0f\nMaior doação: %.0f\n", total, maior);
    if (total >= meta) printf("Situação: Meta atingida\n");
    else printf("Situação: Meta não atingida\n");

    return 0;
}

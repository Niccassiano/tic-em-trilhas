#include <stdio.h>

int main() {
    int qtd, i, baratosA = 0, baratosB = 0, iguais = 0;
    float A[100], B[100], totalA = 0, totalB = 0;

    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++) scanf("%f", &A[i]);
    for (i = 0; i < qtd; i++) scanf("%f", &B[i]);

    printf("FARMAZOOM\nFarmácia A: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", A[i]);
        if (i < qtd-1) printf(", ");
        totalA += A[i];
    }
    printf("\nFarmácia B: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", B[i]);
        if (i < qtd-1) printf(", ");
        totalB += B[i];
    }

    for (i = 0; i < qtd; i++) {
        if (A[i] < B[i]) baratosA++;
        else if (B[i] < A[i]) baratosB++;
        else iguais++;
    }

    printf("\nProdutos mais Baratos\nNa Farmácia A: %d\nNa Farmácia B: %d\nMesmo preço: %d\n", baratosA, baratosB, iguais);
    printf("Total\nFarmácia A: R$ %.0f\nFarmácia B: R$ %.0f\n", totalA, totalB);
    if (totalA < totalB) printf("Melhor opção\nFarmácia A\n");
    else if (totalB < totalA) printf("Melhor opção\nFarmácia B\n");
    else printf("Melhor opção\nEmpate\n");

    return 0;
}

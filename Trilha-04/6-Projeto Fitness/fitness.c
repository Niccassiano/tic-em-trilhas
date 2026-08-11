#include <stdio.h>

int main() {
    int dias, i, maiorDia = 0, menorDia = 0;
    float pesos[100], maior = -1, menor = 999;

    scanf("%d", &dias);
    for (i = 0; i < dias; i++) {
        scanf("%f", &pesos[i]);
        if (pesos[i] > maior) { maior = pesos[i]; maiorDia = i+1; }
        if (pesos[i] < menor) { menor = pesos[i]; menorDia = i+1; }
    }

    printf("Pesos informados: ");
    for (i = 0; i < dias; i++) {
        printf("%.0f", pesos[i]);
        if (i < dias-1) printf(", ");
    }
    printf("\nMaior peso: %.0f kg (Dia %d)\nMenor peso: %.0f kg (Dia %d)\n", maior, maiorDia, menor, menorDia);

    printf("Gráfico de evolução:\n");
    for (i = 0; i < dias; i++) {
        printf("Dia %d | ", i+1);
        int blocos = (int)(pesos[i]/5);
        for (int j = 0; j < blocos; j++) printf("█");
        printf("%.0f\n", pesos[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {

    int acaiP, acaiM, acaiG;

    float desconto;
    float total;
    float valorFinal;

    printf("Quantidade de acai pequeno:\n");
    scanf("%d", &acaiP);

    printf("Quantidade de acai medio:\n");
    scanf("%d", &acaiM);

    printf("Quantidade de acai grande:\n");
    scanf("%d", &acaiG);

    printf("Digite o desconto em porcentagem:\n");
    scanf("%f", &desconto);

    total =
        (acaiP * 13.50) +
        (acaiM * 15.00) +
        (acaiG * 17.50);

    valorFinal = total - (total * desconto / 100);

    printf("\nSeu pedido foi registrado.\n");

    printf("- Acai P: %d\n", acaiP);
    printf("- Acai M: %d\n", acaiM);
    printf("- Acai G: %d\n", acaiG);

    printf("Desconto de %.0f%% aplicado.\n", desconto);

    printf("Total R$ %.2f\n", valorFinal);

    return 0;
}
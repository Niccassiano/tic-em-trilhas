#include <stdio.h>

int main() {

    float ganhos;
    float gastos;

    printf("Digite os ganhos:\n");
    scanf("%f", &ganhos);

    printf("Digite os gastos:\n");
    scanf("%f", &gastos);

    if (ganhos >= gastos) {
        printf("Voce esta dentro do orcamento!\n");
    }
    else {
        printf("Voce esta fora do orcamento!\n");
        printf("Nao gaste mais!\n");
    }

    return 0;
}
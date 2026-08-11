#include <stdio.h>
#include <string.h>

int main() {

    int inteiras;
    int meias;

    char dia[30];
    char nacional[10];

    float total;

    printf("Quantidade de inteiras:\n");
    scanf("%d", &inteiras);

    printf("Quantidade de meias:\n");
    scanf("%d", &meias);

    printf("Dia da semana:\n");
    scanf(" %[^\n]", dia);

    printf("Filme nacional? (Sim ou Nao):\n");
    scanf("%s", nacional);

    if (strcmp(nacional, "Sim") == 0) {

        total = (inteiras + meias) * 5.00;

    }
    else if (strcmp(dia, "Quarta-feira") == 0) {

        total = (inteiras + meias) * 14.50;

    }
    else {

        total =
            (inteiras * 28.50) +
            (meias * 14.25);

    }

    printf("Total a pagar:\n");
    printf("R$ %.2f\n", total);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    float n1, n2;
    char operacao[30];

    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%f", &n2);

    printf("Digite a operacao:\n");
    scanf(" %[^\n]", operacao);

    if (
        strcmp(operacao, "1") == 0 ||
        strcmp(operacao, "Soma") == 0
    ) {

        printf("%.1f + %.1f = %.1f\n", n1, n2, n1 + n2);

    }
    else if (
        strcmp(operacao, "2") == 0 ||
        strcmp(operacao, "Subtracao") == 0
    ) {

        printf("%.1f - %.1f = %.1f\n", n1, n2, n1 - n2);

    }
    else if (
        strcmp(operacao, "3") == 0 ||
        strcmp(operacao, "Multiplicacao") == 0
    ) {

        printf("%.1f * %.1f = %.1f\n", n1, n2, n1 * n2);

    }
    else if (
        strcmp(operacao, "4") == 0 ||
        strcmp(operacao, "Divisao") == 0
    ) {

        printf("%.1f / %.1f = %.1f\n", n1, n2, n1 / n2);

    }
    else if (
        strcmp(operacao, "5") == 0 ||
        strcmp(operacao, "Resto") == 0
    ) {

        printf("%.1f mod %.1f = %.1f\n",
               n1, n2, fmod(n1, n2));

    }
    else if (
        strcmp(operacao, "6") == 0 ||
        strcmp(operacao, "Potencia") == 0
    ) {

        printf("%.1f ^ %.1f = %.1f\n",
               n1, n2, pow(n1, n2));

    }
    else {
        printf("Operacao nao suportada\n");
    }

    return 0;
}
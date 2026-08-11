#include <stdio.h>

int main() {

    int dia;

    printf("Digite o numero do dia:\n");
    scanf("%d", &dia);

    if (dia == 0) {
        printf("Domingo\n");
    }
    else if (dia == 1) {
        printf("Segunda-feira\n");
    }
    else if (dia == 2) {
        printf("Terca-feira\n");
    }
    else if (dia == 3) {
        printf("Quarta-feira\n");
    }
    else if (dia == 4) {
        printf("Quinta-feira\n");
    }
    else if (dia == 5) {
        printf("Sexta-feira\n");
    }
    else if (dia == 6) {
        printf("Sabado\n");
    }
    else {
        printf("Dia da semana invalido\n");
    }

    return 0;
}
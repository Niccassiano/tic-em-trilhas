#include <stdio.h>
#include <string.h>

int main() {

    char curso[10];
    char isento[10];

    float desconto;
    float mensalidade = 0;

    printf("Digite a sigla do curso:\n");
    scanf("%s", curso);

    printf("Isento? (Sim ou Nao):\n");
    scanf("%s", isento);

    printf("Digite o desconto:\n");
    scanf("%f", &desconto);

    if (strcmp(curso, "SI") == 0) {
        mensalidade = 900;
    }
    else if (strcmp(curso, "ADS") == 0) {
        mensalidade = 750;
    }
    else if (strcmp(curso, "CS") == 0) {
        mensalidade = 1150;
    }
    else if (strcmp(curso, "EC") == 0) {
        mensalidade = 1300;
    }
    else if (strcmp(curso, "ES") == 0) {
        mensalidade = 950;
    }
    else {
        printf("Curso nao encontrado\n");
        return 0;
    }

    if (strcmp(isento, "Sim") == 0) {
        mensalidade = 0;
    }
    else {
        mensalidade =
            mensalidade -
            (mensalidade * desconto / 100);
    }

    printf("Valor da mensalidade:\n");
    printf("R$ %.2f\n", mensalidade);

    return 0;
}
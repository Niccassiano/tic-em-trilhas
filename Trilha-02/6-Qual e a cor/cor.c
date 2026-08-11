#include <stdio.h>
#include <string.h>

int main() {

    char cor1[20];
    char cor2[20];

    printf("Digite a primeira cor:\n");
    scanf(" %[^\n]", cor1);

    printf("Digite a segunda cor:\n");
    scanf(" %[^\n]", cor2);

    int cor1Primaria =
        strcmp(cor1, "Vermelho") == 0 ||
        strcmp(cor1, "Azul") == 0 ||
        strcmp(cor1, "Amarelo") == 0;

    int cor2Primaria =
        strcmp(cor2, "Vermelho") == 0 ||
        strcmp(cor2, "Azul") == 0 ||
        strcmp(cor2, "Amarelo") == 0;

    if (!cor1Primaria || !cor2Primaria) {
        printf("Apenas cores primarias sao aceitas.\n");
    }
    else if (
        (strcmp(cor1, "Vermelho") == 0 && strcmp(cor2, "Azul") == 0) ||
        (strcmp(cor1, "Azul") == 0 && strcmp(cor2, "Vermelho") == 0)
    ) {
        printf("A combinacao resulta em: Roxo\n");
    }
    else if (
        (strcmp(cor1, "Vermelho") == 0 && strcmp(cor2, "Amarelo") == 0) ||
        (strcmp(cor1, "Amarelo") == 0 && strcmp(cor2, "Vermelho") == 0)
    ) {
        printf("A combinacao resulta em: Laranja\n");
    }
    else if (
        (strcmp(cor1, "Azul") == 0 && strcmp(cor2, "Amarelo") == 0) ||
        (strcmp(cor1, "Amarelo") == 0 && strcmp(cor2, "Azul") == 0)
    ) {
        printf("A combinacao resulta em: Verde\n");
    }
    else {
        printf("Mesma cor informada.\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {

    char cor[20];

    printf("Digite a cor do semaforo:\n");
    scanf(" %[^\n]", cor);

    if (strcmp(cor, "Vermelho") == 0) {
        printf("Espere\n");
    }
    else if (strcmp(cor, "Verde") == 0) {
        printf("Atravesse\n");
    }
    else {
        printf("Farol inoperante\n");
    }

    return 0;
}
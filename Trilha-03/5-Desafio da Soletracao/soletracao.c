#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50], letra[2], soletrada[50] = "";
    printf("Digite a palavra: ");
    scanf("%s", palavra);

    while(1) {
        scanf("%s", letra);
        if (strcmp(letra, "0") == 0) break;
        strcat(soletrada, letra);
    }

    printf("Palavra original: %s\n", palavra);
    printf("Palavra soletrada: %s\n", soletrada);
    return 0;
}

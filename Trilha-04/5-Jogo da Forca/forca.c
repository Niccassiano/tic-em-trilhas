#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50], tentativa;
    int tamanho, erros = 0, acertos = 0;
    char estado[50];

    printf("Digite a palavra secreta: ");
    scanf("%s", palavra);
    tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) estado[i] = '_';
    estado[tamanho] = '\0';

    while (erros < 7 && acertos < tamanho) {
        printf("Estado: %s\nErros: %d\n", estado, erros);
        scanf(" %c", &tentativa);

        int encontrou = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == tentativa && estado[i] == '_') {
                estado[i] = tentativa;
                acertos++;
                encontrou = 1;
            }
        }
        if (!encontrou) erros++;
    }

    if (acertos == tamanho) printf("Parabéns! Você descobriu a palavra.\n");
    else printf("Você perdeu! A palavra era: %s\n", palavra);

    return 0;
}

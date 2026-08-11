#include <stdio.h>

int main() {

    char nome[50];
    char livro[100];

    int paginas;
    int segundosPorPagina;

    float tempoTotalSegundos;
    float horas;

    printf("Digite seu nome:\n");
    scanf(" %[^\n]", nome);

    printf("Digite o nome do livro:\n");
    scanf(" %[^\n]", livro);

    printf("Digite o total de paginas:\n");
    scanf("%d", &paginas);

    printf("Digite o tempo por pagina em segundos:\n");
    scanf("%d", &segundosPorPagina);

    tempoTotalSegundos = paginas * segundosPorPagina;

    horas = tempoTotalSegundos / 3600;

    printf("%s, voce finalizara a leitura do livro %s\n",
           nome, livro);

    printf("em aproximadamente %.2f horas.\n", horas);

    return 0;
}
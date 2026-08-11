#include <stdio.h>

int main() {

    float tamanhoPista;
    int voltas;
    float tempoVolta;

    float distanciaTotal;
    float tempoTotal;
    float minutos;

    printf("Digite o tamanho da pista em metros:\n");
    scanf("%f", &tamanhoPista);

    printf("Digite a quantidade de voltas:\n");
    scanf("%d", &voltas);

    printf("Digite o tempo da primeira volta em segundos:\n");
    scanf("%f", &tempoVolta);

    distanciaTotal = (tamanhoPista * voltas) / 1000;

    tempoTotal = tempoVolta * voltas;

    minutos = tempoTotal / 60;

    printf("\nAnalise Preditiva Concluida\n");

    printf("Distancia total a ser percorrida: %.2f km.\n",
           distanciaTotal);

    printf("Previsao de conclusao: %.1f minutos.\n",
           minutos);

    return 0;
}
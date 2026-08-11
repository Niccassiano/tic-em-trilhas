#include <stdio.h>

int main() {

    float notaCandidato;
    float notaCorte;
    float notaMinima;

    printf("Digite a nota do candidato:\n");
    scanf("%f", &notaCandidato);

    printf("Digite a nota de corte:\n");
    scanf("%f", &notaCorte);

    printf("Digite a nota minima:\n");
    scanf("%f", &notaMinima);

    if (notaCandidato < notaCorte) {
        printf("Situacao candidato: Reprovado\n");
    }
    else if (notaCandidato >= notaMinima) {
        printf("Situacao candidato: Aprovado\n");
    }
    else {
        printf("Situacao candidato: Lista de Espera\n");
    }

    return 0;
}
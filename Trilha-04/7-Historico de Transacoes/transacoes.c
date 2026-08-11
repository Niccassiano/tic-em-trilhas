#include <stdio.h>

int main() {
    float transacoes[1000];
    int qtd = 0;
    float valor;

    while (1) {
        scanf("%f", &valor);
        if (valor == -1) break;
        if (valor == 0 && qtd > 0) {
            qtd--; // cancela última transação
        } else if (valor != 0) {
            transacoes[qtd++] = valor;
        }
    }

    float saldo = 0;
    for (int i = 0; i < qtd; i++) saldo += transacoes[i];

    printf("Saldo final: %.0f\n", saldo);
    return 0;
}

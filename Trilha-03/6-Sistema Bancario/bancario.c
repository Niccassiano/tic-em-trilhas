#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0, valor;

    do {
        printf("\nMenu:\n1. Consultar Saldo\n2. Realizar Depósito\n3. Realizar Saque\n0. Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                scanf("%f", &valor);
                if (valor < 0) printf("Valor inválido\n");
                else saldo += valor;
                break;
            case 3:
                scanf("%f", &valor);
                if (valor < 0) printf("Valor inválido\n");
                else if (valor > saldo) printf("Saldo insuficiente\n");
                else saldo -= valor;
                break;
            case 0:
                break;
            default:
                printf("Opção inválida\n");
        }
    } while(opcao != 0);

    return 0;
}

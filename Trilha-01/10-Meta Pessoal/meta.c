#include <stdio.h>

int main() {

    char meta[100];

    float valorMeta;
    float salario;
    float despesas;

    float saldo;
    float reserva;
    float disponivel;
    float meses;

    printf("Digite sua meta:\n");
    scanf(" %[^\n]", meta);

    printf("Digite o valor da meta:\n");
    scanf("%f", &valorMeta);

    printf("Digite seu salario:\n");
    scanf("%f", &salario);

    printf("Digite suas despesas:\n");
    scanf("%f", &despesas);

    saldo = salario - despesas;

    reserva = saldo * 0.30;

    disponivel = saldo - reserva;

    meses = valorMeta / disponivel;

    printf("\nMeta: %s (R$ %.2f)\n",
           meta, valorMeta);

    printf("Salario: R$ %.2f - Despesas: R$ %.2f\n",
           salario, despesas);

    printf("Saldo apos despesas: R$ %.2f\n",
           saldo);

    printf("Reserva fixa (30%%): R$ %.2f\n",
           reserva);

    printf("Valor disponivel para a meta: R$ %.2f por mes\n",
           disponivel);

    printf("Prazo estimado para atingir a meta: %.2f meses\n",
           meses);

    return 0;
}
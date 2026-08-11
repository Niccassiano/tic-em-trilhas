#include <stdio.h>

int main() {
    float valor, total = 0;
    int parcelas;

    while(1) {
        scanf("%f", &valor);
        if (valor == 0) break;
        if (valor < 0) {
            printf("Valor inválido: %.2f\n", valor);
            continue;
        }
        total += valor;
    }

    scanf("%d", &parcelas);
    if (parcelas <= 1) {
        printf("Pagamento à vista: R$ %.2f\n", total);
    } else {
        printf("Total da compra: R$ %.2f\n", total);
        printf("Parcelado em %dx de R$ %.2f\n", parcelas, total/parcelas);
    }
    return 0;
}

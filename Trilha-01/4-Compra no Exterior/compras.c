#include <stdio.h>

int main() {

    float real;
    float dolar;

    printf("Digite o valor em real:\n");
    scanf("%f", &real);

    dolar = real / 5.42;

    printf("Valor em real R$ %.2f\n", real);
    printf("Valor em dolar $ %.2f\n", dolar);

    return 0;
}
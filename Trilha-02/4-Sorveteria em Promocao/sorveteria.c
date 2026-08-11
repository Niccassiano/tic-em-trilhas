#include <stdio.h>

int main() {

    float gramas;
    float preco100g;
    float total;

    printf("Digite o total de gramas:\n");
    scanf("%f", &gramas);

    if (gramas <= 0) {
        printf("Peso invalido\n");
    }
    else {

        if (gramas >= 1000) {
            preco100g = 3.00;
        }
        else {
            preco100g = 3.50;
        }

        total = (gramas / 100) * preco100g;

        printf("O total e R$ %.2f\n", total);
    }

    return 0;
}
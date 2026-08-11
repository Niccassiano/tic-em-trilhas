#include <stdio.h>

int main() {

    int pessoas;

    float carneKg, linguicaKg, frangoKg;
    float custoCarne, custoLinguica, custoFrango;
    float total, porPessoa;

    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &pessoas);

    carneKg = (pessoas * 300.0) / 1000;
    linguicaKg = (pessoas * 200.0) / 1000;
    frangoKg = (pessoas * 150.0) / 1000;

    custoCarne = carneKg * 50;
    custoLinguica = linguicaKg * 28;
    custoFrango = frangoKg * 22;

    total = custoCarne + custoLinguica + custoFrango;

    porPessoa = total / pessoas;

    printf("\nQuantidades:\n");
    printf("Carne: %.1f kg\n", carneKg);
    printf("Linguica: %.1f kg\n", linguicaKg);
    printf("Frango: %.1f kg\n", frangoKg);

    printf("\nCusto total:\n");
    printf("Carne: R$ %.2f\n", custoCarne);
    printf("Linguica: R$ %.2f\n", custoLinguica);
    printf("Frango: R$ %.2f\n", custoFrango);

    printf("\nCusto total do churrasco: R$ %.2f\n", total);

    printf("Cada pessoa deve contribuir com: R$ %.2f\n", porPessoa);

    return 0;
}
#include <stdio.h>

int main()
{

    
    char nome[50];

    float valorCompra;
    float desconto;
    float valorFinal;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite o valor da compra:\n");
    scanf("%f", &valorCompra);

    printf("Digite a porcentagem do desconto:\n");
    scanf("%f", &desconto);

    valorFinal = valorCompra - (valorCompra * desconto / 100);

    printf("\nOla %s, sua compra de R$ %.2f foi confirmada!\n",
           nome, valorCompra);

    printf("Foi aplicado um desconto de %.1f%%.\n", desconto);

    printf("O total final ficou em R$ %.2f\n", valorFinal);

    return 0;



}
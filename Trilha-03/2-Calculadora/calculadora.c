#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    do {
        printf("\nMenu de Opções\n");
        printf("1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\n0. Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                scanf("%f %f", &n1, &n2);
                printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, n1+n2);
                break;
            case 2:
                scanf("%f %f", &n1, &n2);
                printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, n1-n2);
                break;
            case 3:
                scanf("%f %f", &n1, &n2);
                printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, n1*n2);
                break;
            case 4:
                scanf("%f %f", &n1, &n2);
                if (n2 == 0) printf("Divisão por zero não permitida\n");
                else printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, n1/n2);
                break;
            case 0:
                printf("Fim.\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while(opcao != 0);

    return 0;
}

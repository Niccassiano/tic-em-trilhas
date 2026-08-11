#include <stdio.h>
#include <string.h>

int main() {
    char produtos[1000][50];
    int qtd[1000], total = 0, opcao, id, valor;

    do {
        printf("\nMenu:\n1. Adicionar produto\n2. Entrada\n3. Saída\n4. Listar\n0. Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                if (total >= 1000) { printf("Limite atingido!\n"); break; }
                scanf(" %[^\n]", produtos[total]);
                scanf("%d", &qtd[total]);
                total++;
                printf("Produto adicionado com sucesso!\n");
                break;
            case 2:
                scanf("%d %d", &id, &valor);
                qtd[id-1] += valor;
                printf("Entrada realizada com sucesso!\n");
                break;
            case 3:
                scanf("%d %d", &id, &valor);
                if (valor > qtd[id-1]) printf("Quantidade insuficiente!\n");
                else { qtd[id-1] -= valor; printf("Saída realizada com sucesso!\n"); }
                break;
            case 4:
                for (int i = 0; i < total; i++)
                    printf("Produto %d: %s - %d unidades\n", i+1, produtos[i], qtd[i]);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while(opcao != 0);

    return 0;
}

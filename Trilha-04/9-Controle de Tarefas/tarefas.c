#include <stdio.h>
#include <string.h>

int main() {
    char tarefas[100][50];
    int concluida[100], total = 0, opcao, id;

    do {
        printf("\nMenu:\n1. Adicionar\n2. Listar\n3. Concluir\n4. Pendentes\n0. Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                scanf(" %[^\n]", tarefas[total]);
                concluida[total] = 0;
                total++;
                printf("Tarefa adicionada com sucesso!\n");
                break;
            case 2:
                for (int i = 0; i < total; i++)
                    printf("%d - [%s] %s\n", i+1, concluida[i] ? "X" : " ", tarefas[i]);
                break;
            case 3:
                scanf("%d", &id);
                concluida[id-1] = 1;
                printf("Tarefa %d marcada como concluída.\n", id);
                break;
            case 4:
                for (int i = 0; i < total; i++)
                    if (!concluida[i])
                        printf("%d - [ ] %s\n", i+1, tarefas[i]);
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

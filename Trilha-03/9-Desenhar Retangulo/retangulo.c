#include <stdio.h>

int main() {
    int base, altura;
    scanf("%d %d", &base, &altura);

    if (base <= 0 || altura <= 0) {
        printf("Retângulo inválido\n");
        return 0;
    }

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < base; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

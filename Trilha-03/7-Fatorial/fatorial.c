#include <stdio.h>

int main() {
    int n, fat = 1;
    scanf("%d", &n);

    if (n == 0) {
        printf("Parâmetro inválido\n");
    } else {
        for (int i = n; i > 1; i--) fat *= i;
        printf("O fatorial de %d é %d.\n", n, fat);
    }
    return 0;
}

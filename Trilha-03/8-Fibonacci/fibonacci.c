#include <stdio.h>

int main() {
    int pos;
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Posição inválida\n");
        return 0;
    }

    long long f1 = 1, f2 = 1, fn;
    if (pos == 1 || pos == 2) {
        printf("O valor na posição %d da sequência de Fibonacci é 1\n", pos);
        return 0;
    }

    for (int i = 3; i <= pos; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    printf("O valor na posição %d da sequência de Fibonacci é %lld\n", pos, f2);
    return 0;
}

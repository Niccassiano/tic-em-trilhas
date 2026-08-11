#include <stdio.h>

int main() {
    int temp, maior = -999, menor = 999;

    while(1) {
        scanf("%d", &temp);
        if (temp == 0) break;
        if (temp < -50 || temp > 60) {
            printf("Temperatura inválida\n");
            continue;
        }
        if (temp > maior) maior = temp;
        if (temp < menor) menor = temp;
    }

    if (maior != -999 && menor != 999) {
        printf("Maior temperatura: %d\n", maior);
        printf("Menor temperatura: %d\n", menor);
    }
    return 0;
}

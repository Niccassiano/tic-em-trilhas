#include <stdio.h>

int main() {
    int nA, nB, i, j;
    int A[100], B[100];

   
    scanf("%d", &nA);
    for (i = 0; i < nA; i++) scanf("%d", &A[i]);

    
    scanf("%d", &nB);
    for (i = 0; i < nB; i++) scanf("%d", &B[i]);

    
    printf("Figurinhas em comum: ");
    int primeiro = 1;
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                if (!primeiro) printf(", ");
                printf("%d", A[i]);
                primeiro = 0;
                break;
            }
        }
    }
    printf("\n");

    
    printf("Apenas jogador A: ");
    primeiro = 1;
    for (i = 0; i < nA; i++) {
        int comum = 0;
        for (j = 0; j < nB; j++) {
            if (A[i] == B[j]) { comum = 1; break; }
        }
        if (!comum) {
            if (!primeiro) printf(", ");
            printf("%d", A[i]);
            primeiro = 0;
        }
    }
    printf("\n");

    
    printf("Apenas jogador B: ");
    primeiro = 1;
    for (i = 0; i < nB; i++) {
        int comum = 0;
        for (j = 0; j < nA; j++) {
            if (B[i] == A[j]) { comum = 1; break; }
        }
        if (!comum) {
            if (!primeiro) printf(", ");
            printf("%d", B[i]);
            primeiro = 0;
        }
    }
    printf("\n");

    
    int unicosA = 0, unicosB = 0;
    for (i = 0; i < nA; i++) {
        int comum = 0;
        for (j = 0; j < nB; j++) if (A[i] == B[j]) comum = 1;
        if (!comum) unicosA++;
    }
    for (i = 0; i < nB; i++) {
        int comum = 0;
        for (j = 0; j < nA; j++) if (B[i] == A[j]) comum = 1;
        if (!comum) unicosB++;
    }

    int trocas = (unicosA < unicosB) ? unicosA : unicosB;
    printf("Quantidade de trocas possíveis: %d\n", trocas);

    return 0;
}

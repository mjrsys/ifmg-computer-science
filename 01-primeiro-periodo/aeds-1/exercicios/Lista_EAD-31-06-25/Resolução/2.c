#include <stdio.h>

int main() {
    int matriz[3][3];
    int matriz_soma[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    puts("A matriz digitada foi:");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_soma[j] += matriz[i][j];
        }
    }

    printf("Soma das colunas:\n");
    for (int j = 0; j < 3; j++) {
        printf("Coluna %d: %d\n", j, matriz_soma[j]);
    }

    return 0;
}

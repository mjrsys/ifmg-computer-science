#include <stdio.h>

int main() {

    float matriz[3][6];
    float soma_colunas_impares = 0, media_segunda_quarta = 0, elementos_media = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite um valor real para matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (j % 2 != 0) {
                soma_colunas_impares += matriz[i][j];
            }

            if (j == 1 || j == 3) {
                media_segunda_quarta += matriz[i][j];
                elementos_media++;
            }
        }
    }

    media_segunda_quarta /= elementos_media;

    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("Soma das colunas ímpares: %.2f\n", soma_colunas_impares);
    printf("Média da segunda e quarta coluna: %.2f\n", media_segunda_quarta);

    printf("Matriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

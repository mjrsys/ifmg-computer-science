#include <stdio.h>

int main() {
    float matriz[2][2];
    float matriz2[2][2];
    float matriz_resultado[3][3] = {0};
    char opcao;
    float constante;

    puts("Preencha a primeira matriz 2x2:");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }

    puts("Preencha a segunda matriz 2x2:");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }

    printf("\nEscolha uma opção:\n");
    printf("  a - Somar as duas matrizes\n");
    printf("  b - Subtrair a primeira matriz da segunda\n");
    printf("  c - Adicionar uma constante às duas matrizes\n");
    printf("  d - Imprimir as matrizes\n");
    printf("Opção: ");

    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            puts("Resultado da soma:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    matriz_resultado[i][j] = matriz[i][j] + matriz2[i][j];
                    printf("%.2f ", matriz_resultado[i][j]);
                }
                printf("\n");
            }
            break;

        case 'b':
            puts("Resultado da subtração:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    matriz_resultado[i][j] = matriz[i][j] - matriz2[i][j];
                    printf("%.2f ", matriz_resultado[i][j]);
                }
                printf("\n");
            }
            break;

        case 'c':
            printf("Digite a constante: ");
            scanf("%f", &constante);
            puts("Matriz 1 + constante:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%.2f ", matriz[i][j] + constante);
                }
                printf("\n");
            }

            puts("Matriz 2 + constante:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%.2f ", matriz2[i][j] + constante);
                }
                printf("\n");
            }
            break;

        case 'd':
            puts("Matriz 1:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%.2f ", matriz[i][j]);
                }
                printf("\n");
            }

            puts("Matriz 2:");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%.2f ", matriz2[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            puts("Opção inválida.");
            break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

char verificar_vencedor(char (*matriz)[3]) {
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2] && matriz[i][0] != ' ')
            return matriz[i][0];
        if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i] && matriz[0][i] != ' ')
            return matriz[0][i];
    }

    if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2] && matriz[0][0] != ' ')
        return matriz[0][0];

    if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0] && matriz[0][2] != ' ')
        return matriz[0][2];

    return 'n';
}

void imprimir_tabuleiro(char (*matriz)[3]) {
    printf("\n    0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("  -------------\n");
        printf("%d |", i);
        for (int j = 0; j < 3; j++) {
            printf(" %c |", matriz[i][j]);
        }
        printf("\n");
    }
    printf("  -------------\n");
}

int main() {
    char matriz[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    int estado = 0;
    int linha, coluna;
    int round = 0;
    int jogou = 0;

    while (!estado) {
        imprimir_tabuleiro(matriz);

        // Primeiro jogador (X)
        while (1) {
            printf("\nPrimeiro jogador (X):\n");
            printf("Digite a linha (0 a 2): ");
            scanf("%d", &linha);
            printf("Digite a coluna (0 a 2): ");
            scanf("%d", &coluna);

            if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && matriz[linha][coluna] == ' ') {
                matriz[linha][coluna] = 'x';
                round++;
                break;
            } else {
                printf("Posição invalida ou ja ocupada. Tente novamente.\n");
            }
        }

        char vencedor = verificar_vencedor(matriz);


        if (vencedor == 'x') {
            printf("\nO jogador 1 venceu!\n");
            break;
        } else if (round == 9) {
            printf("\nEmpate!\n");
            break;
        }
        imprimir_tabuleiro(matriz);

        // Segundo jogador (O)
        printf("\nComputador: (O):\n");

        // 1. Tentar ganhar
        for (int i = 0; i < 3 && !jogou; i++) {
            for (int j = 0; j < 3 && !jogou; j++) {
                if (matriz[i][j] == ' ') {
                    matriz[i][j] = 'o';
                    if (verificar_vencedor(matriz) == 'o') {
                        jogou = 1;
                    } else {
                        matriz[i][j] = ' ';
                    }
                }
            }
        }

        // 2. Bloquear oponente
        if (!jogou) {
            for (int i = 0; i < 3 && !jogou; i++) {
                for (int j = 0; j < 3 && !jogou; j++) {
                    if (matriz[i][j] == ' ') {
                        matriz[i][j] = 'x';
                        if (verificar_vencedor(matriz) == 'x') {
                            matriz[i][j] = 'o'; // bloqueia
                            jogou = 1;
                        } else {
                            matriz[i][j] = ' ';
                        }
                    }
                }
            }
        }

        // 3. Jogada aleatória
        if (!jogou) {
            while (1) {
                linha = rand() % 3;
                coluna = rand() % 3;
                if (matriz[linha][coluna] == ' ') {
                    matriz[linha][coluna] = 'o';
                    break;
                }
            }
        }

        round++;

        vencedor = verificar_vencedor(matriz);
        if (vencedor == 'o') {
            printf("\nO jogador 2 venceu!\n");
            break;
        } else if (round == 9) {
            printf("\nEmpate!\n");
            break;
        }
    }

    return 0;
}

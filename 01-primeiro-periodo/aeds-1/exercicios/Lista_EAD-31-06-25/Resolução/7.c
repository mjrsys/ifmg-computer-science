#include <stdio.h>

int main() {
    int n;

    do {
        puts("Digite um número inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    char matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= n - i - 1) {
                matriz[i][j] = '*';
            } else {
                matriz[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

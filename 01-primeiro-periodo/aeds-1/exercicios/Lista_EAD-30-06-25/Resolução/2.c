#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 5},
        {3, 4, 2},
        {2, 6, 4}
    };

    int soma = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma = soma + matriz[i][j];
        }
    }

    printf("%d \n", soma);


    return 0;
}

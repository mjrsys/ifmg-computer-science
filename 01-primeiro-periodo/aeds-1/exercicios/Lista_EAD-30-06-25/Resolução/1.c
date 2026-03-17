#include <stdio.h>

int main() {
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };


    int resultado = matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1];

    printf("%d \n", resultado);


    return 0;
}

#include <stdio.h>

int main() {

    int array[5] = {10, 60, 5, 22, 20};
    int maior = array[0]; int menor = array[0];

    for (int i = 0; i < 5; i++) {
        if (maior < array[i]) {
            maior = array[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        if (menor > array[i]) {
            menor = array[i];
        }
    }


    printf("O maior valor do array é %d e o menor %d\n", maior, menor);

    return 0;
}

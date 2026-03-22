#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define arr_len 15

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int arr[arr_len];

    printf("Preenchendo vetor com 15 números aleatórios...\n");
    srand(time(NULL));
    for (int i = 0; i < arr_len; i++) {
        int randNum = rand() % arr_len;
        arr[i] = randNum;
        printf("%d ", randNum);
    }
    printf("\n");

    printf("Quadrado de cada um dos valores: \n");
    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");

    return 0;
}
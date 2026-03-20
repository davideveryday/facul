#include <stdio.h>
#include <locale.h>

float calcMedia(int val[]) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += val[i];
    }

    return (float) total / 3;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int val[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite o %dº valor para o cálculo da média  >>>", i+1);
        scanf("%d", &val[i]);
        printf("\n");
    }

    float result = calcMedia(val);
    printf("Média: %.2f\n", result);

    return 0;
}
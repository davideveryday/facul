#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcB(float a) {
    // b*(a/5) = (a+2)
    // a != 0
    // b = (a+2)/(a/5)
    if ((int) a == 0) {
        printf("A não pode ser igual a 0, pois não se pode dividir por zero!\n");
        exit(1);
    }

    float b = (a+2) / (a/5); 
    return b;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float a;
    printf("Digite o valor de A para a fórmula A/5 = B / (A+2)  >>>");
    scanf("%f", &a);

    float result = calcB(a);
    printf("O valor de B para a fórmula %.2f/5 = B / (%.2f+2) é igual a %.2f\n", a, a, result);

    return 0;
}
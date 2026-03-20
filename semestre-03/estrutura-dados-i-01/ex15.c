#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int factorFrom(int n) {
    if (n == 1) return 1;
    else return n * factorFrom(n-1);
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int val;
    printf("digite um número para receber seu fatorial >>>");
    scanf("%d", &val);

    if (val <= 0) {
        printf("permitido apenas números positivos\n");
        exit(1);
    }

    int result = factorFrom(val);
    printf("resultado: %d\n", result);
    return 0;
}
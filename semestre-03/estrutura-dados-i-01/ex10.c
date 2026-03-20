#include <stdio.h>
#include <locale.h>

int calcY(int x) {
    return x + 5;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int x;
    printf("Digite o valor de x para a fórmula Y = x + 5  >>>");
    scanf("%d", &x);

    int y = calcY(x);
    printf("f(%d) = %d + 5 = %d\n", x, x, y);

    return 0;
}
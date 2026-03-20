#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    printf("Digite o primeiro número >>>");
    scanf("%d", &n1);
    printf("Digite o segundo número >>>");
    scanf("%d", &n2);

    float result;
    if (n1 >= n2) {
        result = (float) n1/n2;
        printf("%d dividido por %d = %.2f\n", n1, n2, result);
    } else {
        result = (float) n2/n1;
        printf("%d dividido por %d = %.2f\n", n2, n1, result);
    }

    return 0;
}
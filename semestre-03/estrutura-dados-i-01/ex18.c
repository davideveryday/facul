#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 1, acc, i;
    for(i = 0; i < 16; i++) {
        printf("%d ", a);
        acc = a + b;
        a = b;
        b = acc;
    }
    printf("\n");

    return 0;
}
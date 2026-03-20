#include <stdio.h>
#include <locale.h>

int ePrimo(int n) {
    if (n <= 1) {
        return 0;
    }

    int i;
    int cont = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) cont++;
        if (cont > 2) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int val;
    printf("digite um número >>> ");
    scanf("%d", &val);

    printf("números primos entre 0 e %d\n", val);

    int i = 0;
    do {
        int result = ePrimo(i);
        if (result == 1) {
            printf("%d ", i);
        }
        i++;
    } while (i <= val);
}
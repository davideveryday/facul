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
    printf("Digite um número para checar se é primo >>> ");
    scanf("%d", &val);

    int result = ePrimo(val);
    if (result == 1) {
        printf("%d é primo\n", val);
        return 0;
    }

    if (result == 0) {
        printf("%d não é primo\n", val);
       return 0;
    }
}
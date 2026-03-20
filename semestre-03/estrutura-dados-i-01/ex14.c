#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int inicio;
    printf("entre com um número inicial para a sequência >>>");
    scanf("%d", &inicio);

    int razao;
    printf("insira a razão da sequência >>>");
    scanf("%d", &razao);

    for (int i = 0; i < 10; i++) {
        inicio += razao;
        printf("%d ", inicio);
    }
    
    printf("\n");

    return 0;
}
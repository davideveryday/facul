#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(void) {
	setlocale(LC_ALL, "Portuguese");

    int opcao;

    while(1) {
		printf("\n1 - Adicionar pessoa\n2 - Remover pessoa");
		printf("\n3 - Mostrar Fila\n0 - Sair\n\nOpção -> ");
		scanf("%d", &opcao);

		switch(opcao){
			case 0: exit(0);
			case 1:
                printf("\nOpt 1");
				break;
			case 2:
                printf("\nOpt 2");
				break;
			case 3:
                printf("\nOpt 3");
				break;
			default:
				printf("\n Opção inválida!");	
		}	
	}			
}
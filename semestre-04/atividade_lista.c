#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// constantes
#define MAX 4
#define TAM_NOME 100

char* lista[MAX];

void adicionaPessoa(char *nome) {
    lista[0] = nome;
}

// v1 -> lista fixa 
void main(void) {
	setlocale(LC_ALL, "Portuguese");

    int opcao;
    char nome[TAM_NOME];

    while(1) {
		printf("\n1 - Adicionar pessoa\n2 - Remover pessoa");
		printf("\n3 - Mostrar Fila\n0 - Sair\n\nOpção -> ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

		switch(opcao){
			case 0: exit(0);
			case 1:
                printf("\n--> ");
                fgets(nome, TAM_NOME, stdin);
                printf("%s", nome);
                // adicionaPessoa(nome);
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
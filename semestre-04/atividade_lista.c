#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// constantes
#define MAX 4
#define TAM_NOME 100

struct Fila {
    int capacidade;
    char *nomePessoa;
    int primeiro;
    int ultimo;
    int quantidade;
};

void criarFila(struct Fila *f, unsigned int c) {
    f->capacidade = c;
	f->nomePessoa = (char *) malloc(f->capacidade * sizeof(char));
	f->primeiro = 0;
	f->ultimo = -1;
	f->quantidade = 0;
}

// v1 -> lista fixa 
void main(void) {
	setlocale(LC_ALL, "Portuguese");

    int opcao;
    char *nome;
    struct Fila f;

    criarFila(&f, MAX);

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
				break;
			case 2:
                printf("\nOpt 2");
				break;
			case 3:
				break;
			default:
				printf("\n Opção inválida!");	
		}	
	}			
}
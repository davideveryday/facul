#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// constantes
#define MAX 4
#define TAM_NOME 100

typedef struct {
    int capacidade;
    char (*pessoas)[TAM_NOME];
    int primeiro;
    int ultimo;
    int tamanho;
} Fila;

void criarFila(Fila *f, unsigned int c) {
    f->capacidade = c;
	f->pessoas = malloc(c * sizeof(*f->pessoas));
	f->primeiro = 0;
	f->ultimo = -1;
	f->tamanho = 0;
}


int taVazia(Fila *f) {
	return (f->tamanho == 0);
}	

int taCheia(Fila *f) {
	return (f->tamanho == f->capacidade);
}

void adicionarPessoa(Fila *f) {
	if (taCheia(f)) {
		printf("\nFila cheia!\n");
		return;
	}

	char nome[TAM_NOME];

	printf("\n--> ");

	if (fgets(nome, TAM_NOME, stdin) != NULL) {
		// remove a quebra de linha
		nome[strcspn(nome, "\n")] = 0;
	}

	if (f->ultimo == f->capacidade - 1) f->ultimo = -1;
	f->ultimo++;
	strcpy(f->pessoas[f->ultimo], nome);
	f->tamanho++;
}

char* removerPessoa(Fila *f) {
	if (!taVazia(f)) {
		char *temp = f->pessoas[f->primeiro++];
		if (f->primeiro == f->capacidade)
			f->primeiro = 0;
		f->tamanho--;
		
		return temp;
	}

	return NULL;
}

void imprimirFila(Fila *f) {
	int contador, i;

	printf("\n");
	for (contador = 0, i = f->primeiro; contador < f->tamanho; contador++) {
		printf("%s -> ", f->pessoas[i++]);
		if (i == f->capacidade) i = 0;
	}
	printf("\n");
}

void imprimirTamanhoFila(Fila *f) {
	printf("\nA fila possui %d pessoas\n", f->tamanho);
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");

    int opcao;
	char *removido;
    Fila f;

    criarFila(&f, MAX);

    while(1) {
		printf("\n1 - Adicionar pessoa\n2 - Remover pessoa");
		printf("\n3 - Mostrar Fila\n4 - Mostrar tamanho da fila\n5 - Buscar por nome\n0 - Sair\n\nOpção -> ");
        scanf("%d", &opcao);
		
		// limpa quebra de linha
        while (getchar() != '\n') {};

		switch(opcao){
			case 0: 
			 	free(f.pessoas);
				exit(0);
			case 1:
				adicionarPessoa(&f);
				break;
			case 2:
				if ((removido = removerPessoa(&f)))
					printf("\n%s foi removido da lista.\n", removido);
				break;
			case 3:
				imprimirFila(&f);
				break;
			case 4:
				imprimirTamanhoFila(&f);				// remove a quebra de linha
				break;
			default:
				printf("\n Opção inválida!");	
		}
	}
	
	return 0;
}
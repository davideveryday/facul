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

void adicionarPessoa(Fila *f, char *nome) {
	// ve se a fila tem espaço
	// se sim ve onde tem espaço
	// adiciona a pessoa naquele lugar da fila
	// atualiza o ultimo elemento
	if (f->ultimo == f->capacidade - 1) f->ultimo = -1;
	f->ultimo++;
	strcpy(f->pessoas[f->ultimo], nome);
	f->tamanho++;
	
}

void imprimirFila(Fila *f) {
	int contador, i;

	for (contador = 0, i = f->primeiro; contador < f->tamanho; contador++) {
		printf("%s\t", f->pessoas[i++]);
		if (i == f->capacidade) i=0;
	}

}

int taCheia(Fila *f) {
	return (f->tamanho == f->capacidade);
}

// v1 -> lista fixa 
void main(void) {
	setlocale(LC_ALL, "Portuguese");

    int opcao;
    char *nome;
    Fila f;

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
				adicionarPessoa(&f, nome);
				break;
			case 2:
                printf("\nOpt 2");
				break;
			case 3:
				imprimirFila(&f);
				break;
			default:
				printf("\n Opção inválida!");	
		}	
	}			
}
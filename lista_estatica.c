#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_estatica.h"
#define MAX_ALUNOS 100

void inicializarLista(Lista *li) {
    li->tamanho = 0;
}

void inserirAluno(Lista *li, int matricula) {
    if (li->tamanho >= MAX_ALUNOS) {
        printf("Lista cheia, nao foi possivel inserir o aluno.\n");
        return;
    }
    li->alunos[li->tamanho].matricula = matricula;
    li->tamanho++;
}

int missing_number(Lista *li, int N) {
    int somaTotal = (N * (N + 1)) / 2;
    int somaAtual = 0;
	int i;
    for (i = 0; i < li->tamanho; i++) {
        somaAtual += li->alunos[i].matricula;
    }

    return somaTotal - somaAtual;
}

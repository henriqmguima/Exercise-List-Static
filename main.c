#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"

int main() {
    int N, matricula, i;
    Lista turma;
    inicializarLista(&turma);

    printf("Digite o numero total de alunos na turma (N): ");
    scanf("%d", &N);

    printf("Digite as matriculas dos alunos (entre 1 e %d):\n", N);
    for (i = 0; i < N - 1; i++) {
        scanf("%d", &matricula);
        inserirAluno(&turma, matricula);
    }

    int numeroFaltante = missing_number(&turma, N);
    printf("Numero de matricula faltante: %d\n", numeroFaltante);

    return 0;
}


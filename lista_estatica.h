#ifndef LISTA_ESTATICA_H_INCLUDED
#define LISTA_ESTATICA_H_INCLUDED
#define MAX_ALUNOS 100

typedef struct {
    int matricula;
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int tamanho;
} Lista;

void inicializarLista(Lista *li);
void inserirAluno(Lista *li, int matricula);
int missing_number(Lista *li, int N);
#endif 

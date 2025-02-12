#ifndef FILA_ESTATICA_H_INCLUDED
#define FILA_ESTATICA_H_INCLUDED
#define MAX 3

struct ALUNO{
    char nome[100];
    int matricula;
    float nota;
};
typedef struct ALUNO Aluno;

struct FILA{
    int qtd, inicio, fim;
    ALUNO aluno[MAX];
};
typedef struct FILA Fila;

Fila* criarFila();
void apagarFila(Fila *fila);
int filaEhCheia(Fila *fila);
int filaEhVazia(Fila *fila);
int inserirFila(Fila *fila, Aluno *alunoN);
int removerFila(Fila *fila);
void exibirFila(Fila *fila);
void cadastrarAluno(Aluno *alunoN);
#endif // FILA_ESTATICA_H_INCLUDED

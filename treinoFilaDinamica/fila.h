// Implementação de uma fila dinâmica
#ifndef FILA_H_INCLUDED 
#define FILA_H_INCLUDED

using namespace std;

struct ALUNO
{
   string matricula;
   string nome;
   float n1, n2;
   float media;
};
typedef struct ALUNO Aluno;

struct Elemento
{
    Aluno dado;
    Elemento *prox;
};
typedef struct Elemento Elem;

struct FILA
{
    Elem *inicio;
    Elem *fim;
    int qtd;
};
typedef struct FILA Fila;

Fila* criarFila();
int inserirFila(Fila *fila, Aluno *alunoN);
int exibirFila(Fila *fila);
void cadastrarAluno(Aluno *alunoN);
float calculaMedia(Aluno *alunoN );
void liberarFila(Fila *fila);

#endif
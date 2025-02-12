#ifndef LISTA_ESTATICA_H
#define LISTA_ESTATICA_H
#define MAX 10

struct Aluno
{
    char nome[100];
    int matricula;
    float nota;
};
struct LISTA {
    int qtd;
    ALUNO aluno[MAX];
};

typedef struct ALUNO Aluno;
typedef struct LISTA Lista;

Lista* criarLista();
void apagarLista(Lista *lista);
int listaCheia(Lista *lista);
int listaVazia(Lista *lista);
int inserirFim(Lista *lista, Aluno *alunoN);
int inserirInicio(Lista *lista, Aluno *alunoN);
void cadastrarAluno(Aluno *alunoN);

#endif
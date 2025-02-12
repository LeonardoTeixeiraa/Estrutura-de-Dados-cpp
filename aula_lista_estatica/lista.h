#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define MAX 10


struct ALUNO{
    char nome[100];
    int matricula;
    float n1;
};
struct LISTA{
    int qtd;
    ALUNO aluno[MAX];
};

typedef struct ALUNO Aluno;
typedef struct LISTA Lista;

Lista* criarLista();
int listaEhCheia(Lista *lista);
int listaEhVazia(Lista *lista);
char menuInicial();
void cadastrarAluno(Aluno *alunoN);
int inserirInicio(Lista *lista, Aluno *alunoN);
int inserirFim(Lista *lista, Aluno *alunoN);
int inserirOrdenado(Lista *lista, Aluno *alunoN);
int removerInicio(Lista *lista, Aluno *alunoN);
int removerFinal(Lista *lista, Aluno *alunoN);
int removerOrdenado(Lista *lista);
void exibirLista(Lista *lista);
int consultaAluno(Lista *lista);
void apagarLista(Lista *lista);
char menuSaida();
void retornoOperacao(int x);
#endif // LISTA_H_INCLUDED

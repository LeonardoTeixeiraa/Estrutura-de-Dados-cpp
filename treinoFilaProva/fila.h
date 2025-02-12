    #ifndef FILA_H_INCLUDED
    #define FILA_H_INCLUDED
    #define MAX 10

    using namespace std;

    struct Pessoa{
        string cpf;
        string nome;
        int idade;
        string sexo;
    };
    typedef struct Pessoa Pessoa;

    struct Fila
    {
        int qtd;
        int inicio;
        int fim;
        Pessoa pessoa[MAX];
    };
    typedef struct Fila Fila;

    Fila* criarFila();
    void cadastrarPessoa(Pessoa* pessoa);
    int inserirFila(Fila *fila, Pessoa *pessoa);
    int exibirFila(Fila * fila);
    #endif
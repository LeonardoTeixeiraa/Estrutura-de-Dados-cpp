#include<iostream>
#include"lista_estatica.h"

using namespace std;

//criar lista
Lista* criarLista(){;
    Lista* lista = new Lista;
        if(!lista){
            cout << "Erro de alocacao!";
        exit(1);
        }
    lista -> qtd = 0;
    return lista;
}

void apagarLista(Lista *lista){
    delete lista;
}

//verificar lista cheia
int listaCheia(Lista *lista){
    //return (lista->qtd ==MAX)
    if(lista -> qtd == MAX)
        return 1;
    else
        return 0;
}
// inserir elemento no fim
int inserirFim(Lista *lista, Aluno *){
    if(listaCheia(lista) == 1)
        return 0;
    lista ->aluno(lista ->qtd) =*alunoN;
    lista -> qtd++;
    return 1;
}

// inserir elemento no inicio
int inserirInicio(Lista *lista, Aluno *alunoN){
     if(listaEhCheia(lista)==1) //se a lista e cheia
    return 0;
    
    for(int i= lista->qtd; i>0;i--)
        lista -> aluno[i]=lista->aluno[i-1];
    
    lista->aluno[0]=*alunoN;
    lista->qtd++;
    return 1;
}

void cadastrarAluno(Aluno *alunoN){
    cout << "Cadastro Aluno:\n";
    cout << "Nome: ";
    cin.getline(alunoN->nome, sizeof(alunoN->nome);
    cout << "Matricular: ");
    fflush(stdin);
    cin.getline(alunoN ->matricula, sizeof(alunoN -> matricula));
    cout << "Nota";
    fflush(stdin);
    cin.getline(alunoN ->nota, sizeof(alunoN ->nota1));
}

int listaVazia(Lista *lista){
    if(lista -> qtd ==0)
        return 1;
    else 
        return 0;
}
//realocar os dados dos alunos no vetor: 
for(i = lista -> qtd)

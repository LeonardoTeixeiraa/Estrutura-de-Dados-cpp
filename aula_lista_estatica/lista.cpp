#include<iostream>
#include "lista.h"
#include <cctype>

using namespace std;

//cria lista
Lista* criarLista(){
    Lista *lista = new Lista;
    if(!lista){
        cout<<"Erro de alocacao!!!";
        exit(1);
    }
    lista->qtd = 0;
    return lista;
}

//confere se a lista esta cheia
int listaEhCheia(Lista *lista){
    if(lista->qtd==MAX)
        return 1;
    else
        return 0;
}

//confere se a lista esta vazia
int listaEhVazia(Lista *lista){
    if(lista->qtd==0)
        return 1;
    else
        return 0;
}

//chama o menu inicial
char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir aluno no inicio da lista\n"
            "2 - para inserir aluno no final da lista\n"
            "3 - para inserir aluno de forma ordenada na lista\n"
            "4 - para remover um aluno do in�cio da lista\n"
            "5 - para remover um aluno do final da lista\n"
            "6 - para remover aluno um aluno determinado\n"
            "7 - exibir os alunos cadastrados\n"
            "8 - consultar um aluno na lista\n"
            "9 - apagar a lista\n"
            "--> ";
    fflush(stdin);
    cin>>menu;
    return menu;
}

//cadastra os dados do aluno
void cadastrarAluno(Aluno *alunoN){
    cout << "Cadastro Aluno:\n";
    cout <<"Nome: ";
    fflush(stdin);
    cin.getline(alunoN->nome, sizeof(alunoN->nome));
    cout << "Matrícula: ";
    cin >> alunoN->matricula;
    cout << "Nota: ";
    cin >> alunoN->n1;
}

//insere dados no começo da lista
int inserirInicio(Lista *lista, Aluno *alunoN){
    if(listaEhCheia(lista)==1)
        return 0;

    for(int i= lista->qtd; i>0;i--)
        lista->aluno[i]=lista->aluno[i-1];

    lista->aluno[0]=*alunoN;
    lista->qtd++;
    return 1;
}

//insere dados no fim da lista
int inserirFim(Lista *lista, Aluno *alunoN){
    if(listaEhCheia(lista)==1)
        return 0;
    lista->aluno[lista->qtd]=*alunoN;
    lista->qtd++;
    return 1;
}

//insere dados em um lugar especifico da lista
int inserirOrdenado(Lista *lista, Aluno *alunoN){
    int i, p=0;
    if(listaEhCheia(lista)==1)
        return 0;

    for(i=0;i<lista->qtd;i++){
        if(lista->aluno[i].matricula <= alunoN->matricula)
          p++;
        else
            i=lista->qtd;
    }

    for(i= lista->qtd; i>=p;i--)
        lista->aluno[i]=lista->aluno[i-1];

    lista->aluno[p]=*alunoN;
    lista->qtd++;
    return 1;
}
//remove os dados do inicio da lista
int removerInicio(Lista *lista, Aluno *alunoN) {
    if(listaEhVazia(lista) == 1)  // Verifica se a lista esta vazia
        return 0;  // Retorna 0 indicando falha ao remover (lista vazia)

    for(int i = 0; i < lista->qtd - 1; i++) {
        lista->aluno[i] = lista->aluno[i + 1];  // Desloca os elementos para a esquerda
    }

    lista->qtd--;  // Decrementa a quantidade de elementos da lista
    return 1;  // Retorna 1 para indicar sucesso na remocao
}

//remove os dados do fim da lista
int removerFinal(Lista *lista, Aluno *alunoN){
    if(listaEhVazia(lista)==1) // if(listaEhCheia(lista))
        return 0;
    lista->aluno[lista->qtd]=*alunoN;
    lista->qtd--;
    return 1;
}

//remove dados em um lugar espec�fico da lista
int removerOrdenado(Lista *lista){
    int i, p = -1, matricula;
    cout << "Informe a matricula do aluno a ser removido: ";
    cin >> matricula;

    if(listaEhVazia(lista) == 1)
        return 0;
    for(i = 0; i < lista->qtd; i++){
        if(lista->aluno[i].matricula == matricula){
            p = i;
            break;
        }
    }
    if(p == -1)
        return 0;
        for(i = p; i < lista->qtd - 1; i++)
            lista->aluno[i] = lista->aluno[i + 1];

        lista->qtd--;
        return 1;
    }

    //exibi a lista
    void exibirLista(Lista *lista){
        int i;
        if(lista->qtd ==0)
        cout << "Nao ha cadastro de aluno!\n";
        else{           
            for(i=0; i <lista->qtd; i++){
                cout<< i+1 <<"Cadastro:\n"
                    << "Nome: " << lista->aluno[i].nome
                    << "\nMatricula: " << lista->aluno[i].matricula
                    << "\nNota: " << lista->aluno[i].n1 << "\n\n";
            }
            cout<<"\n\n";
        }
    }

    //consulta os dados de um aluno especifico
int consultaAluno(Lista *lista){
    int matricula, i, encontrado = 0;

    if(listaEhVazia(lista) == 1){
        cout << "A lista esta vazia!" << endl;
        return 0;
    }
    cout << "Informe a matricula do aluno para consulta: ";
    cin >> matricula;  

    for(i = 0; i < lista->qtd; i++){
        if(lista->aluno[i].matricula == matricula){
            cout << "Aluno encontrado!" << endl;
            cout << "Nome: " << lista->aluno[i].nome << endl;
            cout << "Matricula: " << lista->aluno[i].matricula << endl;
            cout << "Nota: " << lista->aluno[i].n1 << endl;
            encontrado = 1;
            break;
        }
    }
    if(encontrado == 0){
        cout << "Aluno com matricula " << matricula << " nao encontrado!" << endl;
    }
}

//apaga a lista
void apagarLista(Lista *lista) {
    if (listaEhVazia(lista) == 1)
        cout << "A lista ja esta vazia!" << endl;

    delete lista;
    cout << "Lista apagada com sucesso!" << endl;
}

//chama o menu de saida
char menuSaida(){
    char menu;
    cout<<"\nDeseja sair do programa? \n S para sim "
            "e qualquer tecla para continuar...\n";
    cin >> menu;
    menu = toupper(menu);
    return menu;
}
//retorna se a operacao foi bem sucedida ou nao
void retornoOperacao(int x){
    if(x==1)
        cout << "Operacao realizada com sucesso!\n";
    else
        cout << "Operacao nao realizada!\n";
}
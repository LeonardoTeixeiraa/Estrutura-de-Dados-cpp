// Implementação de uma fila dinâmica
#include<iostream>
#include "fila.h"

using namespace std;

Fila* criarFila(){
    Fila *fila = new Fila;
    if(fila != nullptr){
        fila->inicio = nullptr;
        fila->fim = nullptr;
        fila->qtd = 0;
    }
    return fila;
}

int inserirFila(Fila *fila, Aluno *alunoN){
    if(fila == nullptr){ //verificando se a fila foi criada
        cout << "A fila nao existe" << endl;
        return 0;
    }
    Elem *no = new Elem;
    if(no == nullptr){ //verificando se o nó foi alocado
        cout << "O no nao foi alocado. Espaco de memoria insulficiente!" << endl;
        return 0;
    }
    no->dado= *alunoN; //atribuindo os valores do objeto aluno para o campo dado do nó
    no->prox = nullptr; // campo prox do nó recebe nullptr já que ele será o último elemento

    if(fila->fim == nullptr){ // verificar se a fila está vazia
        fila->inicio = no;
    }
    else{
        fila->fim->prox = no; // o prox do ultimo elemento aponta para o novo nó
        fila->fim = no; //atualizar o fim para apontar para o novo nó
        fila->qtd++; //atualizar a quantidade de elementos na fila
    }
    return 1;
}
int exibirFila(Fila *fila){
    // verificar se a fila foi criada
    if(fila == nullptr){
        cout << "A fila nao existe" << endl;
        return 0;
    }
    // verificar se a fila esta vazia
    if(fila->inicio == nullptr){
        cout << "A fila nao possui elementos para serem exibidos" << endl;
        return 0;
    }
    // Instanciar um ponteiro auxiliar para percorrer a fila
    Elem *no = fila->inicio;

    // exibir os elementos
    int i=1;
    while(no != nullptr){
        cout << "------Informações do aluno " << i << "------\n";
        cout << "Matricula: " << no->dado.matricula 
        << "Nome: " << no->dado.nome
        << "Nota 1: " << no->dado.n1
        << "Nota 2: " << no->dado.n2;
        cout << "\n\n";
        no = no->prox;
        i++;
    }
    return 1;
}

void cadastrarAluno(Aluno *alunoN){
    cout << "Informe o nome do aluno: ";
    cin.ignore();
    getline(cin, alunoN->nome);

    cout << "Informe a matricula: ";
    getline(cin, alunoN->matricula);

    cout << "Informe a nota 1: ";
    cin >> alunoN->n1;

    cout << "Informe a nota 2: ";
    cin >> alunoN->n2;
    
}

float calculaMedia(Aluno *alunoN ){
    return alunoN->media = (alunoN->n1 + alunoN->n2)/2;
}

void liberarFila(Fila* fila){
    if(fila!= nullptr){ 
        Elem *no;
        while(fila->inicio != nullptr){
            no = fila->inicio;
            fila->inicio = fila->inicio->prox;
            delete no; //deleta o nos
        }
        delete fila;
    }
}


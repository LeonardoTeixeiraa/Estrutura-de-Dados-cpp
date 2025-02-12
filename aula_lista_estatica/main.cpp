#include <iostream>
#include "lista.h"

using namespace std;

char menuInicial();
char menuSaida();
void retornoOperacao(int x);

int main(){

    char menu;
    int x;
    Lista *lista;
    Aluno alunoN;

    lista = criarLista();

    do{
        menu = menuInicial();
        switch(menu){
        case '1':
            cadastrarAluno(&alunoN);
            x=inserirInicio(lista,&alunoN);
            retornoOperacao(x);
            break;
        case '2':
            cadastrarAluno(&alunoN);
            x=inserirFim(lista,&alunoN);
            retornoOperacao(x);
            break;
        case '3':
            cadastrarAluno(&alunoN);
            x=inserirOrdenado(lista,&alunoN);
            retornoOperacao(x);
            break;
        case '4':
            x=removerInicio(lista,&alunoN);
            retornoOperacao(x);
            break;
        case '5':
            x=removerFinal(lista,&alunoN);
            retornoOperacao(x);
            break;
        case '6':
            x = removerOrdenado(lista);
            retornoOperacao(x);
            break;
        case '7':
            exibirLista(lista);
            break;
        case '8':
            x = consultaAluno(lista);
            retornoOperacao(x);
            break;
        case '9':
            apagarLista(lista);
            lista = criarLista();
            break;
            default: cout << "\nOp��o Inv�lida!";
        }
        menu = menuSaida();
    }while(menu!='S');

   return 0;
}



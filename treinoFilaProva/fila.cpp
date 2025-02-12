#include<iostream>
#include "fila.h"   

using namespace std;

Fila* criarFila(){
    Fila *fila = new Fila();

    if(!fila){
        cout << "Erro de alocacao";
        exit(1);
    }

    fila->qtd = 0;
    fila->inicio = 0;
    fila->fim = 0;

    return fila;
}

void cadastrarPessoa(Pessoa *pessoa){
     cout << "-----CADASTRO PESSOA FISICA-----" << endl;
    cout << "Informe o nome: ";
    cin.ignore();
    getline(cin, pessoa->nome);

    cout << "Informe o CPF: ";
    getline(cin, pessoa->cpf);

    cout << "Informe a idade: ";
    cin >> pessoa->idade;

    cout << "Informe o sexo M(Masculino) ou F(Feminino): ";
    cin.ignore();
    getline(cin, pessoa->sexo);
    fflush(stdin);
  
}
int filaCheia(Fila *fila){
    if(fila->qtd == MAX){
        cout << "A fila esta cheia. Nao e possivel inserir!" << endl;
    return 1;
    }
    else return 0;
}
int inserirFila(Fila *fila, Pessoa *pessoa){
    // verifica se a lista foi criada
    if(fila==nullptr) return 0;
    if(filaCheia(fila) == 1){
        return 0;
    }
    if(fila->fim == MAX){
        fila->fim = 0;
    }
    fila->pessoa[fila->fim] = *pessoa;
    fila->fim++;
    fila->qtd++;

    return 1; //sucesso
}

int exibirFila(Fila *fila){
    int i,j;
    if(fila->qtd == 0){
        cout << "Nao ha elementos para serem exibidos" << endl;
        return 0;
    }
    else{
        for(i=1, j=fila->inicio; i<=fila->qtd;i++){
            cout << "Cadastro " << i
            << "\nNome: " << fila->pessoa[j].nome
            << "\nCPF: " << fila->pessoa[j].cpf
            << "\nSexo: " << fila->pessoa[j].sexo
            << "\nIdade: " << fila->pessoa[j].idade;
            j++;
            if(j==MAX) j=0;
            cout << "\n\n";
        }
        
    }
    return 1; //sucesso
    
}

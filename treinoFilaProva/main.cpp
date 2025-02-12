#include<iostream>
#include<cstdlib>
#include "fila.h"

using namespace std;

int main(){
    Fila* fila = criarFila();

    // Verificar os valores iniciais da fila
    cout << "Fila criada com sucesso " << endl;
    cout << "Quantidade: " << fila->qtd << endl;
    cout << "Inicio: " << fila->inicio << endl;
    cout << "Fim: " << fila->fim << endl;

    // liberar a memória alocada para fila ao fim do programa
    // sempre que fazemos um new devemos fazer também um delete
    
    
    int qtd_cadastro = 0;
    cout << "Informe a quantidade de cadastros que ira realizar: ";
    cin >> qtd_cadastro;

    // criacao do objeto pessoa
    Pessoa pessoa;

    // inserir pessoa
    for(int i=1; i <=qtd_cadastro; i++){ // i comeca em um por conta do operado <= permitir uma iteracao a mais
        if(fila->qtd == MAX){
            cout << "Fila cheia. Impossivel realizar insercao!" << endl;
        }
        else{
            cadastrarPessoa(&pessoa);
            inserirFila(fila, &pessoa);
        }
        cout << endl;
    }

    // exibir fila
    exibirFila(fila);

    delete fila;
    return 0;
}
#include<iostream>
#include<cstdlib>
#include "fila.h"

using namespace std;

int main(){

    Fila *fila = criarFila();
    Aluno alunoN;
    int count = 0;

    cout << "Informe a quantidade de registros: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "\nCadastro " << i+1 << endl;
        cadastrarAluno(&alunoN);
        calculaMedia(&alunoN);
    }

   
    
    exibirFila(fila);
    liberarFila(fila);
    
    
    


    return 0;
}
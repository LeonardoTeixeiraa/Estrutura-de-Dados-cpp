#include<iostream>
#include<cstdlib>
#include "aluno.h"

using namespace std;

int main(){
    Aluno alunos[5];
    int totalAlunos = 0;
    int qtd = 5;

    for(int i=0; i<qtd; i++){
        if(totalAlunos == 5){
            cout << "A lista de alunos está cheia ";
        }
        else{
            cout << "Cadastro do Aluno " << i+1 << ":" << endl;
            receberAluno(alunos[i]);
            cout << endl;
        }
    }

    cout << "\n--- Dados dos alunos cadastrados ---" << endl;  
    for(int i=0; i<qtd; i++){   
        cout << "\nAluno " << (i + 1) << ":" << endl;
        exibirAluno(alunos[i]);
    }
    
    return 0;
}
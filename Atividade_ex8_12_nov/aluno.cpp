#include<iostream>
#include<cstdlib>
#include "aluno.h"

void receberAluno(Aluno &aluno){
    cout << "Informe o Nome do aluno: ";
    cin.ignore();
    cin.getline(aluno.nome, 50);
    cout << "Informe a matricula: ";
    cin.getline(aluno.matricula, 10);
    cout << "Informe o Curso: ";
    getline(cin, aluno.curso);
    cout << "Informe o ano de ingresso: ";
    cin >> aluno.ano_ingresso;
}
void exibirAluno(Aluno &aluno){
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matricula: " << aluno.matricula << endl;
    cout << "Curso: " << aluno.curso << endl;
    cout << "Ano de ingresso: " << aluno.ano_ingresso << endl;
}
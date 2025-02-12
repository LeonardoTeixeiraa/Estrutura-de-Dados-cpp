// Em se tratando de estrutura, desenvolva um programa armazene os dados de um cadastro
// de aluno (nome, matrícula, curso, ano de ingresso). Elabore um programa que seja capaz de receber
// os dados de 5 alunos (através de função/procedimento) e também capaz de exibir os dados
// cadastrados (através de função/procedimento). Ficará livre para a elaboração da forma que quiser,
// desde que utilize struct e função/procedimento.
#ifndef ALUNO_H
#define ALUNO_H

using namespace std;

struct Aluno
{
    char nome[50];
    char matricula[10];
    string curso;
    int ano_ingresso;
};


void receberAluno(Aluno &aluno);
void exibirAluno(Aluno &aluno);
#endif
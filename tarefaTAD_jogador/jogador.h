#ifndef JOGADOR_H
#define JOGADOR_H

struct Jogador {
    char nome[50];
    char posicao[20];
    int jogos;
    int gols;
};

void atribui(Jogador &jogador);
void imprime(const Jogador &jogador);
int exibirTotalGols(const Jogador jogadores[], int total);
bool jogadorBom(const Jogador &jogador);

#endif
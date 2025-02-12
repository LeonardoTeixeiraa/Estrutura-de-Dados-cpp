#include <iostream>
#include "jogador.h"

using namespace std;


void atribui(Jogador &jogador) {
    cout << "Nome do jogador: ";
    cin.ignore();
    cin.getline(jogador.nome, 50);

    cout << "Posição do jogador: ";
    cin.getline(jogador.posicao, 20);

    cout << "Número de jogos: ";
    cin >> jogador.jogos;

    cout << "Número de gols: ";
    cin >> jogador.gols;
}


void imprime(const Jogador &jogador) {
    cout << "\nNome: " << jogador.nome << "\n"
         << "Posição: " << jogador.posicao << "\n"
         << "Jogos: " << jogador.jogos << "\n"
         << "Gols: " << jogador.gols << endl;
}


int exibirTotalGols(const Jogador jogadores[], int total) {
    int totalGols = 0;
    for (int i = 0; i < total; i++) {
        totalGols += jogadores[i].gols;
    }
    return totalGols;
}

// o critério definido para bom jogador foi de marcar pelo menos 1 gol por partida.
bool jogadorBom(const Jogador &jogador) {
    return jogador.jogos > 0 && (jogador.gols / jogador.jogos) >= 1;
}
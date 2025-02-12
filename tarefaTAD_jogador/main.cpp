// Implemente um TAD para Jogador de Futebol. Cada jogador possui os campos nome, posição, jogos e gols. Implemente as operações:

//     Atribui: atribui valores para os campos.
//     Imprime: imprime os dados do jogador.
//     Exibir total de gols: soma de número de gols realizados por todos jogadores.
//     JogadorBom: testa se o jogador é bom!!! (defina seu próprio critério de bom jogador) 
// Vetor de struct de 10 jogadores.

#include <iostream>
#include "jogador.h"
#include<string>

using namespace std;

char menu();

int main() {
    Jogador jogadores[10];  
    int totalJogadores = 0;
    char op;
    
    do {
        op = menu();

        switch (op) {
            case '1':
                if (totalJogadores < 10) {
                    atribui(jogadores[totalJogadores]);
                    totalJogadores++;
                } else {
                    cout << "Número máximo de jogadores atingido!\n";
                }
                break;
            case '2':
                for (int i = 0; i < totalJogadores; i++) {
                    imprime(jogadores[i]);
                }
                break;
            case '3':
                cout << "Total de gols de todos os jogadores: " << exibirTotalGols(jogadores, totalJogadores) << endl;
                break;
            case '4':
                for (int i = 0; i < totalJogadores; i++) {
                    if (jogadorBom(jogadores[i])) {
                        cout << jogadores[i].nome << " é um bom jogador!\n";
                    } else {
                        cout << jogadores[i].nome << " não é um bom jogador.\n";
                    }
                }
                break;
            case 'S':
                cout << "Saindo do programa...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (op != 'S');
    
    return 0;
}
char menu(){
    char op;

    cout << endl;
    cout << "*********Menu*********\n"
            "1. Atribuir dados ao jogador\n"
            "2. Imprimir dados dos jogadores\n"
            "3. Exibir total de gols\n"
            "4. Verificar se jogador é bom\n"
            "S. Sair\n"
            "--->";
        fflush(stdin);
        cin >> op;
        op = toupper(op);
    return op;
}
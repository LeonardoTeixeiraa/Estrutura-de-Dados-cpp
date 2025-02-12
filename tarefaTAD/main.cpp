    // Desenvolver um TAD para um esfera. Incluir as funções de inicialização necessária e de operações que recebe o raio, calcula a área e o volume da esfera. receberRaio(), calcularArea(), calcularVolume(), exibirResultado() --> as funções serão definidas pelo aluno, que deverá definir se ela retornará ou receberá parâmetros. Na main deverá ter um menu com pelo menos 4 opções: calcular área, volume, exibir raio, sair

#include<iostream>
#include<cstdlib>
#include<string>
#include "esfera.h"

using namespace std;

char menu();
char menuSaida();

int main(){
    double raio;
    char op;

    do{
        op = menu();

        switch (op)
        {
        case '1':
            receberRaio(&raio);  
            cout << "Área da esfera: " << calcularArea(raio) << endl;
            break;
        case '2':
            receberRaio(&raio);  
            cout << "Volume da esfera: " << calcularVolume(raio) << endl;
            break;
        case '3':
            receberRaio(&raio);  
            exibirRaio(raio);
            break;
        case 'S':
            cout << "Saindo do Programa..." << endl;
            break;
        
        default:
            cout << "Opcao Invalida. Por favor informe uma das opcoes do menu!" << endl;
            break;
        }
        op = menuSaida();
    }while(op != 'S');

    return 0;
}

char menu(){
    char op;

    cout << "Informe uma opcao:\n"
            "1 - Calcular area da esfera\n"
            "2 - Calcular volume da esfera \n"
            "3 - Exibir raio\n"
            "S - Sair\n"
            "--->";
    fflush(stdin);
    cin >> op;
    op = toupper(op);
    return op;
}

char menuSaida(){
    char op;

    cout << "Deseja Continuar?\n"
            "Informe S para SAIR ou pressione qualquer outra tecla para CONTINUAR\n"
            "--->";
    fflush(stdin);
    cin >> op;
    return toupper(op);  
}
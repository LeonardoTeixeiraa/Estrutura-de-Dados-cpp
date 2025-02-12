#include<iostream>
#include<cstdlib>
#include"operacao.h"

using namespace std;

char menu();
char menuSaida();

int main(){
    char op;
    double n1, n2;
    

    do{
        op = menu();
        switch (op)
        {
        case '+':
            recebeNumeros(&n1, &n2);
            cout << "O resultado da soma e: " << somarNumeros(n1, n2);

            break;

        case '-':
            recebeNumeros(&n1, &n2);
            cout << "O resultado da subtracao e: " << subNumeros(n1, n2);
            break;

        case '/':
            receberNumerosDiv(&n1, &n2);
            cout << "O resultado da div e: " << divNumeros(n1, n2);
            break;

        case '*':
            recebeNumeros(&n1, &n2);
            cout << "O resultado da mult e: " << multNumeros(n1, n2);
            break;
        default:
            cout << "Opcao digitada invalida!" << endl;
            break;
        }
    op = menuSaida();
    op=toupper(op);
    }while(op != 'S');

    return 0;
}
char menu(){
    char op;
    cout << "Informe a operação desejada: \n" 
        "+ para somar \n"
        "- para subtrair \n"
        "/ para dividir \n"
        "* para multiplicar \n"
        "S para sair \n"
        "---> ";
        fflush(stdin);
        cin >> op;
    return op;
}
char menuSaida(){
    char op;
    cout << "\nDeseja finalizar?\n"
    "S para sair ou digite qualquer outro caractere para continuar" 
    "--> ";
    fflush(stdin);
    cin >> op;

    return op;
}

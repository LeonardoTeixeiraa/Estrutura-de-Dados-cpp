#include<iostream>
#include "operacao.h"
using namespace std;


using namespace std;

    double somarNumeros(double n1, double n2){
        return n1+n2;
    }

    double subNumeros(double n1, double n2){
        return n1-n2;
    }

    double divNumeros(double n1, double n2){
        return n1/n2;
    }
    
    double multNumeros(double n1, double n2){
        return n1*n2;
    }
    
    void recebeNumeros(double *n1, double *n2){
        cout << "Informe o primeiro numeros: ";
        cin >> *n1;
        cout << "Informe o segundo numero:";
        cin >> *n2;
    }

    void receberNumerosDiv(double *n1, double *n2){
        do{
            cout << "Informe dois numeros: ";
            cin >> *n1 >> *n2;
        }
        while (*n2 == 0);
    }

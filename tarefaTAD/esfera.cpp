#include<iostream>
#include "esfera.h"
#include<cmath>

using namespace std;

void receberRaio(double *raio) {
    cout << "Informe o raio da esfera: ";
    cin >> *raio;  
}

double calcularArea(double raio) {
    return 4 * M_PI * pow(raio, 2);  
}

double calcularVolume(double raio) {
    return (4.0/3.0) * M_PI * pow(raio, 3);  
}

void exibirResultado(double raio) {
    cout << "Área da esfera = " << calcularArea(raio) << endl;
    cout << "Volume da esfera = " << calcularVolume(raio) << endl;
}

void exibirRaio(double raio) {
    cout << "O raio é = " << raio << endl;
}

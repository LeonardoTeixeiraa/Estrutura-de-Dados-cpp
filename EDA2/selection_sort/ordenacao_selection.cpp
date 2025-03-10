#include <iostream>
#include<cstdlib>
#define tam 10  

using namespace std;

void exibeVet(int *vetor);
void ordenarVet(int *vetor);

int main() {
    int vet[tam] = {3,0,1,8,7,2,5,4,9,6};

    exibeVet(vet);
    ordenarVet(vet);
    exibeVet(vet);

    return 0;
}

void exibeVet(int *vetor) {
    cout << "Vetor: ";
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void ordenarVet(int *vetor) {
    int aux, minIndex;
    
    cout << "-------Ordenando o vetor-------" << endl;
    
    for (int j = 0; j < tam - 1; j++) {  
        minIndex = j;  

        for (int i = j + 1; i < tam; i++) {  
            if (vetor[i] < vetor[minIndex]) {  
                minIndex = i; 
            }
        }

        if (minIndex != j) {  
            aux = vetor[j];
            vetor[j] = vetor[minIndex];
            vetor[minIndex] = aux;
        }

    }
}
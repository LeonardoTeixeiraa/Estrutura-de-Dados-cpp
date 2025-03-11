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
    int i, j, aux, gap;
    
    cout << "-------Ordenando o vetor-------" << endl;
    
    for (gap = tam/2; gap > 0; gap /=2) {  
        for (int i = gap; i < tam; i++) {  
            aux = vetor[i];
            j = i;

            while (j >= gap &&  vetor[j - gap] > aux){
                vetor[j] = vetor[j - gap];
                j -= gap;
            }
            vetor[j] = aux;
            
        }
    }

}

    
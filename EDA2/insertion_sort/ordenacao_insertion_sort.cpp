#include <iostream>
#include<cstdlib>
#define tam 10  

using namespace std;

void exibeVet(int *vetor);
void ordenarInsercao(int *vetor);

int main() {
    int vet[tam] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};

    exibeVet(vet);
    ordenarInsercao(vet);
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

void ordenarInsercao(int *vetor) {
    int chave, j;
    bool ordenado = true; // Assume que o vetor já está ordenado

    cout << "-------Ordenando o vetor (Insertion Sort)-------" << endl;

    for (int i = 1; i < tam; i++) {
        chave = vetor[i];  // Pegamos o elemento atual
        j = i - 1;

        // Verificamos se algum elemento anterior é maior e precisa ser movido
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j]; // Move o elemento para frente
            j--;
            ordenado = false; // Marcamos que houve alteração
        }
        vetor[j + 1] = chave; // Inserimos a chave na posição correta

        // Se nenhuma troca foi feita, o vetor já está ordenado
        if (ordenado) {
            cout << "O vetor já estava ordenado! Parando...\n";
            break;
        }
    }
}

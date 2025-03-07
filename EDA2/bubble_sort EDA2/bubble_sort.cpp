// exemplo de exercício bubble sort 
// Funções de ordenação com passagem por valor e passagem por referência

#include <cstdlib>
#include <iostream>
#define tam 10

using namespace std;

void recebeVet(int vetor[]);
void exibeVet(int vetor[]);
void vetInverso(int vetor[]);
void ordenarVet(int vetor[]);
// Funções de ordenação e exibição do vetor por meio passagem por referência utilizando ponteiros
void ordenaVet(int *vet);
void mostraVet (int *vet);

int main() {
    int vet[tam];

    // utilizando passagem por valor
    cout << "Utilizando passagem por valor" << endl;
    recebeVet(vet);
    cout << endl;
    cout << "Exibindo os números no vetor: " << endl;
    exibeVet(vet);
    cout << endl;
    cout << "Exibindo os números em ordem inversa: " << endl;
    vetInverso(vet);
    cout << "\n----------------Ordenando o vetor----------------" << endl;
    ordenarVet(vet);

    // utilizando passagem por referência(ponteiros)
    cout << "\nUtilizando passagem por referência" << endl;
    cout << "\n----------------Ordenando o vetor----------------" << endl;
    ordenaVet(vet);
    cout << endl;
    cout << "Exibindo os números no vetor: " << endl;
    mostraVet(vet);
    

    return 0;
}

void recebeVet(int vetor[]) {
    for (int i = 0; i < tam; i++) {
        cout << "Informe o número " << i + 1 << ": ";
        cin >> vetor[i];
    }
}

void exibeVet(int vetor[]) {
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void vetInverso(int vetor[]) {
    for (int i = tam - 1; i >= 0; i--) {  
        cout << vetor[i] << " ";
    }
    cout << endl;
}
 void ordenarVet(int vetor[]){
    int aux = 0;
    
    for (int etapa = 0; etapa < tam - 1; etapa++){
         int troca = 0;
        for(int i=0; i< tam - 1; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                troca = 1;
            }
        }
        if(troca == 0){
            break;
        }
    }

    cout << "Exibindo os números no vetor: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << ", ";
    }
    cout << endl;
 }

// exemplo com ponteiros utilizando passagem por referência
void ordenaVet(int *vet){
    int aux = 0;
    bool troca;

    for (int j = 0; j < tam-j-1; j++)
    { 
        troca = false;
        for (int i = 0; i < tam - 1; i++)
        {
            if (vet[i] > vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                troca = true;
            }
        }
        if(!troca) break;
    } 
}

void mostraVet (int *vet){
    for (int i = 0; i < tam; i++)
    {
        cout << vet[i] << ", ";
    }
    cout << endl;
}
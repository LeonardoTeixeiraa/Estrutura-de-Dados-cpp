// A alocação dinâmica é usada para ter um melhor gerenciamento de memória
// é usada somente para alocar e desalocar vetores e matrizes pois não é viável utilizar para variáveis simples do tipo int, ou float, char etc.
// A alocação de memória ocorre em tempo de execução do programa e não em tempo de compilação como a alocação estática.

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int soma = 0, qtd;
    cout << "Informe o tamanho do vetor desejado: ";
    cin >> qtd;

    int *vetor = new (std::nothrow) int[qtd]; 

    if (!vetor) {
        cout << "Memória para alocação insuficiente" << endl;
    } else {
        for (int i = 0; i < qtd; i++) {
            cout << "Informe um valor: ";
            cin >> vetor[i];
            soma += vetor[i];
        }
        cout << "O valor da soma é: " << soma << endl;

        delete[] vetor;
    }

    // Alocação dinâmica para matriz
    cout << "Preencha a matriz" << endl;

    int **p, N = 2, M = 3;

    p = new int*[N]; 

    for (int i = 0; i < N; i++) {
        p[i] = new int[M]; 
        for (int j = 0; j < M; j++) { 
            cout << "Informe o valor para a posição [" << i << "][" << j << "]: ";
            cin >> p[i][j];
        }
    }

    cout << "Matriz informada:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++) { // Estamos desalocando as linhas da matriz
        delete[] p[i];
    }

    delete[] p;
    // alocação de uma única Struct
    // Ponteiro do tipo Struct receberá o new para alocar dinamicamente
    // para acessar o contéudo é necessário usar a seta(->) ou ponto final (.)

    cout << "-------Cadastro-------" << endl;

    struct Cadastro
    {
        int idade;
        string nome;
    };
    Cadastro *cad = new Cadastro;

    cad->nome = "Leonardo";
    cad->idade = 18;
    cout << cad->idade << endl;
    cout << cad->nome << endl;

    delete cad;

    // exemplo de alocação de um vetor de Structs

    
    struct CadastroP
    {
        string nome;
        string doc;
    };
    
    CadastroP *cad2 = new CadastroP[3]; //array de structs com 3 elementos. Cad2 aponta para a posição inicial
    CadastroP *inicio = cad2; // inicio receberá o endereço do inicio do array de structs

    for(int i=0; i<3; i++){
        cout << "Nome: "; 
        if(i == 0) cin.ignore();
        getline(cin, cad2->nome);
        cout << "Doc: "; 
        getline(cin, cad2 -> doc);
        cad2++;
        cout << endl;
    }
    cout << "Exibindo informações:\n";
    cad2 = inicio; // cad2 voltará a apontar para o início do array de structs 
    for(int i=0; i<3; i++){
        cout << i+1 << " Cadastro:\n"
             << cad2[i].nome << endl;
        cout << cad2[i].doc << endl;
        cout << endl;
    }
    delete[] cad2; // Libera a memória alocada

    return 0;
}
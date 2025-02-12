#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int a=5, b;
    int* ptr;
    ptr = &a;

    cout << "Exibindo valor do endereço de memória de a(ptr = &a): " << ptr << endl;
    cout << "Exibindo o valor da variavel (a) a partir do ptr: " << *ptr << endl;
    cout << endl;

    int i = 0;
    cout << i << ", ";
    int *ptr1= &i; // inicializando o ponteiro com o valor do endereço de memória de i;
    *ptr1 = 1; // atribuindo um valor para i a partir do do ptr1(ele aponta a variável)
    cout << i << ", ";
    i = 10; // sobrescrevendo o valor de i;
    cout << *ptr1 << endl; // valor do ptr1 muda ao mudar a variável i pois ele está apontando ela
    cout << endl;

    // outro exemplo de alteração de valores utilizando ponteiros, porém agora para alterar um char
    char v = 'I';
    cout << v;
    char *ptrv = &v;
    *ptrv= 'F';
    cout << v;
    // v = 'S'; // uma das formas de alterar o valor de v
    *ptrv = 'S';// outra maneira de alterar o valor de v
    cout << *ptrv << endl;

    // Outro exemplo de código
    int x=2, y=10;
    int *ptr3, *ptr4;
    ptr3 = &x;
    ptr4 = nullptr;
    cout << "Valor de ptr: "<< ptr3;
    cout << "\nValor de x: "<< *ptr3 ;
    cout << "\nValor de x: "<< x  << endl;
    ptr4 = &y;
    *ptr4 = 5;
    cout << "Exibindo os valores para y e prt" << endl;
    cout << y << endl; // mostra o valor de y
    cout << *ptr4 << endl; // o valor da variável que prt4 está apontando, no caso y
    cout << ptr4 << endl; // endereço de memória de y
    return 0;
}
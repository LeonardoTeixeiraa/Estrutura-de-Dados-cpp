// Faça um procedimento que receba informações para o cálculo da área e o comprimento
// de um retângulo. Neste procedimento não será exibido nenhuma informação e não terá nenhum
// retorno (void). Os valores relativos a área e ao comprimento do retângulo devem estar disponíveis na
// main. Siga o seguinte protótipo: void calculaRetangulo(ﬂoat a, ﬂoat b, ﬂoat *x, ﬂoat *y);

#include<iostream>
#include<cstdlib>

using namespace std;

void calculaRetangulo(float a, float b, float *x, float *Y);

int main(){
    float altura = 10, largura = 5, area, perimetro;

    calculaRetangulo(altura,largura, &area, &perimetro);

    cout<< "A area do retangulo e: " << area << endl;
    cout << "O perimetro do retangulo e: " << perimetro << endl;

    return 0;
}
void calculaRetangulo(float a, float b, float *x, float *y){
    *x = a * b;
    *y = 2 * (a + b);
}
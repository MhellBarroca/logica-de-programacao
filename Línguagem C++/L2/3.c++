// //3. Escreva uma função para receber a base e a altura de um triângulo. 
// Esta função deve calcular e imprimir a sua área usando a equação Area = (Base * Altura) / 2.
#include <iostream>
using namespace std;

void areaTriangulo(double base, double altura) {
    double area = (base * altura) / 2;
    cout << "A area do triangulo eh: " << area << endl;
}

int main() {
    double b, h;
    cout << "Digite a base do triangulo: ";
    cin >> b;

    cout << "Digite a altura do triangulo: ";
    cin >> h;

    areaTriangulo(b, h);

    return 0;
}

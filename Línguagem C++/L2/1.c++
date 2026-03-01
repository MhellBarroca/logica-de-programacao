//1. Escreva uma função para receber dois números inteiros e imprimir o produto desses valores.
#include <iostream>
using namespace std;

void produto(int num1, int num2) {
    int resultado = num1 * num2;
    cout << "O produto é: " << resultado << endl;
}

int main() {
    int a, b;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite o segundo numero: ";
    cin >> b;

    produto(a, b);

    return 0;
}
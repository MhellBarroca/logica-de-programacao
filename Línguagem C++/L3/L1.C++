// 1. Faça uma função para ler dois números inteiros e informar se o primeiro é maior, menor ou igual ao segundo.

#include <iostream>
using namespace std;

void compararNumeros(int a, int b) {
    if (a > b)
        cout << "O primeiro numero e maior." << endl;
    else if (a < b)
        cout << "O primeiro numero e menor." << endl;
    else
        cout << "Os numeros sao iguais." << endl;
}

int main() {
    int num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    compararNumeros(num1, num2);
    return 0;
}

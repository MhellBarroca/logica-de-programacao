//8. Escreva uma função que receba um número inteiro x e retorne quantos divisores positivos esse número possui.

#include <iostream>
using namespace std;

int divisores(int x) {
    int cont = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) cont++;
    }
    return cont;
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "Quantidade de divisores: " << divisores(num) << endl;
    return 0;
}

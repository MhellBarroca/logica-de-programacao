// 3. Faça uma função que receba como parâmetro um número inteiro e informe se ele é divisível por 2.

#include <iostream>
using namespace std;

void verificarDivisivel(int n) {
    if (n % 2 == 0)
        cout << n << " e divisivel por 2." << endl;
    else
        cout << n << " nao e divisivel por 2." << endl;
}

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    verificarDivisivel(numero);
    return 0;
}

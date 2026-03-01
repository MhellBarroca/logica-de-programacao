// 8. Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, 
// e imprima o resultado desta operação.

#include <iostream>
using namespace std;

void somarNumero(int n) {
    if (n % 2 == 0)
        cout << "Resultado: " << n + 5 << endl;
    else
        cout << "Resultado: " << n + 8 << endl;
}

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    somarNumero(numero);
    return 0;
}

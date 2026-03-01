// 2. Faça um algoritmo para ler dois números inteiros e fazer a divisão do primeiro pelo segundo (somente se o segundo for diferente de zero). 
// Imprima o resultado da operação ou uma mensagem indicando que a operação não foi realizada pois o segundo número era zero.

#include <iostream>
using namespace std;

void dividir(int a, int b) {
    if (b != 0)
        cout << "Resultado da divisao: " << (float)a / b << endl;
    else
        cout << "Operacao nao realizada: o segundo numero e zero." << endl;
}

int main() {
    int x, y;
    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;

    dividir(x, y);
    return 0;
}

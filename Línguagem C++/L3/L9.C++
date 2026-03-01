// 9. Através de uma função, crie uma calculadora usando a instrução SWITCH, 
// que pergunte qual das operações básicas quer fazer (+, -, * e /). 
// A função deve receber dois números inteiros e o símbolo da operação, retornando o resultado.

#include <iostream>
using namespace std;

float calculadora(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0) return (float)a / b;
            else {
                cout << "Nao e possivel dividir por zero!" << endl;
                return 0;
            }
        default:
            cout << "Operacao invalida!" << endl;
            return 0;
    }
}

int main() {
    int n1, n2;
    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite a operacao (+, -, *, /): ";
    cin >> operacao;

    float resultado = calculadora(n1, n2, operacao);
    cout << "Resultado: " << resultado << endl;

    return 0;
}

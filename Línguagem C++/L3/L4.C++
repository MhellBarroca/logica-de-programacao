// 4. Faça uma função para receber dois números reais e verificar se ambos são maiores que zero. 
// Caso positivo, informar "Valores são válidos". Caso contrário, informar "Valores inválidos".

#include <iostream>
using namespace std;

void verificarValores(float a, float b) {
    if (a > 0 && b > 0)
        cout << "Valores sao validos." << endl;
    else
        cout << "Valores invalidos." << endl;
}

int main() {
    float x, y;
    cout << "Digite o primeiro valor: ";
    cin >> x;
    cout << "Digite o segundo valor: ";
    cin >> y;

    verificarValores(x, y);
    return 0;
}

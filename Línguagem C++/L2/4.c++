// 4. Escreva uma função para receber a altura de um homem, calcular e imprimir o seu peso ideal com a 
// fórmula pesoIdeal = (72.7 * altura - 58).
#include <iostream>
using namespace std;

void pesoIdeal(double altura) {
    double peso = (72.7 * altura) - 58;
    cout << "O peso ideal é: " << peso << " kg" << endl;
}

int main() {
    double altura;
    cout << "Digite a altura do homem (em metros): ";
    cin >> altura;

    pesoIdeal(altura);

    return 0;
}

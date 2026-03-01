//6. A conversão de graus Fahrenheit para Celsius é obtida pela fórmula C = (F-32)/1.8.
// Desenvolva um algoritmo para calcular e imprimir uma tabela de graus Celsius em função de graus Fahrenheit que variem de 50 a 150 de 2 em 2.

#include <iostream>
using namespace std;

void tabelaTemp() {
    cout << "Fahrenheit\tCelsius\n";
    for (int F = 50; F <= 150; F += 2) {
        double C = (F - 32) / 1.8;
        cout << F << "\t\t" << C << endl;
    }
}

int main() {
    tabelaTemp();
    return 0;
}

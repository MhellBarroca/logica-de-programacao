// EX4
// Crie uma função que receba a velocidade de um veículo (em km/h) e calcule a multa de trânsito com base nas seguintes faixas: 
// ● Até 80 km/h: sem multa.
// ● De 81 a 100 km/h: multa de R$ 150. 
// ● De 101 a 120 km/h: multa de R$ 150 + R$ 5 por km/h acima de 100.
// ● Acima de 120 km/h: multa de R$ 250 + R$ 10 por km/h acima de 120. 
// A função deve exibir o valor da multa correspondente à velocidade informada.

#include <iostream>
using namespace std;

// Função que calcula o valor da multa
void calculaMulta(int velocidade) {
    float multa = 0;

    if (velocidade <= 80) {
        cout << "Sem multa.\n";
        return;
    } else if (velocidade <= 100) {
        multa = 150;
    } else if (velocidade <= 120) {
        multa = 150 + (velocidade - 100) * 5;
    } else {
        multa = 250 + (velocidade - 120) * 10;
    }

    cout << "Valor da multa: R$ " << multa << endl;
}

int main() {
    int vel;
    cout << "Digite a velocidade (km/h): ";
    cin >> vel;

    calculaMulta(vel);
    return 0;
}

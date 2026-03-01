//2. Escreva uma função para receber por parâmetro o raio de uma esfera e calcular o seu volume 
//através da fórmula V = (4 * PI * R3) /3.
#include <iostream>
#include <cmath> // biblioteca para usar pow e M_PI
using namespace std;

void volumeEsfera(double raio) {
    double volume = (4 * M_PI * pow(raio, 3)) / 3;
    cout << "O volume da esfera eh: " << volume << endl;
}

int main() {
    double r;
    cout << "Digite o raio da esfera: ";
    cin >> r;

    volumeEsfera(r);

    return 0;
}

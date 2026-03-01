//EX2
// Crie uma função que receba a velocidade de um veículo (em km/h) e classifique-a conforme a tabela abaixo: 
// ● "Muito lento" — abaixo de 40 km/h 
// ● "Velocidade moderada" — entre 40 km/h e 80 km/h 
// ● "Rápido" — entre 81 km/h e 120 km/h 
// ● "Muito rápido" — acima de 120 km/h A função deve exibir a classificação correspondente com base no valor informado.

#include <iostream>
using namespace std;

// Função que classifica a velocidade
void classificaVelocidade(int velocidade) {
    if (velocidade < 40)
        cout << "Muito lento\n";
    else if (velocidade <= 80)
        cout << "Velocidade moderada\n";
    else if (velocidade <= 120)
        cout << "Rapido\n";
    else
        cout << "Muito rapido\n";
}

int main() {
    int v;
    cout << "Digite a velocidade (km/h): ";
    cin >> v;

    classificaVelocidade(v);
    return 0;
}

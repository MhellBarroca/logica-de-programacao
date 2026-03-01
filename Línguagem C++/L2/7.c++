// 7. Escreva uma função para receber por parâmetro o tempo de duração de um experimento expresso em 
// segundos e imprimir esse mesmo tempo em horas, minutos e segundos.

#include <iostream>
using namespace std;

void converterTempo(int totalSegundos) {
    int horas = totalSegundos / 3600;
    int resto = totalSegundos % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    cout << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;
}

int main() {
    int segundos;
    cout << "Digite o tempo em segundos: ";
    cin >> segundos;

    converterTempo(segundos);

    return 0;
}

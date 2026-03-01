//2. Dada uma dívida de R$ 25.000,00 que cresce a juros de 1,5% ao mês e uma aplicação de R$ 2.000,00 com rendimento de 2,5% ao mês, escreva uma função para determinar o número de meses necessários para pagar a dívida utilizando esta aplicação.

#include <iostream>
using namespace std;

int mesesParaQuitar() {
    double divida = 25000, aplicacao = 2000;
    int meses = 0;

    while (aplicacao < divida) {
        divida *= 1.015;      // juros de 1,5%
        aplicacao *= 1.025;   // rendimento de 2,5%
        meses++;
    }
    return meses;
}

int main() {
    cout << "Meses para quitar a dívida: " << mesesParaQuitar() << endl;
    return 0;
}

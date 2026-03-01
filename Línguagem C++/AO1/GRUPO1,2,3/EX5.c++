// Uma companhia de energia elétrica cobra tarifas diferentes conforme o consumo mensal de energia (em kWh). As regras são as seguintes:
// ● Até 100 kWh: tarifa de R$ 0,50 por kWh.
// ● De 101 a 300 kWh: tarifa de R$ 0,70 por kWh.
// ● De 301 a 500 kWh: tarifa de R$ 0,90 por kWh.
// ● Acima de 500 kWh: tarifa de R$ 1,10 por kWh.
// Crie um programa que:
// 1. Leia o consumo mensal de energia.
// 2. Determine a tarifa aplicável (através de uma função).
// 3. Calcule e exiba o valor total da conta (através de outra função).

#include <iostream>
using namespace std;

// Função que retorna a tarifa por kWh, de acordo com o consumo
float descobrirTarifa(float consumo) {
    float tarifa;

    if (consumo <= 100) {
        tarifa = 0.50;
    }
    else if (consumo <= 300) {
        tarifa = 0.70;
    }
    else if (consumo <= 500) {
        tarifa = 0.90;
    }
    else {
        tarifa = 1.10;
    }

    return tarifa; // devolve o valor da tarifa
}

// Função que calcula o total a pagar
float calcularConta(float consumo, float tarifa) {
    float total = consumo * tarifa;
    return total;
}

int main() {
    float consumo, tarifa, total;

    cout << "Digite o consumo mensal de energia (em kWh): ";
    cin >> consumo;

    // Chama a função para descobrir a tarifa correta
    tarifa = descobrirTarifa(consumo);

    // Chama a função para calcular o valor total da conta
    total = calcularConta(consumo, tarifa);

    cout << "Tarifa aplicada: R$ " << tarifa << " por kWh" << endl;
    cout << "Valor total da conta: R$ " << total << endl;

    return 0;
}

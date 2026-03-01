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
#include <iomanip> // Necessário para exibir o resultado com duas casas decimais (R$ 0.00)

int main() {
    // 1. Variáveis necessárias
    
    int consumo;
    float tarifa = 0.0;
    float valor_total = 0.0;

    // --- Passo 1: Leitura do Consumo ---
    std::cout << "--- Calculadora de Conta de Energia ---" << std::endl;
    std::cout << "Informe o consumo mensal em kWh: ";
    std::cin >> consumo;

    // --- Passo 2: Determinar a Tarifa Aplicável (IF/ELSE IF) ---
    // A lógica de determinação da tarifa é feita diretamente aqui.
    if (consumo <= 100) {
        tarifa = 0.50;
    }
    else if (consumo <= 300) {
        tarifa = 0.70;
    }
    else if (consumo <= 500) {
        tarifa = 0.90;
    }
    else { // Acima de 500 kWh
        tarifa = 1.10;
    }

    // --- Passo 3: Calcular e Exibir o Valor Total ---
    // O cálculo é feito diretamente.
    valor_total = consumo * tarifa;

    // Formatação da saída para exibir valores monetários (Ex: 0.50, 50.00)
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\n-------------------------------------" << std::endl;
    std::cout << "Consumo Registrado: " << consumo << " kWh" << std::endl;
    std::cout << "Tarifa Aplicada:    R$ " << tarifa << " por kWh" << std::endl;
    std::cout << "VALOR TOTAL DA CONTA: R$ " << valor_total << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    return 0;
}


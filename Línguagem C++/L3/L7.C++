// 7. Os funcionários de uma empresa receberam um aumento de salário: técnicos (código = 1), 50%; 
// gerentes (código = 2), 30%; demais funcionários (código = 3), 20%. 
// Escreva uma função para ler o código do cargo e o salário atual. Após a leitura, calcule e imprima o novo salário.

#include <iostream>
using namespace std;

void reajusteSalario(int codigo, float salario) {
    float novoSalario;

    if (codigo == 1)
        novoSalario = salario * 1.5;
    else if (codigo == 2)
        novoSalario = salario * 1.3;
    else if (codigo == 3)
        novoSalario = salario * 1.2;
    else {
        cout << "Codigo invalido!" << endl;
        return;
    }

    cout << "Novo salario: " << novoSalario << endl;
}

int main() {
    int cod;
    float sal;
    cout << "Digite o codigo do cargo (1-tecnico, 2-gerente, 3-outros): ";
    cin >> cod;
    cout << "Digite o salario atual: ";
    cin >> sal;

    reajusteSalario(cod, sal);
    return 0;
}

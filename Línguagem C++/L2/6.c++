// 6. Escreva uma função para receber a idade de uma pessoa em anos, meses e dias e retornar essa idade 
// expressa em dias. Considere que cada ano possui 365 dias e cada mês possui 30 dias. 
// Imprima o resultado na função principal.

#include <iostream>
using namespace std;

int idadeEmDias(int anos, int meses, int dias) {
    int total = (anos * 365) + (meses * 30) + dias;
    return total;
}

int main() {
    int anos, meses, dias;

    cout << "Digite sua idade (anos): ";
    cin >> anos;
    cout << "Digite os meses: ";
    cin >> meses;
    cout << "Digite os dias: ";
    cin >> dias;

    int total = idadeEmDias(anos, meses, dias);

    cout << "Sua idade em dias é: " << total << endl;

    return 0;
}

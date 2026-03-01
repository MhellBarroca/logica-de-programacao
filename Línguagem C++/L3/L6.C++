// 6. Faça uma função que recebe o número do dia da semana e imprima o seu respectivo nome por extenso. 
// Considerar o número 1 como domingo, 2 para segunda etc. Caso o dia não exista, exibir "Dia da semana inválido".

#include <iostream>
using namespace std;

void diaSemana(int dia) {
    switch(dia) {
        case 1: cout << "Domingo"; break;
        case 2: cout << "Segunda-feira"; break;
        case 3: cout << "Terca-feira"; break;
        case 4: cout << "Quarta-feira"; break;
        case 5: cout << "Quinta-feira"; break;
        case 6: cout << "Sexta-feira"; break;
        case 7: cout << "Sabado"; break;
        default: cout << "Dia da semana invalido";
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Digite o numero do dia da semana (1 a 7): ";
    cin >> numero;

    diaSemana(numero);
    return 0;
}

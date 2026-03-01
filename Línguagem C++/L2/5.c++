// 5. Escreva uma função para receber as três notas de um aluno e imprimir a média ponderada.
//  Considere como peso das notas os seguintes valores: 2, 3, 5.

#include <iostream>
using namespace std;

void mediaPonderada(double n1, double n2, double n3) {
    double media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    cout << "A media ponderada eh: " << media << endl;
}

int main() {
    double nota1, nota2, nota3;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    mediaPonderada(nota1, nota2, nota3);

    return 0;
}

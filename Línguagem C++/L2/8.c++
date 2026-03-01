// 8. Escreva uma função que receba 3 notas e seus respectivos pesos. 
// A função deve retornar a média ponderada das três notas enviadas

#include <iostream>
using namespace std;

double mediaComPesos(double n1, double p1, double n2, double p2, double n3, double p3) {
    double media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    return media;
}

int main() {
    double n1, n2, n3, p1, p2, p3;

    cout << "Digite a primeira nota e seu peso: ";
    cin >> n1 >> p1;
    cout << "Digite a segunda nota e seu peso: ";
    cin >> n2 >> p2;
    cout << "Digite a terceira nota e seu peso: ";
    cin >> n3 >> p3;

    double media = mediaComPesos(n1, p1, n2, p2, n3, p3);

    cout << "A media ponderada é: " << media << endl;

    return 0;
}

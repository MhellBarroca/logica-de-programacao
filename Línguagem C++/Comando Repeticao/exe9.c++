//9. Escreva uma função que leia os valores n1, n2 e x, e imprima os múltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente.

#include <iostream>
using namespace std;

void multiplos(int n1, int n2, int x) {
    if (n1 > n2) swap(n1, n2);
    for (int i = n1; i <= n2; i++) {
        if (i % x == 0) cout << i << " ";
    }
}

int main() {
    int n1, n2, x;
    cout << "Digite n1, n2 e x: ";
    cin >> n1 >> n2 >> x;
    multiplos(n1, n2, x);
    return 0;
}

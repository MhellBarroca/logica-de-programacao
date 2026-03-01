//3. Desenvolva uma função para imprimir todos os números ímpares no intervalo n1 a n2, passados como parâmetro.

#include <iostream>
using namespace std;

void impares(int n1, int n2) {
    for (int i = n1; i <= n2; i++) {
        if (i % 2 != 0) cout << i << " ";
    }
}

int main() {
    int a, b;
    cout << "Digite n1 e n2: ";
    cin >> a >> b;
    impares(a, b);
    return 0;
}

//7. Elabore uma função para calcular N! (fatorial de N). O valor inteiro N será fornecido pelo usuário. Considere, por definição, que: 
//N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1 0! = 1,

#include <iostream>
using namespace std;

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout << n << "! = " << fatorial(n) << endl;
    return 0;
}

//1. Escreva uma função que calcule e retorne o resultado de S. S =1+1/2 +1/3 + 1/4 + ... + 1/200

#include <iostream>
using namespace std;

double somaSerie() {
    double S = 0;
    for (int i = 1; i <= 200; i++) {
        S += 1.0 / i;
    }
    return S;
}

int main() {
    cout << "S = " << somaSerie() << endl;
    return 0;
}

//5. Escreva um algoritmo que leia um vetor de reais com 15 posições. Após a leitura, faça um algoritmo que encontre
// o maior valor do vetor e imprima este valor e sua posição (índice).

#include <iostream>
using namespace std;

int main() {
    float v[15];
    int posMaior = 0;

    for(int i = 0; i < 15; i++) {
        cout << "Valor " << i << ": ";
        cin >> v[i];
    }

    for(int i = 1; i < 15; i++) {
        if(v[i] > v[posMaior])
            posMaior = i;
    }

    cout << "Maior valor: " << v[posMaior] << endl;
    cout << "Posicao: " << posMaior << endl;

    return 0;
}

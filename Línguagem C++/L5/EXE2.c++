//2. Faça uma função que receba um vetor de números inteiros, seu tamanho e um escalar. 
//A função deve efetuar a multiplicação deste vetor pelo escalar. Imprima o vetor 
//modificado em outra função. 


#include <iostream>
using namespace std;

void multiplica(int v[], int tam, int escalar) {
    for(int i = 0; i < tam; i++) {
        v[i] = v[i] * escalar;
    }
}

void imprime(int v[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[5];
    int esc;

    for(int i = 0; i < 5; i++) {
        cout << "Valor " << i << ": ";
        cin >> v[i];
    }

    cout << "Digite o escalar: ";
    cin >> esc;

    multiplica(v, 5, esc);

    cout << "Vetor multiplicado: ";
    imprime(v, 5);

    return 0;
}

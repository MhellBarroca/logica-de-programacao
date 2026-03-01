//6. Modifique o exercício anterior para que o vetor e seu tamanho sejam recebidos por uma
//função. Esta função deve encontrar o menor valor do vetor e  imprimir este valor e sua posição (índice).

#include <iostream>
using namespace std;

void menorValor(float v[], int tam) {
    int posMenor = 0;

    for(int i = 1; i < tam; i++) {
        if(v[i] < v[posMenor])
            posMenor = i;
    }

    cout << "Menor valor: " << v[posMenor] << endl;
    cout << "Posicao: " << posMenor << endl;
}

int main() {
    float v[15];

    for(int i = 0; i < 15; i++) {
        cout << "Valor " << i << ": ";
        cin >> v[i];
    }

    menorValor(v, 15);

    return 0;
}

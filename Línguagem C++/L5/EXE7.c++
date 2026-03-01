//7. Faça uma função para receber um vetor de números inteiros, seu tamanho e um valor 
//a ser procurado neste vetor. A função deve retornar o número de ocorrências deste valor no vetor.

#include <iostream>
using namespace std;

int contaOcorrencias(int v[], int tam, int valor) {
    int cont = 0;
    for(int i = 0; i < tam; i++)
        if(v[i] == valor)
            cont++;
    return cont;
}

int main() {
    int v[10];
    int x;

    for(int i = 0; i < 10; i++) {
        cout << "Valor " << i << ": ";
        cin >> v[i];
    }

    cout << "Digite o valor a procurar: ";
    cin >> x;

    cout << "Ocorrencias: " << contaOcorrencias(v, 10, x) << endl;

    return 0;
}

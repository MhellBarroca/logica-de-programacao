//1. Faça um algoritmo para ler um vetor de números inteiros de tamanho 10 e imprimir a 
//média aritmética dos elementos deste vetor. 


#include <iostream>
using namespace std;

int main() {
    int v[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        cout << "Digite o valor " << i << ": ";
        cin >> v[i];
        soma += v[i];
    }

    float media = soma / 10.0;
    cout << "Media = " << media << endl;

    return 0;
}

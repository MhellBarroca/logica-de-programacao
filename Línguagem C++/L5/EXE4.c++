//4. Escreva uma função que receba 3 vetores de números reais e um inteiro que representará
// o tamanho dos vetores (tamanho é o mesmo para os 3 vetores). A função deve subtrair os 
//valores dos dois primeiros vetores (primeiro menos o segundo)
// e armazenar o resultado no terceiro vetor. Imprima o terceiro vetor em outra função.

#include <iostream>
using namespace std;

void subtrai(float v1[], float v2[], float v3[], int tam) {
    for(int i = 0; i < tam; i++) {
        v3[i] = v1[i] - v2[i];
    }
}

void imprime(float v[], int tam) {
    for(int i = 0; i < tam; i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    float a[5], b[5], c[5];
    
    for(int i = 0; i < 5; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << "B[" << i << "]: ";
        cin >> b[i];
    }

    subtrai(a, b, c, 5);

    cout << "Resultado (A - B): ";
    imprime(c, 5);

    return 0;
}

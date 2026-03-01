// 4. Escreva uma função que receba uma string e imprima, na própria função, se a mesma é ou 
// não um palíndromo. Uma palavra é dita ser palíndromo se a sequência de seus caracteres da
// esquerda para a direita é igual a sequência de seus caracteres da direita para a esquerda 
// (Ex.: arara, asa). 

#include <iostream>
using namespace std;

void palindromo(char s[]) {
    int i = 0, f = 0;

    while (s[f] != '\0') {
        f++;
    }
    f--;

    while (i < f) {
        if (s[i] != s[f]) {
            cout << "Nao eh palindromo";
            return;
        }
        i++;
        f--;
    }

    cout << "Eh palindromo";
}

int main() {
    char texto[100];

    cout << "Digite uma string: ";
    cin.getline(texto, 100);

    palindromo(texto);

    return 0;
}

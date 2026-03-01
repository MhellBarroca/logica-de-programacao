// 1. Faça uma função que receba uma string como parâmetro e retorne o número de vogais
//  minúsculas desta string. 

#include <iostream>
using namespace std;

int contarVogais(char s[]) {
    int cont = 0;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            cont++;
        }
        i++;
    }

    return cont;
}

int main() {
    char texto[100];

    cout << "Digite uma string: ";
    cin.getline(texto, 100);

    cout << contarVogais(texto);

    return 0;
}

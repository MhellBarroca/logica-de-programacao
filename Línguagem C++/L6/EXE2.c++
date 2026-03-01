// 2. Escreva uma função que receba uma string e a modifique convertendo todos os caracteres 
// para minúsculos. A string deve ser impressa na função principal. Exemplo: String:   
// TESTE dA funçãO Impressão: teste da função 

#include <iostream>
using namespace std;

void minusculas(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }
}

int main() {
    char texto[100];

    cout << "Digite uma string: ";
    cin.getline(texto, 100);

    minusculas(texto);

    cout << texto;

    return 0;
}

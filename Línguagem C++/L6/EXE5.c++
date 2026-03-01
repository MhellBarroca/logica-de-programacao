// 5. Faça uma função para receber uma string e dois outros caracteres. A função deve 
// substituir todas as ocorrências do primeiro caractere pelo segundo. Imprima a string
//  modificada na função principal. Exemplo: 
//  Parâmetros da função:  "teste da tarefa", 't', 'z' String modificada: zesze da zarefa

#include <iostream>
using namespace std;

void substituir(char s[], char antigo, char novoC) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == antigo) {
            s[i] = novoC;
        }
        i++;
    }
}

int main() {
    char texto[100];
    char a, b;

    cout << "Digite uma string: ";
    cin.getline(texto, 100);

    cout << "Caractere antigo: ";
    cin >> a;

    cout << "Caractere novo: ";
    cin >> b;

    substituir(texto, a, b);

    cout << texto;

    return 0;
}

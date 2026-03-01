// 7. Faça um algoritmo para ler uma string e transferir as consoantes para um segundo 
// vetor. Ao final, imprima o vetor de consoantes na função principal. 


#include <iostream>
using namespace std;

int contarPalavras(char s[]) {
    int i = 0, cont = 0;
    bool dentro = false;

    while (s[i] != '\0') {

        if (s[i] != ' ' && dentro == false) {
            cont++;
            dentro = true;
        }

        if (s[i] == ' ') {
            dentro = false;
        }

        i++;
    }

    return cont;
}

int main() {
    char texto[200];

    cout << "Digite uma frase: ";
    cin.getline(texto, 200);

    cout << contarPalavras(texto);

    return 0;
}

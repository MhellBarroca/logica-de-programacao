// 10. Crie uma função que exiba um menu na tela e que permita ao usuário a escolha de uma opção. 
// Imprima uma mensagem informando qual foi a opção escolhida.

#include <iostream>
using namespace std;

void mostrarMenu(int opcao) {
    switch(opcao) {
        case 1: cout << "Voce escolheu: Gravar"; break;
        case 2: cout << "Voce escolheu: Carregar"; break;
        case 3: cout << "Voce escolheu: Apagar"; break;
        case 4: cout << "Voce escolheu: Inserir"; break;
        case 5: cout << "Voce escolheu: Fim"; break;
        default: cout << "Opcao invalida";
    }
    cout << endl;
}

int main() {
    int escolha;
    cout << "Menu:" << endl;
    cout << "1 - Gravar" << endl;
    cout << "2 - Carregar" << endl;
    cout << "3 - Apagar" << endl;
    cout << "4 - Inserir" << endl;
    cout << "5 - Fim" << endl;
    cout << "Escolha uma opcao: ";
    cin >> escolha;

    mostrarMenu(escolha);
    return 0;
}

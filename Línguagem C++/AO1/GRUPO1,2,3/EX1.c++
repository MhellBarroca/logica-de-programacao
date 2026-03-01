//EX1
// Crie uma função que receba a idade de uma pessoa e determine a quais cargos políticos ela pode concorrer no Brasil.
//  As regras são as seguintes: 
// ● Para ser vereador, a idade mínima é 18 anos. 
// ● Para ser prefeito, a idade mínima é 21 anos. 
// ● Para ser deputado federal ou estadual, a idade mínima é 21 anos. 
// ● Para ser senador, a idade mínima é 35 anos.
// ● Para ser presidente ou vice-presidente, a idade mínima é 35 anos. 
// A função deve imprimir uma mensagem indicando a quais cargos a pessoa pode concorrer, de acordo com sua idade. 

#include <iostream>
using namespace std;

// Função que mostra quais cargos a pessoa pode concorrer
void verificaCargos(int idade) {
    cout << "Com " << idade << " anos, voce pode concorrer a:\n";

    if (idade >= 18)
        cout << "- Vereador\n";
    if (idade >= 21)
        cout << "- Prefeito\n- Deputado Federal ou Estadual\n";
    if (idade >= 35)
        cout << "- Senador\n- Presidente ou Vice-Presidente\n";

    if (idade < 18)
        cout << "Nenhum cargo. A idade minima e 18 anos.\n";
}

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    verificaCargos(idade);
    return 0;
}

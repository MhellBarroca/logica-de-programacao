//9. Escreva uma função que receba o preço da gasolina e retorne o valor ideal do álcool. 
//Considere que o valor ideal é 70% do valor da gasolina.

#include <iostream>
using namespace std;

double valorIdealAlcool(double precoGasolina) {
    return precoGasolina * 0.7;
}

int main() {
    double gasolina;
    cout << "Digite o preco da gasolina: R$ ";
    cin >> gasolina;

    double alcool = valorIdealAlcool(gasolina);

    cout << "O valor ideal do alcool é: R$ " << alcool << endl;

    return 0;
}

// 5. Tendo como dados de entrada a altura (em metros) e o sexo de uma pessoa ('m' para masculino e 'f' para feminino),
// faça uma função para calcular e retornar seu peso ideal, utilizando a fórmula:
// peso = (72.7*altura)-58 para homens e peso = (62.1*altura)-44.7 para mulheres.

#include <iostream>
using namespace std;

float pesoIdeal(float altura, char sexo) {
    if (sexo == 'm' || sexo == 'M')
        return (72.7 * altura) - 58;
    else if (sexo == 'f' || sexo == 'F')
        return (62.1 * altura) - 44.7;
    else
        return 0;
}

int main() {
    float altura;
    char sexo;
    cout << "Digite sua altura (em metros): ";
    cin >> altura;
    cout << "Digite seu sexo (m/f): ";
    cin >> sexo;

    float peso = pesoIdeal(altura, sexo);
    if (peso == 0)
        cout << "Sexo invalido!" << endl;
    else
        cout << "Seu peso ideal e: " << peso << " kg" << endl;

    return 0;
}

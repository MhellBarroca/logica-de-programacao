// EX3
// Crie uma função que receba três notas de um aluno (n1, n2 e n3) e determine:
//  1. Se as notas são válidas (todas devem estar entre 0 e 10). 
//  2. Se forem válidas, calcule a média e classifique o desempenho do aluno como: ○ Excelente: média maior ou igual a 9.
//  ○ Bom: média entre 7 e 8,9. ○ Regular: média entre 5 e 6,9. ○ Insuficiente: média abaixo de 5. 
//  A função deve exibir mensagens informando se as notas são válidas e, se forem, a classificação do aluno.    

#include <iostream>
using namespace std;

// Função que calcula a média e classifica o aluno
void classificaAluno(float n1, float n2, float n3) {
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
        cout << "Notas invalidas! As notas devem estar entre 0 e 10.\n";
        return; // encerra a função
    }

    float media = (n1 + n2 + n3) / 3;
    cout << "Media: " << media << endl;

    if (media >= 9)
        cout << "Desempenho: Excelente\n";
    else if (media >= 7)
        cout << "Desempenho: Bom\n";
    else if (media >= 5)
        cout << "Desempenho: Regular\n";
    else
        cout << "Desempenho: Insuficiente\n";
}

int main() {
    float n1, n2, n3;
    cout << "Digite as tres notas: ";
    cin >> n1 >> n2 >> n3;

    classificaAluno(n1, n2, n3);
    return 0;
}

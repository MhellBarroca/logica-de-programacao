// 6. Desenvolva um algoritmo para criar e imprimir uma string que será a concatenação de 
// duas outras strings anteriormente lidas. O algoritmo de concatenação deve ser 
// integralmente implementado (não utilize funções externas). 

#include <iostream>
using namespace std;

void concatenar(char s1[], char s2[], char r[]) {
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        r[j] = s1[i];
        i++;
        j++;
    }

    i = 0;

    while (s2[i] != '\0') {
        r[j] = s2[i];
        i++;
        j++;
    }

    r[j] = '\0';
}

int main() {
    char s1[100], s2[100], r[200];

    cout << "Primeira string: ";
    cin.getline(s1, 100);

    cout << "Segunda string: ";
    cin.getline(s2, 100);

    concatenar(s1, s2, r);

    cout << r;

    return 0;
}

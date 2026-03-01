// 3. Crie uma função que receba uma string e a imprima na ordem inversa. 

#include <iostream>
using namespace std;

void inverso(char s[]) {
    int t = 0;

    while (s[t] != '\0') {
        t++;
    }

    for (int i = t - 1; i >= 0; i--) {
        cout << s[i];
    }
}

int main() {
    char texto[100];

    cout << "Digite uma string: ";
    cin.getline(texto, 100);

    inverso(texto);

    return 0;
}

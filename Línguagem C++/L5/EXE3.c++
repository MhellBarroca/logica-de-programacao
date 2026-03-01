//3. Dada uma tabela contendo a idade de 10 alunos, faça uma função que retorne o número 
//de alunos com idade inferior a média. A função receberá o vetor e seu tamanho.

#include <iostream>
using namespace std;

int menoresQueMedia(int v[], int tam) {
    int soma = 0;
    for(int i = 0; i < tam; i++)
        soma += v[i];

    float media = soma / (float)tam;

    int cont = 0;
    for(int i = 0; i < tam; i++)
        if(v[i] < media)
            cont++;

    return cont;
}

int main() {
    int idades[10];

    for(int i = 0; i < 10; i++) {
        cout << "Idade " << i << ": ";
        cin >> idades[i];
    }

    cout << "Alunos com idade menor que a media: "
         << menoresQueMedia(idades, 10) << endl;

    return 0;
}

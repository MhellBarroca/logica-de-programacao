//5. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,40 metro e cresce 
//3 centímetros por ano. Construa um algoritmo para calcular e imprimir quantos anos serão 
//necessários para que Zé seja maior que Chico.


#include <iostream>
using namespace std;

int anos() {
    double chico = 1.50, ze = 1.40;
    int anos = 0;
    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }
    return anos;
}

int main() {
    cout << "Anos para Zé ser maior que Chico: " << anos() << endl;
    return 0;
}

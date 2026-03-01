#include <iostream>
#include <cmath> // para usar o pow e M_PI
using namespace std;

// 1. Função que recebe dois números inteiros e mostra o produto
void produto(int a, int b) {
    int resultado = a * b;
    cout << "O produto de " << a << " e " << b << " é: " << resultado << "\n";
}

// 2. Função que recebe o raio de uma esfera e calcula o volume
void volumeEsfera(double raio) {
    double volume = (4 * M_PI * pow(raio, 3)) / 3;
    cout << "O volume da esfera é: " << volume << "\n";
}

// 3. Função que calcula a área de um triângulo
void areaTriangulo(double base, double altura) {
    double area = (base * altura) / 2;
    cout << "A área do triângulo é: " << area << "\n";
}

// 4. Função que calcula o peso ideal de um homem
void pesoIdeal(double altura) {
    double peso = (72.7 * altura) - 58;
    cout << "O peso ideal é: " << peso << " kg\n";
}

// 5. Função que calcula a média ponderada (pesos 2, 3 e 5)
void mediaPonderada(double n1, double n2, double n3) {
    double media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    cout << "A média ponderada é: " << media << "\n";
}

// 6. Função que converte idade em anos, meses e dias para dias
int idadeEmDias(int anos, int meses, int dias) {
    int total = (anos * 365) + (meses * 30) + dias;
    return total;
}

// 7. Função que converte segundos em horas, minutos e segundos
void converterTempo(int totalSegundos) {
    int horas = totalSegundos / 3600;
    int resto = totalSegundos % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    cout << horas << " horas, " << minutos << " minutos e " << segundos << " segundos.\n";
}

// 8. Função que calcula média ponderada de 3 notas com pesos variáveis
double mediaComPesos(double n1, double p1, double n2, double p2, double n3, double p3) {
    double media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    return media;
}

// 9. Função que recebe o preço da gasolina e retorna o valor ideal do álcool
double valorIdealAlcool(double precoGasolina) {
    return precoGasolina * 0.7;
}

// Função principal
int main() {
    cout << "=== Testando as funções ===\n";

    // 1
    produto(3, 4);

    // 2
    volumeEsfera(2);

    // 3
    areaTriangulo(5, 3);

    // 4
    pesoIdeal(1.75);

    // 5
    mediaPonderada(7, 8, 9);

    // 6
    int dias = idadeEmDias(20, 6, 15);
    cout << "Idade em dias: " << dias << "\n";

    // 7
    converterTempo(3675);

    // 8
    double media = mediaComPesos(8, 2, 7, 3, 10, 5);
    cout << "Média ponderada (com pesos variáveis): " << media << "\n";

    // 9
    double alcool = valorIdealAlcool(5.00);
    cout << "Valor ideal do álcool: R$ " << alcool << "\n";

    return 0;
}

//46. Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.

#include <stdio.h>

int main() {
    int i = 6;
    int soma = 0;

    while (i <= 100) {
        soma += i;
        i += 2;
    }

    printf("A soma dos numeros de 6 ate 100 (pares) e: %d\n", soma);

    return 0;
}

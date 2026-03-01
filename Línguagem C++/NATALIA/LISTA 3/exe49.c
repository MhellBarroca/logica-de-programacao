//49. Crie um programa que leia 6 números inteiros e no final mostre quantos deles são pares e quantos são ímpares.

#include <stdio.h>

int main() {
    int num;
    int contador = 1;
    int pares = 0, impares = 0;

    while (contador <= 6) {
        printf("Digite o %d numero inteiro: ", contador);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        contador++;
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}

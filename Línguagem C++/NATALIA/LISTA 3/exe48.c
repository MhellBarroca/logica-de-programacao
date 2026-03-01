//48. Faça um programa que leia 7 números inteiros e no final mostre o somatório entre eles.

#include <stdio.h>

int main() {
    int num, soma = 0;
    int contador = 1;

    while (contador <= 7) {
        printf("Digite o %dº número inteiro: ", contador);
        scanf("%d", &num);
        soma += num;
        contador++; // aumenta o contador a cada leitura
    }

    printf("\nO somatório entre os números é: %d\n", soma);

    return 0;
}

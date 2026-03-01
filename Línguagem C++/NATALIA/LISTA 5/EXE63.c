// 63. Crie um programa usando a estrutura “faça enquanto” que leia vários números. A
// cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na tela:
// a) O somatório entre todos os valores
// b) Qual foi o menor valor digitado
// c) A média entre todos os valores
// d) Quantos valores são pares

#include <stdio.h>

int main() {
    int num, soma = 0, menor, contador = 0, pares = 0;
    char continuar;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        soma += num;
        contador++;

        if (contador == 1 || num < menor) {
            menor = num;
        }

        if (num % 2 == 0) {
            pares++;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("\nSomatório dos valores: %d\n", soma);
    printf("Menor valor digitado: %d\n", menor);
    printf("Média dos valores: %.2f\n", (float)soma / contador);
    printf("Quantidade de números pares: %d\n", pares);

    return 0;
}

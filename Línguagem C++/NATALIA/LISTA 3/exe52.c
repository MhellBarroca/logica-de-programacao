// 52. Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
// a) Qual é a média de idade do grupo
// b) Quantas pessoas tem mais de 18 anos
// c) Quantas pessoas tem menos de 5 anos
// d) Qual foi a maior idade lida


#include <stdio.h>

int main() {
    int i = 0;
    int idade;
    int soma = 0;
    int mais18 = 0;
    int menos5 = 0;
    int maior = 0;

    while (i < 10) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade);

        soma += idade;          // somando para média
        if (idade > 18) mais18++;  // conta pessoas maiores de 18
        if (idade < 5) menos5++;   // conta pessoas menores de 5
        if (idade > maior) maior = idade;  // guarda a maior idade

        i++;
    }

    printf("\nMedia de idade: %.1f\n", (float)soma / 10);
    printf("Pessoas maiores de 18 anos: %d\n", mais18);
    printf("Pessoas menores de 5 anos: %d\n", menos5);
    printf("Maior idade lida: %d\n", maior);

    return 0;
}

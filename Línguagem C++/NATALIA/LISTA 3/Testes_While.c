// Repetição com teste no início
// •	Uso de acumulador
// •	Desenvolva um algoritmo que leia uma sequência de números inteiros, calcule e imprima a soma dos valores lidos. A sequência deve terminar quando o número 0 (zero) for lido.
// •	Soma
// → o valor da variável começa com zero (elemento neutro da adição) ;
// → a cada iteração, conserva o valor anterior com acréscimo de um novo
// valor;
// → ao final de cada iteração, o valor da variável contém a soma parcial dos
// elementos ;
// → ao final do laço, o valor da variável contém a soma de todos os elementos

#include <stdio.h>

int main()
{
    int num, soma;
    soma = 0; // inicializa acumulador

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0)
    {
        soma = soma + num; // atualiza acumulador
        printf("\nSoma parcial: %d", soma);

        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
    }

    printf("\nSoma total: %d", soma);
    return 0;
}

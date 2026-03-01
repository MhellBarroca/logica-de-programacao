// Repetição com teste no início

// • Uso de contador
// • Desenvolva um algoritmo que leia uma sequência de números
// inteiros e imprima a quantidade de valores lidos. A sequência deve
// terminar quando o número 0(zero) for lido.
// • Contador
// → o valor da variável começa com zero;
// → após ler e testar cada novo valor da sequência, a variável é
// incrementada (aumenta em uma unidade);
// → ao final do laço, o valor da variável contém o número de elementos.

#include <stdio.h>

int main()
{
    int num, cont;
    cont = 0; // inicializa o contador

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while(num != 0)
    {
        cont++; // atualiza contador
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
    }

    printf("\nNumero de elementos: %d\n", cont);

    return 0;
}

// 50. Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e mostre na
// tela:
// a) Quais foram os números sorteados
// b) Quantos números estão acima de 5
// c) Quantos números são divisíveis por 3

#include <stdio.h>   // biblioteca para printf
#include <stdlib.h>  // biblioteca para rand() e srand()
#include <time.h>    // biblioteca para time()

int main() {
    int i = 0;          // contador do while
    int n;              // número sorteado
    int acima5 = 0;     // conta quantos são maiores que 5
    int div3 = 0;       // conta quantos são divisíveis por 3

    srand(time(NULL));  // faz o sorteio ser diferente toda vez

    while (i < 20) {            // repete 20 vezes
        n = rand() % 11;        // sorteia um número de 0 a 10
        printf("%d ", n);       // mostra o número sorteado

        if (n > 5)              // se for maior que 5
            acima5++;           // soma +1 no contador

        if (n % 3 == 0)         // se for divisível por 3 (resto 0)
            div3++;             // soma +1 no contador

        i++;                    // aumenta o contador (pra ir pro próximo)
    }

    // mostra os resultados finais
    printf("\nAcima de 5: %d", acima5);
    printf("\nDivisiveis por 3: %d\n", div3);

    return 0; // fim do programa
}

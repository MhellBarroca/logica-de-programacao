//43. Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1, marcando os números que forem divisíveis por 4, 
// exatamente como mostrado abaixo: 30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...

#include <stdio.h>

int main() {
    int i = 30;

    while(i >= 1) {
        if (i % 4 == 0) {
            printf("[%d] ", i); // marca números divisíveis por 4
        } else {
            printf("%d -", i);
        }
        i--; // decrementa i sempre
    }

    printf("\nAcabou!\n");

    return 0;
}

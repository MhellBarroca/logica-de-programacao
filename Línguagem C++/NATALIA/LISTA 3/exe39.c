//39. Faça um algoritmo que mostre na tela a seguinte contagem: 10 9 8 7 6 5 4 3 Acabou!


#include <stdio.h>

int main() {
    int i = 10; // começamos em 10

    // Contagem regressiva de 10 até 3 usando while
    while(i >= 3) {
        printf("%d -", i);
        i--; // decrementa o valor de i
    }

    // Mensagem final
    printf("Acabou!\n");

    return 0;
}

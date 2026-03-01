//38. Escreva um programa que mostre na tela a seguinte contagem: 6 7 8 9 10 11 Acabou!

#include <stdio.h>

int main() {
    int i = 6; // inicializa em 6

    while (i <= 11) { // continua enquanto i for menor ou igual a 11
        printf("%d - ", i);
        i++; // incrementa de 1 em 1
    }

    printf("Acabou!\n");

    return 0;
}

//41. Desenvolva um programa que mostre na tela a seguinte contagem: 100 95 90 85 80 ... 0 Acabou!

#include <stdio.h>

int main() {
    int i = 100;

    while (i >= 0) {  // enquanto i for maior ou igual a 0
        printf("%d -", i);
        i -= 5;  // decrementa de 5 em 5
    }

    printf("Acabou!\n");

    return 0;
}

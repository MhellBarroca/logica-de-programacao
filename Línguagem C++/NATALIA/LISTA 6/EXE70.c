// 70. Faça um programa que mostre os 10 primeiros elementos da Sequência de Fibonacci: 1
// 1 2 3 5 8 13 21...

#include <stdio.h>

int main() {
    int i, a = 1, b = 1, c;

    printf("Sequência de Fibonacci: %d %d ", a, b);
    for (i = 3; i <= 10; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}

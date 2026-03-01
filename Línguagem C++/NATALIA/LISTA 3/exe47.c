//47. Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 450 + 400 + 350 + 300 + ... + 50 + 0

#include <stdio.h>

int main() {
    int i = 500;
    int soma = 0;

    while (i >= 0) {
        soma += i;
        i -= 50;
    }

    printf("O resultado da expressão 500 + 450 + 400 + ... + 50 + 0 e: %d\n", soma);

    return 0;
}

//40. Crie um aplicativo que mostre na tela a seguinte contagem: 0 3 6 9 12 15 18 Acabou!

#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 18) {  // enquanto i for menor ou igual a 18
        printf("%d -", i);
        i += 3;  // incrementa de 3 em 3
    }

    printf("Acabou!\n");

    return 0;
}

// 66. Escreva um programa que leia um número qualquer e mostre a tabuada desse número,
// usando a estrutura “para”.
// Ex: Digite um valor: 5 5 x 1 = 5 5 x 2 = 10 5 x 3 = 15 ...


#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um valor: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}



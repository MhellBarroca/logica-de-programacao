#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Contagem: ");
    for (i = 0; i <= n; i++) {
        printf("%d", i);
        if (i < n) printf(", ");
    }
    printf(", FIM!\n");

    return 0;
}

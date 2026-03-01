// 69. Desenvolva um programa que leia o primeiro termo e a razão de uma PA (Progressão
// Aritmética), mostrando na tela os 10 primeiros elementos da PA e a soma entre todos
// os valores da sequência.



#include <stdio.h>

int main() {
    int primeiro, razao, termo, soma = 0, i;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro);
    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    termo = primeiro;
    printf("\nOs 10 primeiros termos da PA: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", termo);
        soma += termo;
        termo += razao;
    }

    printf("\nSoma dos termos: %d\n", soma);
    return 0;
}

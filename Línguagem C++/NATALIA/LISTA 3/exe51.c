
// 51. Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela qual foi o maior e qual foi o menor preço digitados.

#include <stdio.h>

int main() {
    int i = 0;              // contador do while
    float preco, maior=0, menor=0;

    while (i < 8) {
        printf("Digite o preco do produto %d: ", i+1);
        scanf("%f", &preco);

        if (i == 0) {       // primeiro produto define maior e menor
            maior = menor = preco;
        } else {
            if (preco > maior) maior = preco;   // verifica maior
            if (preco < menor) menor = preco;   // verifica menor
        }

        i++;                // próximo produto
    }

    printf("\nMaior preco: %.2f\n", maior);
    printf("Menor preco: %.2f\n", menor);

    return 0;
}



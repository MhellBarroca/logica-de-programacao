//26. Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando na tela uma das mensagens abaixo:
//• O primeiro valor é o maior
//• O segundo valor é o maior
//• Não existe valor maior, os dois são iguais

#include <stdio.h>

int main() {
    int num1, num2;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Comparação
    if (num1 > num2) {
        printf("O primeiro valor é o maior\n");
    } else if (num2 > num1) {
        printf("O segundo valor é o maior\n");
    } else {
        printf("Não existe valor maior, os dois são iguais\n");
    }

    return 0;
}

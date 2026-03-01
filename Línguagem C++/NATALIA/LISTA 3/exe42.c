// //42. Faça um algoritmo que pergunte ao usuário um número inteiro e positivo qualquer e mostre uma contagem até esse valor: 
// Ex: Digite um valor: 35
// Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!

#include <stdio.h>

int main() {
    int num;
    int i = 1; // começando a contagem de 1

    printf("Digite o valor de um numero inteiro positivo: ");
    scanf("%i", &num);

    // laço de contagem
    while (i <= num) {
        printf("%d -", i);
        i++;
    }

    printf("Acabou!\n"); // mensagem final

    return 0;
}

// 62. Faça um programa usando a estrutura “faça enquanto” que leia a idade de várias
// pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou não
// continuar a digitar dados. No final, quando o usuário decidir parar, mostre na tela:
// a) Quantas idades foram digitadas
// b) Qual é a média entre as idades digitadas
// c) Quantas pessoas tem 21 anos ou mais.

#include <stdio.h>

int main() {
    int idade, total = 0, maiores21 = 0, contador = 0;
    char continuar;

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        contador++;
        total += idade;

        if (idade >= 21) {
            maiores21++;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar); // espaço antes do %c evita erro com Enter
    } while (continuar == 'S' || continuar == 's');

    printf("\nForam digitadas %d idades.\n", contador);
    printf("A média das idades é %.2f\n", (float)total / contador);
    printf("%d pessoas têm 21 anos ou mais.\n", maiores21);

    return 0;
}
















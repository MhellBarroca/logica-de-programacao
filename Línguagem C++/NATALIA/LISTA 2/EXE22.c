// 22. Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua situação em relação ao alistamento militar.
// • Se estiver antes dos 18 anos, mostre em quantos anos faltam para o alistamento.
// • Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do alistamento.


#include <stdio.h>

int main() {
    int ano_nasc, ano_atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nasc;

    if (idade < 18) {
        printf("Você tem %d anos.\n", idade);
        printf("Faltam %d ano(s) para o seu alistamento.\n", 18 - idade);
    } 
    else if (idade > 18) {
        printf("Você tem %d anos.\n", idade);
        printf("Já se passaram %d ano(s) do seu alistamento.\n", idade - 18);
    } 
    else {
        printf("Você tem %d anos.\n", idade);
        printf("Está na idade exata para se alistar este ano!\n");
    }

    return 0;
}

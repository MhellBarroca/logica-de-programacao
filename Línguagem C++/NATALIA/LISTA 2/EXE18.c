//18. Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se ela pode ou não votar.

#include <stdio.h>

int main()
{
    int ano_nascimento, ano_atual, idade;
    
    printf("Digite o ano em que você nasceu: ");
    scanf("%i", &ano_nascimento);
    
    printf("Digite o ano atual: ");
    scanf("%i", &ano_atual);
    
    idade = ano_atual - ano_nascimento;
    
    if (idade < 16)
        printf("Você não precisa votar, pois tem apenas %d anos.\n", idade);
    else
        printf("Você já pode votar, pois tem %d anos.\n", idade);

    return 0;
}

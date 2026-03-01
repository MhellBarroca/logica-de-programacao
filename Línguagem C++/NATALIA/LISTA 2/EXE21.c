//21. Faça um algoritmo que leia um determinado ano e mostre se ele é ou não BISSEXTO.

#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite o ano: ");
    scanf("%i", &ano);
    
    // Verifica se o ano é bissexto
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
        printf("O ano %i é BISSEXTO!\n", ano);
    else
        printf("O ano %i NÃO é bissexto!\n", ano);

    return 0;
}

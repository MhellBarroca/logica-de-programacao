// 20. Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR.

#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um núemro inteiro : ");
    scanf("%i", &numero);
    
    if (numero % 2 ==0)
        printf("O número digitato é %.2i , classificado como PAR! \n", numero);
    else
        printf("O número digitato é %.2i , classificado como ÍMPAR! \n", numero);

    return 0;
}

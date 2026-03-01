//Programa para verificar se um dado caractere c é um dígito (aproveita o fato de os dígitos estarem em sequência na tabela ASCII):

#include <stdio.h>

int main()
{
    char c;

    printf("Digite uma letra ou numero: ");
    c = getchar();

    if ((c >= '0') && (c <= '9'))
        printf("Eh um digito");
    else
        printf("Nao eh um digito");

    return 0;
}

//Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório entre eles. Ex: Digite um valor: 8 Digite outro valor: 5 A soma entre 8 e 5 é igual a 13.

#include <stdio.h>
#include <string.h>

int main()
{
	int num1,num2,soma;

	printf("Digite o primeiro número: ");
	scanf("%i", &num1);

	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	soma=num1+num2;

	printf("A soma entre número 1 que é %i e número 2 que é %i é = %i \n", num1,num2,soma);

	return 0;
}
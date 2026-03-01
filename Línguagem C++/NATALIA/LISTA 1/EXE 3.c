//3- Crie um programa que leia o nome e o salário de um funcionário, mostrando no final  uma mensagem. Ex: Nome do Funcionário: Maria do Carmo Salário: 1850,45 
// O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.

#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	float salario;

	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")] = '\0';

	printf("Digite seu salario: ");
	scanf("%f", &salario);

	printf("O funcionárioa(a) %s tem um salario de R$%.2f em Junho.\n", nome, salario);

	return 0;
}
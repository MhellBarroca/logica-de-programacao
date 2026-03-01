// 13. Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.


#include <stdio.h>

int main()
{
    float salario, novo_salario, aumento;

    printf("Digite o valor de seu salário : ");
    scanf("%f", &salario);  //1520,00

    novo_salario = salario * 1.15;  
    
    printf("Salário %.2f\n",  salario);
    printf("O novo salário com acréscimo de 15%% é: R$ %.2f\n",  novo_salario);

    return 0;
}

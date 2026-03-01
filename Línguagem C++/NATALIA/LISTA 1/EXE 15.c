// 15. Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário  de um funcionário, sabendo que ele trabalha 8 horas por dia e 
// ganha R$25 por hora trabalhada.

#include <stdio.h>

int main()
{
    int dias_trabalhados;
    float salario;

    printf("Quantos dias o funcionario trabalhou: ");
    scanf("%d", &dias_trabalhados);

    salario = dias_trabalhados * 8 * 25;

    printf("O salario do funcionario e: R$ %.2f\n", salario);

    return 0;
}

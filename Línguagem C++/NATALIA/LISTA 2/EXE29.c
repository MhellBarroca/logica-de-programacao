//29. Desenvolva um programa que leia o nome de um funcionário, seu salário, quantos anos ele trabalha na empresa e mostre seu novo 
//salário, reajustado de acordo com a tabela a seguir:
//• Até 3 anos de empresa: aumento de 3%
//• entre 3 e 10 anos: aumento de 12.5%
//• 10 anos ou mais: aumento de 20%


#include <stdio.h>

int main() {
    char nome[50];
    float salario;
    int anos;

    // Entradas
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]s", nome); // %[^\n] lê nome com espaços  ex: lê o nome completo do funcionário, mesmo com espaços.

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    printf("Digite há quantos anos ele trabalha na empresa: ");
    scanf("%d", &anos);

    // Cálculo do aumento
    if (anos < 3) {
        salario = salario * 1.03; // aumento 3%
    } else if (anos < 10) {
        salario = salario * 1.125; // aumento 12,5%
    } else {
        salario = salario * 1.20; // aumento 20%
    }

    // Saída
    printf("\n%s, seu novo salário é: R$ %.2f\n", nome, salario);

    return 0;
}


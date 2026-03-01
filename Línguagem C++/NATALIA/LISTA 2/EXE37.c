// 37. Uma empresa precisa reajustar o salário dos seus funcionários, dando um aumento de
// acordo com alguns fatores. Faça um programa que leia o salário atual, o gênero do
// funcionário e há quantos anos esse funcionário trabalha na empresa. No final, mostre o
// seu novo salário, baseado na tabela a seguir:
// • Mulheres
// • menos de 15 anos de empresa: +5%
// • de 15 até 20 anos de empresa: +12%
// • mais de 20 anos de empresa: +23%
// • Homens
// • menos de 20 anos de empresa: +3%
// • de 20 até 30 anos de empresa: +13%
// • mais de 30 anos de empresa: +25%


#include <stdio.h>

int main() {
    float salario, novoSalario;
    char genero;
    int anos;

    // Entrada de dados
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o genero do funcionario (M para masculino, F para feminino): ");
    scanf(" %c", &genero); // espaço antes do %c evita pegar o ENTER anterior

    printf("Digite quantos anos o funcionario trabalha na empresa: ");
    scanf("%d", &anos);

    // Cálculo do novo salário conforme as regras
    if (genero == 'F' || genero == 'f') { 
        // Caso seja mulher
        if (anos < 15) {
            novoSalario = salario + (salario * 0.05);
        } else if (anos <= 20) {
            novoSalario = salario + (salario * 0.12);
        } else {
            novoSalario = salario + (salario * 0.23);
        }
    } 
    else if (genero == 'M' || genero == 'm') { 
        // Caso seja homem
        if (anos < 20) {
            novoSalario = salario + (salario * 0.03);
        } else if (anos <= 30) {
            novoSalario = salario + (salario * 0.13);
        } else {
            novoSalario = salario + (salario * 0.25);
        }
    } 
    else {
        // Caso o usuário digite algo diferente de M ou F
        printf("Genero invalido! Use 'M' ou 'F'.\n");
        return 1; // encerra o programa
    }

    // Saída de dados
    printf("O novo salario do funcionario sera: R$ %.2f\n", novoSalario);

    return 0;
}

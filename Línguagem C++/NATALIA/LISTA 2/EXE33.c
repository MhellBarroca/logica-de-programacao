//33. Escreva um programa para aprovar ou não o empréstimo bancário para a compra de uma casa. 
//O programa vai perguntar o valor da casa, o salário do comprador e em quantos anos ele vai pagar. 
//Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30% do salário ou então o empréstimo será negado.

#include <stdio.h>

int main() {
    float casa, salario, prestacao;
    int anos;

    printf("Valor da casa: ");
    scanf("%f", &casa);
    printf("Salário: ");
    scanf("%f", &salario);
    printf("Anos para pagar: ");
    scanf("%d", &anos);

    prestacao = casa / (anos * 12);

    if (prestacao > salario * 0.3)
        printf("Empréstimo NEGADO! Prestação R$%.2f excede 30%% do salário.\n", prestacao);
    else
        printf("Empréstimo APROVADO! Prestação mensal: R$%.2f\n", prestacao);

    return 0;
}

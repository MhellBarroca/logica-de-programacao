// 12. Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO  PROMOCIONAL, com 5% de desconto.

#include <stdio.h>

int main()
{
    float preco_prod, promo, desconto;

    printf("Qual o valor do produto: ");
    scanf("%f", &preco_prod);  

    desconto = preco_prod * 0.05;       // desconto
    promo = preco_prod - desconto;      // preço final com desconto

    printf("O preço promocional com 5%% de desconto é: R$ %.2f\n", promo);

    return 0;
}

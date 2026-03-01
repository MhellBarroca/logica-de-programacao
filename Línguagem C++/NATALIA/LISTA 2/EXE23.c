// 23. Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos para todos, mas especialmente para mulheres. Faça um programa que leia nome, sexo e o
// valor das compras do cliente e calcule o preço com desconto. Sabendo que:
// • Homens ganham 5% de desconto
// • Mulheres ganham 13% de desconto

#include <stdio.h>

int main()
{
    float vlr_prod, vlr_final;
    char nome[50], sexo;

    printf("Digite seu 1° nome: ");
    scanf("%s", nome);
    
    printf("Digite seu sexo [F] ou [M]: ");
    scanf(" %c", &sexo); 

    printf("Digite o valor da compra: ");
    scanf("%f", &vlr_prod);
    
    if (sexo == 'F' || sexo == 'f') {
        vlr_final = vlr_prod - (vlr_prod * 0.13); 
        printf("%s, você ganhou 13%% de desconto!\n", nome);
        printf("Valor final da compra: R$ %.2f\n", vlr_final);
    }
    else if (sexo == 'M' || sexo == 'm') {
        vlr_final = vlr_prod - (vlr_prod * 0.05); 
        printf("%s, você ganhou 5%% de desconto!\n", nome);
        printf("Valor final da compra: R$ %.2f\n", vlr_final);
    }
    else{
        printf("Sexo inválido! Digite apenas 'F' ou 'M'.\n");
    }
    return 0;
}

// biblioteca <ctype.h  ex: sexo = toupper (sexo)  serve para aceitar minusculo e maicuslo, daí não seria necessario fazer a 
//linha de cod (sexo == 'F' || sexo == 'f'.
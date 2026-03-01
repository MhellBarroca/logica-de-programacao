// 9. Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) e 
// mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.

#include <stdio.h>

int main()
{
    float din, dlr;
    
    printf("Digite o valor em R$ que tem em sua carteira: ");
    scanf("%f", &din);
    
    dlr = din / 3.45;  
    
    printf("Com R$%.2f você pode comprar US$%.2f\n", din, dlr);

    return 0;
}

// 14. A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a 
// quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado


#include <stdio.h>

int main()
{
    float largura, altura, area, qtdd_tinta;
    
    printf("Digite a largura da parede (m): ");
    scanf("%f", &largura);

    printf("Digite a altura da parede (m): ");
    scanf("%f", &altura);
    
    area = largura * altura;          
    qtdd_tinta = area / 2;             
    
    printf("A área da parede é: %.2f m² e a quantidade de tinta necessária será: %.2f litros\n", area, qtdd_tinta);
  

    return 0;
}

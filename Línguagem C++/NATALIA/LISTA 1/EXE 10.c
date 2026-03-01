// 10. Faça um algoritmo que leia a largura e altura de uma parede, calcule e mostre a área a ser pintada e a quantidade de tinta necessária para o serviço, 
// sabendo que cada litro de  tinta pinta uma área de 2metros quadrados.

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

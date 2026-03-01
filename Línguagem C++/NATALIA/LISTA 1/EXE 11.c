// 11. Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo grau e mostre o valor de Delta.


#include <stdio.h>

int main()
{
    float a, b, c, Delta;
    
    printf("Digite o valor A da equacao: ");
    scanf("%f", &a);
    printf("Digite o valor B da equacao: ");
    scanf("%f", &b);
    printf("Digite o valor C da equacao: ");
    scanf("%f", &c);
    
    Delta = (b * b) - (4 * a * c);  // calculando delta
    printf("O valor de Delta é: %.2f\n", Delta);

    return 0;
}
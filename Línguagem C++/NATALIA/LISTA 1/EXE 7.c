// 7. Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça 
// parte. Ex: Digite um número: 3.5 O dobro de 3.5 é 7.0 A terça parte de 3.5 é 1.16666

#include <stdio.h>

int main()
{
    float num, dobro, ter;

    printf("Digite um numero: ");
    scanf("%f", &num);

    dobro = num * 2;  
    ter = num / 3.0; 

    printf("O dobro de %.2f é %.2f\n", num, dobro);
    printf("A terça parte de %.2f é %.5f\n", num, ter);

    return 0;
}
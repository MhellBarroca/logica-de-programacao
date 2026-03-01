//6. Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor.
//Ex: Digite um número: 9 
//O antecessor de 9 é 8 
//O sucessor de 9 é 10

#include <stdio.h>

int main()
{
    int num, suc, ant;

    printf("Digite um numero: ");
    scanf("%i", &num);

    ant = num - 1;  
    suc = num + 1; 

    printf("O antecessor de %i é %i\n", num, ant);
    printf("O sucessor de %i é %i\n", num, suc);

    return 0;
}

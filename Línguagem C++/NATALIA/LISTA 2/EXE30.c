//30. Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo de triângulo será formado:
//- EQUILÁTERO: todos os lados iguais
//- ISÓSCELES: dois lados iguais
//- ESCALENO: todos os lados diferentes

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Digite o lado 1: ");
    scanf("%f", &a);

    printf("Digite o lado 2: ");
    scanf("%f", &b);

    printf("Digite o lado 3: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
            printf("Triângulo Equilátero\n");
        else if (a == b || a == c || b == c)
            printf("Triângulo Isósceles\n");
        else
            printf("Triângulo Escaleno\n");
    }
    else
    {
        printf("Não forma um triângulo\n");
    }

    return 0;
}

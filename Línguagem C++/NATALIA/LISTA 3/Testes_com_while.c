// Repetição com teste no início
// •	Valor específico finaliza a execução:
// •	Desenvolva um algoritmo que leia uma sequência de números inteiros, calculando e imprimindo o quadrado de cada número lido. A sequência deve terminar quando o número 0(zero) for lido.
// •	ZERO
// → indica o final da sequência de valores.
// → encerra as repetições.
// → não deve ser processado (o quadrado de zero não deve ser
// impresso).


#include <stdio.h>

int main()
{
    int num, quad;

    // Lê o primeiro número
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Enquanto o número for diferente de 0
    while( num != 0 )
    {
        quad = num * num; // calcula o quadrado
        printf("\nQuadrado de %d: %d", num, quad);

        // Lê o próximo número
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
    }

    return 0;
}

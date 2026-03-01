//32. Crie um jogo onde o computador vai sortear um número entre 1 e 5 o jogador vai tentar descobrir qual foi o valor sorteado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, sorteio;

    srand(time(NULL));
    sorteio = rand() % 5 + 1; // número aleatório de 1 a 5

    printf("Adivinhe o número (1 a 5): ");
    scanf("%d", &num);

    if (num == sorteio)
        printf("Acertou! O número era %d\n", sorteio);
    else
        printf("Errou! O número era %d\n", sorteio);

    return 0;
}
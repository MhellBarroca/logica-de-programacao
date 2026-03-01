// 31. Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    printf("1-Pedra  2-Papel  3-Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    srand(time(NULL));
    computador = rand() % 3 + 1;

    if (jogador == computador)
        printf("Empate!\n");
    else if ((jogador == 1 && computador == 3) ||
             (jogador == 2 && computador == 1) ||
             (jogador == 3 && computador == 2))
        printf("Você venceu!\n");
    else
        printf("Você perdeu!\n");

    return 0;
}


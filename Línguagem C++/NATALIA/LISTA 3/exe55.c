// 55. Vamos melhorar o jogo que fizemos no exercício 32. A partir de agora, o computador
// vai sortear um número entre 1 e 10 e o jogador vai ter 4 tentativas para tentar acertar.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 0;

    // inicializa o gerador de números aleatórios
    srand(time(NULL));
    numeroSorteado = rand() % 10 + 1; // número entre 1 e 10

    printf("=== Jogo da adivinhacao ===\n");
    printf("Tente adivinhar o numero entre 1 e 10.\n");

    while (tentativas < 4) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);

        if (palpite == numeroSorteado) {
            printf("Parabens! Voce acertou!\n");
            break; // sai do while se acertou
        } else {
            printf("Errado! Tente novamente.\n");
        }

        tentativas++;
    }

    if (tentativas == 4 && palpite != numeroSorteado) {
        printf("Fim de jogo! O numero era %d.\n", numeroSorteado);
    }

    return 0;
}

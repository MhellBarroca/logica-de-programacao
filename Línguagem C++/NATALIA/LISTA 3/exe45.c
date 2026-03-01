// 45. O programa acima vai ter um problema quando digitarmos o primeiro valor maior que
// o último. Resolva esse problema com um código que funcione em qualquer situação.


#include <stdio.h>

int main() {
    int vlr_inicial, vlr_final, incremento;

    printf("Digite o valor inicial da contagem: ");
    scanf("%i", &vlr_inicial);
    printf("Digite o valor final da contagem: ");
    scanf("%i", &vlr_final);
    printf("Digite o valor do incremento da contagem: ");
    scanf("%i", &incremento);

    if (vlr_inicial < vlr_final) {
        // Contagem crescente
        if (incremento <= 0) incremento = 1; // garante incremento positivo
        printf("Contagem: ");
        while (vlr_inicial <= vlr_final) {
            printf("%d ", vlr_inicial);
            vlr_inicial += incremento;
        }
    } else {
        // Contagem decrescente
        if (incremento <= 0) incremento = 1; // garante incremento positivo
        printf("Contagem: ");
        while (vlr_inicial >= vlr_final) {
            printf("%d ", vlr_inicial);
            vlr_inicial -= incremento; // decrementa
        }
    }

    printf("Acabou!\n");
    return 0;
}

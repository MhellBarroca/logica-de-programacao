// 44. Crie um algoritmo que leia o valor inicial da contagem, o valor final e o incremento,
// mostrando em seguida todos os valores no intervalo:
// Ex: Digite o primeiro Valor: 3
// Digite o último Valor: 10
// Digite o incremento: 2
// Contagem: 3 5 7 9 Acabou!

#include <stdio.h>

int main() {
    int vlr_inicial, vlr_final, incremento;

    printf("Digite o valor inicial da contagem: ");
    scanf("%i", &vlr_inicial);
    printf("Digite o valor final da contagem: ");
    scanf("%i", &vlr_final);
    printf("Digite o valor do incremento da contagem: ");
    scanf("%i", &incremento);

    printf("Contagem: ");
    while (vlr_inicial <= vlr_final) {
        printf("%d ", vlr_inicial);  // imprime o valor atual
        vlr_inicial += incremento;    // adiciona o incremento
    }

    printf("Acabou!\n");

    return 0;
}

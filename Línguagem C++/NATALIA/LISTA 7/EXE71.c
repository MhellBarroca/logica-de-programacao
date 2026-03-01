//71. Faça um programa que preencha automaticamente um vetor numérico com 8 posições, conforme abaixo:
// |999||999||999||999||999||999||999||999|
//   0    1    2    3    4    5    6    7

#include <stdio.h>
#define TAM 8

int main() {
    int vetor[TAM];
    int i;

    // Preenche automaticamente o vetor com o valor 999
    for (i = 0; i < TAM; i++) {
        vetor[i] = 999;
    }

    // Exibe o vetor conforme o exemplo do enunciado
    printf("Vetor preenchido automaticamente:\n");
    for (i = 0; i < TAM; i++) {
        printf("|%d|", vetor[i]);
    }

    // Exibe os índices abaixo
    printf("\n");
    for (i = 0; i < TAM; i++) {
        printf("  %d ", i);
    }

    printf("\n");
    return 0;
}

//25. Crie um programa que leia o tamanho de três segmentos de reta. Analise seus comprimentos e diga se é possível formar um triângulo 
//com essas retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento de cada lado deve ser menor que a soma 
//dos outros dois.

#include <stdio.h>

int main() {
    float R1, R2, R3;

    printf("Digite os comprimentos dos três segmentos de reta:\n");
    scanf("%f %f %f", &R1, &R2, &R3);

    if (R1 < R2 + R3 && R2 < R1 + R3 && R3 < R1 + R2) {
        printf("É possível formar um triângulo com esses segmentos.\n");
    } else {
        printf("Não é possível formar um triângulo com esses segmentos.\n");
    }

    return 0;
}

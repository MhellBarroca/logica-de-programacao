// 54. Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando no final:
// a) Qual foi a média de altura do grupo
// b) Quantas pessoas pesam mais de 90Kg
// c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
// d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg.


#include <stdio.h>

int main() {
    int i = 0;
    float peso, altura;
    float somaAltura = 0;
    int mais90 = 0;
    int menos50e160 = 0;
    int mais190e100 = 0;

    while (i < 7) {
        printf("Pessoa %d\n", i+1);

        printf("Peso (Kg): ");
        scanf("%f", &peso);

        printf("Altura (m): ");
        scanf("%f", &altura);

        somaAltura += altura;           // soma das alturas

        if (peso > 90) mais90++;        // pessoas com peso > 90kg
        if (peso < 50 && altura < 1.60) menos50e160++; // peso <50kg e altura <1.60m
        if (altura > 1.90 && peso > 100) mais190e100++; // altura >1.90m e peso >100kg

        i++;
        printf("\n");
    }

    printf("Media de altura do grupo: %.2f m\n", somaAltura / 7);
    printf("Pessoas com mais de 90Kg: %d\n", mais90);
    printf("Pessoas com menos de 50Kg e menos de 1.60m: %d\n", menos50e160);
    printf("Pessoas com mais de 1.90m e mais de 100Kg: %d\n", mais190e100);

    return 0;
}

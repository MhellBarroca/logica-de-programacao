// 53. Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
// a) Quantos homens foram cadastrados
// b) Quantas mulheres foram cadastradas
// c) A média de idade do grupo
// d) A média de idade dos homens
// e) Quantas mulheres tem mais de 20 anos

#include <stdio.h>

int main() {
    int i = 0;
    int idade;
    char sexo;

    int somaIdade = 0;
    int somaIdadeHomem = 0;
    int totalHomens = 0;
    int totalMulheres = 0;
    int mulheresMais20 = 0;

    while (i < 5) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        somaIdade += idade; // soma total de idades

        if (sexo == 'M' || sexo == 'm') {
            totalHomens++;
            somaIdadeHomem += idade; // soma idades dos homens
        } else if (sexo == 'F' || sexo == 'f') {
            totalMulheres++;
            if (idade > 20)
                mulheresMais20++;
        }

        i++;
    }

    printf("\nTotal de homens: %d\n", totalHomens);
    printf("Total de mulheres: %d\n", totalMulheres);
    printf("Media de idade do grupo: %.1f\n", (float)somaIdade / 5);

    if (totalHomens > 0)
        printf("Media de idade dos homens: %.1f\n", (float)somaIdadeHomem / totalHomens);
    else
        printf("Nao houve homens cadastrados.\n");

    printf("Mulheres com mais de 20 anos: %d\n", mulheresMais20);

    return 0;
}

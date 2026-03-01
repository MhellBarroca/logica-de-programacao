
// 68. Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura “para”. No final,
// mostre na tela:
// a) Quantas mulheres foram cadastradas
// b) Quantos homens pesam mais de 100Kg
// c) A média de peso entre as mulheres
// d) O maior peso entre os homens


#include <stdio.h>

int main() {
    int i, mulheres = 0, homens100 = 0;
    float peso, somaMulheres = 0, maiorHomem = 0;
    char sexo;

    for (i = 1; i <= 8; i++) {
        printf("\nPessoa %d\n", i);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Peso (kg): ");
        scanf("%f", &peso);

        if (sexo == 'F' || sexo == 'f') {
            mulheres++;
            somaMulheres += peso;
        } else if (sexo == 'M' || sexo == 'm') {
            if (peso > 100)
                homens100++;
            if (peso > maiorHomem)
                maiorHomem = peso;
        }
    }

    printf("\nMulheres cadastradas: %d\n", mulheres);
    printf("Homens com mais de 100kg: %d\n", homens100);

    if (mulheres > 0)
        printf("Média de peso das mulheres: %.2f\n", somaMulheres / mulheres);
    else
        printf("Nenhuma mulher cadastrada.\n");

    if (maiorHomem > 0)
        printf("Maior peso entre os homens: %.2f\n", maiorHomem);
    else
        printf("Nenhum homem cadastrado.\n");

    return 0;
}



// 69. Desenvolva um programa que leia o primeiro termo e a razão de uma PA (Progressão
// Aritmética), mostrando na tela os 10 primeiros elementos da PA e a soma entre todos
// os valores da sequência.
// 70. Faça um programa que mostre os 10 primeiros elementos da Sequência de Fibonacci: 1
// 1 2 3 5 8 13 21...
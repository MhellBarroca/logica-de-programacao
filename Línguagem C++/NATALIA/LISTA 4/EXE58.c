// //58. Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa vai parar quando for digitada a idade 999. No final, mostre quantos alunos existem na turma 
//e qual é a média de idade do grupo.

#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;
    int flag = 1; // FLAG: 1 = continuar, 0 = parar

    while (flag) {
        printf("Digite a idade (999 para parar): ");
        scanf("%d", &idade);

        if (idade == 999) {
            flag = 0; // Para o loop
        } else {
            soma += idade;  // Acumula a soma das idades
            contador++;     // Conta quantos alunos foram cadastrados
        }
    }

    if (contador > 0) {
        printf("Número de alunos: %d\n", contador);
        printf("Média de idade: %.2f\n", (float)soma / contador);
    } else {
        printf("Nenhum aluno cadastrado.\n");
    }

    return 0;
}

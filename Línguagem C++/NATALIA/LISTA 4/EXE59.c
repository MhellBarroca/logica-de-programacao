// 59. Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai perguntar
// se o usuário quer continuar ou não a cada pessoa. No final, mostre:
// a) qual é a maior idade lida
// b) quantos homens foram cadastrados
// c) qual é a idade da mulher mais jovem
// d) qual é a média de idade entre os homens



#include <stdio.h>

int main() {
    int idade, homens = 0, somaHomens = 0;
    int maiorIdade = 0;
    int idadeMulherMaisJovem = 999;
    char sexo, resposta;
    int flag = 1; // FLAG: 1 = continuar, 0 = parar

    while (flag) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        // Atualiza a maior idade
        if (idade > maiorIdade) maiorIdade = idade;

        // Contagem de homens e soma da idade
        if (sexo == 'M' || sexo == 'm') {
            homens++;
            somaHomens += idade;
        }

        // Idade da mulher mais jovem
        else if (sexo == 'F' || sexo == 'f') {
            if (idade < idadeMulherMaisJovem) idadeMulherMaisJovem = idade;
        }

        // Pergunta se deseja continuar
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);
        if (resposta == 'N' || resposta == 'n') flag = 0; // muda FLAG para parar
    }

    printf("Maior idade: %d\n", maiorIdade);
    printf("Homens cadastrados: %d\n", homens);
    if (idadeMulherMaisJovem != 999)
        printf("Idade da mulher mais jovem: %d\n", idadeMulherMaisJovem);
    if (homens > 0)
        printf("Média de idade dos homens: %.2f\n", (float)somaHomens / homens);

    return 0;
}


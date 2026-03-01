// 60. Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. Oprograma vai perguntar se o usuário quer ou não continuar. No final, mostre:
// a) O nome da pessoa mais velha
// b) O nome da mulher mais jovem
// c) A média de idade do grupo
// d) Quantos homens tem mais de 30 anos
// e) Quantas mulheres tem menos de 18 anos

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeMaisVelho[50] = "", nomeMulherMaisJovem[50] = "";
    int idade, homensMais30 = 0, mulheresMenos18 = 0;
    int somaIdades = 0, contador = 0;
    int maiorIdade = 0;
    int idadeMulherMaisJovem = 999;
    char sexo, resposta;
    int flag = 1; // FLAG: 1 = continuar, 0 = parar

    while (flag) {
        printf("Digite o nome: ");
        scanf(" %[^\n]s", nome); // lê até o Enter

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        // Atualiza pessoa mais velha
        if (idade > maiorIdade) {
            maiorIdade = idade;
            strcpy(nomeMaisVelho, nome);
        }

        // Atualiza mulher mais jovem
        if ((sexo == 'F' || sexo == 'f') && idade < idadeMulherMaisJovem) {
            idadeMulherMaisJovem = idade;
            strcpy(nomeMulherMaisJovem, nome);
        }

        // Contagem de homens e mulheres por faixa etária
        if (sexo == 'M' || sexo == 'm') {
            if (idade > 30) homensMais30++;
        } else if (sexo == 'F' || sexo == 'f') {
            if (idade < 18) mulheresMenos18++;
        }

        somaIdades += idade; // Soma total das idades
        contador++;          // Conta total de pessoas cadastradas

        // Pergunta se deseja continuar
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);
        if (resposta == 'N' || resposta == 'n') flag = 0; // muda FLAG para parar
    }

    printf("Pessoa mais velha: %s\n", nomeMaisVelho);
    if (idadeMulherMaisJovem != 999)
        printf("Mulher mais jovem: %s\n", nomeMulherMaisJovem);
    printf("Média de idade do grupo: %.2f\n", (float)somaIdades / contador);
    printf("Homens com mais de 30 anos: %d\n", homensMais30);
    printf("Mulheres com menos de 18 anos: %d\n", mulheresMenos18);

    return 0;
}

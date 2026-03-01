// 57. Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. No final, mostre o total de salários pagos aos homens e o total pago às mulheres.
// O programa vai perguntar ao usuário se ele quer continuar ou não sempre que ler os dados de um funcionário.

#include <stdio.h>

int main() {
    float salario, totalHomens = 0, totalMulheres = 0;
    char sexo, resposta;
    int flag = 1; // FLAG: 1 = continuar, 0 = parar

    while (flag) {
        printf("Digite o salário: ");
        scanf("%f", &salario);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo); // espaço antes do %c para limpar buffer

        // Soma de salários por sexo
        if (sexo == 'M' || sexo == 'm') totalHomens += salario;
        else if (sexo == 'F' || sexo == 'f') totalMulheres += salario;

        // Pergunta se o usuário deseja continuar
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'N' || resposta == 'n') {
            flag = 0; // Muda a FLAG para 0 e encerra o loop
        }
    }

    printf("Total pago aos homens: %.2f\n", totalHomens);
    printf("Total pago às mulheres: %.2f\n", totalMulheres);

    return 0;
}

// 56. Crie um programa que leia vários números pelo teclado e mostre no final o somatório
// entre eles. Obs: O programa será interrompido quando o número 1111 for digitado

#include <stdio.h>

int main() {
    int num, soma = 0;
    int flag = 1; // FLAG: 1 = continuar, 0 = parar

    // Enquanto a FLAG for 1, o loop continua
    while (flag) {
        printf("Digite um número (1111 para parar): ");
        scanf("%d", &num);

        if (num == 1111) {
            flag = 0; // Muda a FLAG para 0 e encerra o loop
        } else {
            soma += num; // Acumula o valor no somatório
        }
    }

    printf("O somatório dos números é: %d\n", soma);
    return 0;
}

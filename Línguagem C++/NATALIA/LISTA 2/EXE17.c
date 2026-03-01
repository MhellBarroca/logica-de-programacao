//17. Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h,exiba uma mensagem dizendo que o usuário foi
//multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.

#include <stdio.h>

int main()
{
    float velocidade, multa;

    printf("Digite a velocidade do carro (km/h): ");
    scanf("%f", &velocidade);

    if (velocidade > 80) {
        multa = (velocidade - 80) * 5;
        printf("Você foi multado!\n");
        printf("O valor da multa é: R$%.2f\n", multa);
    } else {
        printf("Você está dentro do limite de velocidade.\n");
    }

    return 0;
}

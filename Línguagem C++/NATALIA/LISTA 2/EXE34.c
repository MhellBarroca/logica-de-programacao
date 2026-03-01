//34. O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no peso de uma pessoa.
//De acordo com o valor do IMC, podemos classificar o indivíduo dentro de certas faixas.
//• abaixo de 18.5: Abaixo do peso
//• entre 18.5 e 25: Peso ideal
//• entre 25 e 30: Sobrepeso
//• entre 30 e 40: Obesidade
//• acima de 40: Obseidade mórbida Obs: O IMC é calculado pela expressão peso/altura2 (peso dividido pelo quadrado da altura)

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25)
        printf("Peso ideal\n");
    else if (imc < 30)
        printf("Sobrepeso\n");
    else if (imc < 40)
        printf("Obesidade\n");
    else
        printf("Obesidade mórbida\n");

    return 0;
}

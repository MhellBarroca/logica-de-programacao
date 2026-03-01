//35. Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O aluguel de um carro custa R$90 por dia para carro popular 
//e R$150 por dia para carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa que leia o tipo de carro alugado
//(popular ou luxo), quantos dias de aluguel e quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a tabela
//a seguir:
//• Carros populares (aluguel de R$90 por dia)
//• Até 100Km percorridos: R$0,20 por Km
//• Acima de 100Km percorridos: R$0,10 por Km
//• Carros de luxo (aluguel de R$150 por dia)
//• Até 200Km percorridos: R$0,30 por Km
//• Acima de 200Km percorridos: R$0,25 por Km

#include <stdio.h>

int main() {
    int dias;
    float km, total;
    char tipo;

    printf("Tipo de carro (p=popular / l=luxo): ");
    scanf(" %c", &tipo);
    printf("Dias alugados: ");
    scanf("%d", &dias);
    printf("Km percorridos: ");
    scanf("%f", &km);

    if (tipo == 'p') {
        total = dias * 90;
        if (km <= 100) total += km * 0.20;
        else total += km * 0.10;
    } else {
        total = dias * 150;
        if (km <= 200) total += km * 0.30;
        else total += km * 0.25;
    }

    printf("Total a pagar: R$%.2f\n", total);
    return 0;
}

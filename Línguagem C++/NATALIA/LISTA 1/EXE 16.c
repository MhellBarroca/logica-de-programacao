//6. Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por dias 
//e quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante 
//perderá e exiba o total em dias

#include <stdio.h>

int main()
{
    float cigarros_dia, anos, dias_perdidos, total_cigarros, total_minutos;

    printf("Quantos cigarros voce fuma por dia: ");
    scanf("%f", &cigarros_dia);

    printf("Ha quantos anos voce fuma: ");
    scanf("%f", &anos);

    total_cigarros = cigarros_dia * 365 * anos; // total de cigarros fumados
    total_minutos = total_cigarros * 10;        // cada cigarro tira 10 minutos de vida
    dias_perdidos = total_minutos / 1440;       // 1 dia tem 1440 minutos

    printf("Voce perdeu %.2f dias de vida.\n", dias_perdidos);

    return 0;
}
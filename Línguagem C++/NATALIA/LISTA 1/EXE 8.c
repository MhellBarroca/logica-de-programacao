// 8. Desenvolva um programa que leia uma distância em metros e mostre os valores relativos em outras medidas. Ex: Digite uma distância em metros: 185.72 A distância de 
// 85.7m corresponde a:
// • 0.18572Km 
// • 1.8572Hm 
// • 18.572Dam 
// • 1857.2dm 
// • 18572.0cm 
// • 185720.0mm


#include <stdio.h>

int main()
{
    float metros, Km, Hm, Dam, dm, cm, mm;

    printf("Digite a distancia em metros: ");
    scanf("%f", &metros);

    Km = metros / 1000;
    Hm = metros / 100;
    Dam = metros / 10;
    dm = metros * 10;
    cm = metros * 100;
    mm = metros * 1000;

    printf("%.2f metros é igual a %.2f Km\n", metros, Km);
    printf("%.2f metros é igual a %.2f Hm\n", metros, Hm);
    printf("%.2f metros é igual a %.2f Dam\n", metros, Dam);
    printf("%.2f metros é igual a %.1f dm\n", metros, dm);
    printf("%.2f metros é igual a %.1f cm\n", metros, cm);
    printf("%.2f metros é igual a %.1f mm\n", metros, mm);

    return 0;
}
// 19. Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média e mostre na tela. No final, analise a média e mostre se o aluno teve ou não um bom
// aproveitamento (se ficou acima da média 7.0).

#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    if (media >= 7)
        printf("O aluno teve um bom aproveitamento. Sua nota final foi: %.2f\n", media);
    else
        printf("O aluno não teve um bom aproveitamento. Sua nota final foi: %.2f\n", media);

    return 0;
}

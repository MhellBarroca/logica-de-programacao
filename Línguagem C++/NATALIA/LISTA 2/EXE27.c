//27. Crie um programa que leia duas notas de um aluno e calcule a sua média, mostrando uma mensagem no final, de acordo com a média atingida:
//• Média até 4.9: REPROVADO
//• Média entre 5.0 e 6.9: RECUPERAÇÃO
//• Média 7.0 ou superior: APROVADO

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Cálculo da média
    media = (nota1 + nota2) / 2;

    // Verificação da situação do aluno
    if (media <= 4.9) {
        printf("REPROVADO\n");
    } else if (media <= 6.9) { // Entre 5.0 e 6.9
        printf("RECUPERACAO\n");
    } else { // Média 7.0 ou superior
        printf("APROVADO\n");
    }

    return 0;
}

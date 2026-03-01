//5. Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina. Ex: Nota 1: 4.5 Nota 2: 8.5 A média entre 4.5 e 8.5 
//é igual a  6.5

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("A média entre %.1f e %.1f é igual a %.1f\n", nota1, nota2, media);

    return 0;
}

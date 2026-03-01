// FAÇA UM ALGORITMO QUE CRIE TRÊS VETORES, PREENCHA DOIS DELES COM VALORES LIDOS LIDO DO TECLADO E,AO FINAL, PREENCHA O TERCEIRO VETOR ARMAZENANDO, 
//EM CADA INDICE ,A SOMA DOS ELEMENTOS COM ESTE MESMO INDICE NOS OUTROS VETORES.

#include <stdio.h>
#define TAM 5

int main()
{
    int vet1[TAM], vet2[TAM], vet3[TAM], i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº elemento do primeiro e do segundo vetor:\n", i + 1);
        scanf("%d %d", &vet1[i], &vet2[i]);
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("\nVetor resultante (soma dos dois vetores):\n");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vet3[i]);
    }

    printf("\n");
    return 0;
}

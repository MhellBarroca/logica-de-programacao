// 28. Faça um programa que leia a largura e o comprimento de um terreno retangular, calculando e mostrando a sua área em m2. O programa também deve mostrar a
// classificação desse terreno, de acordo com a lista abaixo:

// • Abaixo de 100m2 = TERRENO POPULAR
// • Entre 100m2 e 500m2 = TERRENO MASTER
// • Acima de 500m2 = TERRENO VIP

#include <stdio.h>

int main() {
	float largura, comprimento, area;

	printf("Digite a largura do terreno (em metros): ");
	scanf("%f", &largura);

	printf("Digite o comprimento do terreno (em metros): ");
	scanf("%f", &comprimento);

	// CC!lculo da C!rea
	area = largura * comprimento;

	if (area < 100) {
		printf("TERRENO POPULAR\n");
	} else if (area <= 500) {
		printf("TERRENO MASTER\n");
	} else {
		printf("TERRENO VIP\n");
	}


	return 0;
}

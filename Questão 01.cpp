/*Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
perímetro.*/

#include <stdio.h>

int main(){
	float b, h, area;
	
	printf("Informe o tamanho da base do retangulo em cm.\n");
	scanf("%f", &b);
	printf("Informe o tamanho da altura do  retangulo em cm.\n");
	scanf("%f", &h);
	
	area = h*b;
	
	printf("A area do retangulo e %.2f. cm².\n", area);
}

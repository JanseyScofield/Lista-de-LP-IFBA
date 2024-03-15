/*Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).*/

#include  <stdio.h>

main(){
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("Este ponto se encontra: ");
	if (x == 0  && y == 0){
		printf("na origem.");
	}
	else if (x != 0 && y == 0){
		printf("no eixo x.");
	}
	else if (y != 0 && x == 0){
		printf("no eixo y.");
	}
	else if  (x > 0 && y > 0){
		printf("no primeiro quadrante.");
	}
	else if (x < 0 && y > 0){
		printf("no segundo  quadrante.");
	}
	else if (x  < 0 && y <0){
		printf("no terceiro quadrante.");
	}
	else if (x > 0 && y < 0){
		printf("no quarto quadrante.");
	}
}

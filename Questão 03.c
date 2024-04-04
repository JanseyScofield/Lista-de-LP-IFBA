/*Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.*/

#include <stdio.h>
#include <math.h>

int main(){
	float r, peri, area;
	
	printf("Informe o raio da circuferencia em cm.\n");
	scanf("%f", &r);
	
	peri = 2*3.14*r;
	area = pow(r,2)*3.14;
	
	printf("Perimetro: %.2f cm.\n",peri);
	printf("Area: %.2f cm².\n", area);
}

/*screva um programa que leia 5 números, e imprima a média entre eles.*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	float num, media, soma;
	int c;
	
	c = 1;
	soma = 0;	
	while(c<=5){
		printf("Insira um valor: ");
		scanf("%f", &num);
		soma += num;
		c++;
	}
	media = soma/5;
	printf("A média dos valores é igual a: %.2f", media);
}

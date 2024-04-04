/* Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma de todos eles.*/

#include <stdio.h>

main(){
	int c, soma;
	c = 1;
	soma  =  0;
	while(c<=100){
		printf("%d\n", c);
		soma += c;
		c++;
	}
	printf("%d", soma);
}

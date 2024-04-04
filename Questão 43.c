/*Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 100*/

#include <stdio.h>

main(){
	int c;
	c = 1;
	while(c<=100){
		if(c % 2 == 0){
			printf("%d\n",c);
		}
		c++;
	}
}

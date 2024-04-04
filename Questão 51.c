/*A série de Fibonacci é formada pela sequencia: 
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N sendo uma entrada do algoritmo)*/

#include  <stdio.h>

main(){
	int termo, num, numa, c;
	scanf("%d", &termo);
	num=1;
	c=1;
	numa=0;
	printf("%d ", num);
	while(c<=termo){
		numa=num - numa;
		num+=numa;
		printf("%d ", num);
		c++;		
	}
}

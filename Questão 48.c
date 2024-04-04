/* Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não.*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int num, divisores, c;
	scanf("%d",  &num);
	c = 1;
	divisores = 0;
	while(c<=num){
		if(num%c==0){
			divisores++;
		}
		c++;
	}
	
	if(divisores > 2){
		printf("Não é primo.");
	}
	else{
		printf("É primo.");
	}
}

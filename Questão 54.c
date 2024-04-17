/*Construa um programa que receba um número e verifique se ele é um número triangular. (Um número é triangular quando é resultado do produto de três números consecutivos. 
Exemplo: 24 = 2 x 3 x 4)*/

#include <stdio.h>
main(){
	int num, iCont, mult, jCont;
	
	scanf("%d", &num);
	jCont = 0;
	for(iCont = 1; iCont < num; iCont++){
		mult = (iCont+2)*(iCont+1)*iCont;
		if(num == mult){
			jCont = 1;
		}
	}
	if(jCont == 1){
		printf("O valor eh triangular.");
	}
	else{
		printf("O valor nao eh triangular.");
	}
}

/*Sendo S = 1 +1/2^21/3^3+1/4^4 +... 1/N^N, um somatório de N (informado pelo usuário) termos, escreva um programa em C para calcular S para um número N.*/

#include <stdio.h>

main(){
	int iCont, jCont, constante;
	int num;
	float termo, S;
	
	scanf("%d", &num);
	
	S = 1;
	for(iCont = 2; iCont <= num; iCont++){
		termo = iCont;
		constante = termo;
		
		for(jCont = 1; jCont < constante; jCont++){
			termo*=constante;

		}
		S += 1/termo;
		printf("%f\n", S);	
	}
}

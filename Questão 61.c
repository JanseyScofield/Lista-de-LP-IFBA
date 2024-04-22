/*Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na 
posição (um por linha)*/

#include <stdio.h>

main(){
	int vet[20], iCont;
	
	for(iCont =  0; iCont<=20; iCont++){
		vet[iCont]=0;
	}
	
	for(iCont = 0; iCont <=20; iCont++){
		printf("Posicao %d,valor = %d\n", iCont, vet[iCont]);
	}
}

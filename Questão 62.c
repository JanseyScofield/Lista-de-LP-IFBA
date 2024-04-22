/*Faça um programa em C que leia um array de 10 posições e conte quantos números pares são elementos do array. Imprima esta quantidade*/

#include <stdio.h>

main(){
	int iCont, vet[10], qtdPar;
	qtdPar = 0;
	for(iCont=0; iCont <10; iCont++){
		scanf("%d", &vet[iCont]);
		if(vet[iCont] % 2  == 0)
			qtdPar++;
	}
	printf("A quatidade de numeros pares: %d.", qtdPar);
}

/*Escreva um programa que ordene um array de inteiros de 15 posições utilizando o método da bolha (select sort).*/

#include <stdio.h>

main(){
	int vet[15], aux, iCont, jCont;
	
	for(iCont = 0; iCont < 15; iCont++){
		scanf("%d", &vet[iCont]);
	}
	
	for(iCont = 0; iCont < 15; iCont++){
		for(jCont = 0; jCont < 14; jCont++){
			if(vet[jCont] > vet[jCont+1]){
				aux = vet[jCont];
				vet[jCont] = vet[jCont+1];
				vet[jCont+1] = aux;
			}
		}
	}
	
	for(iCont = 0; iCont < 15;iCont++){
		printf("%d\n", vet[iCont]);
	}
}

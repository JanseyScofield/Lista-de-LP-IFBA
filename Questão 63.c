/* Escreva um programa que leia dois vetores de números reais de mesma dimensão (10 posições), e imprima o vetor resultante da soma destes vetores.*/

#include <stdio.h>

main(){
	float vet1[10],vet2[10],somaVets;
	int iCont;
	
	for(iCont = 0; iCont < 10; iCont++){
		printf("Digite o valor da posicao %d do vetor 1: ", iCont);
		scanf("%f", &vet1[iCont]);
		printf("Digite o valor da posicao %d do vetor 2: ", iCont);
		scanf("%f", &vet2[iCont]);
	}
	
	somaVets = 0;
	for (iCont = 0; iCont < 10; iCont++){
		somaVets +=  vet1[iCont] + vet2[iCont];
	}
	printf("%.2f",  somaVets);
}

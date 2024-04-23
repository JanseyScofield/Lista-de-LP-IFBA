/* Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro 
vetor*/

#include <stdio.h>

main(){
	int vet1[10],vet2[10],vet3[10], iCont;
	
	for(iCont = 0;iCont <10 ; iCont++){
		printf("Digite o numero de posicao %d do vetor 1: ", iCont);
		scanf("%d",& vet1[iCont]);
		printf("Digite o numero de posicao %d do vetor 2: ", iCont);
		scanf("%d",&vet2[iCont]);
		
		if(vet1[iCont]>=vet2[iCont])
			vet3[iCont] = vet1[iCont];
		else
			vet3[iCont] = vet2[iCont];
			
	}
	
	for(iCont = 0; iCont < 10; iCont++)
		printf("Posicao %d do vetor 3 eh %d\n", iCont, vet3[iCont]);
}

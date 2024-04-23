/* Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre 
no vetor.*/

#include <stdio.h>

main(){
	int vet[15],iCont, num, qtdDeVezes;
	
	for(iCont = 0; iCont < 15; iCont++)
		scanf("%d", &vet[iCont]);
	
	scanf("%d", &num);
	
	qtdDeVezes = 0;
	for(iCont = 0; iCont < 15; iCont++){
		if(vet[iCont] == num)
			qtdDeVezes++;
	}
	
	printf("%d", qtdDeVezes);
}

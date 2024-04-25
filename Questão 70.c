/* Escreva um programa que carregue um array com tamanho variável. O tamanho máximo do array é de 100 posições (carga de array com sentinela).*/

#include <stdio.h>

main(){
	int vet[100], sentinela, iCont;
		
	scanf("%d",&sentinela);
	
	vet[sentinela] = -1;
	
	for(iCont = 0; vet[iCont] != -1; iCont++){
		vet[iCont] = 0;
		printf("%d\n", vet[iCont]);
	}

}

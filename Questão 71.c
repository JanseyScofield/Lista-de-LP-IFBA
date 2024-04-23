/*Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou  -1 caso o valor
não ocorra no vetor (Busca Sequencial)*/

#include <stdio.h>

main(){
	int vet[10],iCont, num, resultado;
	
	for(iCont = 0; iCont < 10; iCont++)
		scanf("%d",&vet[iCont]);
	
	printf("Digite o numero para desejado: ");
	scanf("%d",&num);
	
	for(iCont = 0;iCont < 10; iCont++){
		if(vet[iCont] == num){
			resultado  =  iCont;
			break;
		}
		else
			resultado = -1;
	}
	printf("Posicao %d.", resultado);
}

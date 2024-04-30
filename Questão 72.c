/* Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no 
vetor ou -1 caso o valor não ocorra no vetor (Busca Binária).*/

#include <stdio.h>

main(){
	int vet[10], iCont, meio,inicio = 0, fim = 9, num;
	int posicao = -1;
	
	for(iCont = 0; iCont < 10; iCont++)
		scanf("%d",  &vet[iCont]);
	printf("Digite um valor para buscar: ");
	scanf("%d", &num);
	jCont = 0;
	
	while(inicio <= fim){
		meio = (inicio + fim)/2;
		
		if(vet[meio] == num){
			posicao = meio;
			break;
		}
		else if(vet[meio] > num){
			fim = meio - 1;
		}
		else {
			inicio = meio +1;
		}
	}
	
    printf("%d", posicao);
}

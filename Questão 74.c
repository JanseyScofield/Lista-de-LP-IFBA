/* Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve fornecer as seguintes operações:
a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array*/

#include <stdio.h>

main(){
	int vet[30], escolha, iCont, num, posicao;
	
	escolha = 0;
	for(iCont = 0;  iCont < 30; iCont++)
		vet[iCont] = 0;
	while(escolha!=6){
		for(iCont = 0;  iCont < 30; iCont++){
			if(vet[iCont] == 0)
				printf("[ ]");
			else
				printf("[%d]",  vet[iCont]);
		}
		printf("\n[1] Inserir um elemento no final do array\n[2] Inserir um elemento em uma dada posicao do array\n[3] Remover um elemento na posicao indicada\n[4] Remover todos os elementos iguais a posicao indicada\n[5] Gerar novo array sem dupliciade a partir desse array\n[6] Para sair.\n");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:
				printf("Digite o numero desejado: ");
				scanf("%d", &num);
				for(iCont =  30;  iCont > 0; iCont--){
						if(vet[iCont] == 0){
							vet[iCont] = num;
							break;
						}
				}
				break;
			case 2:
				printf("Qual numero deseja adicionar? ");
				scanf("%d",  &num);
				printf("Em qual posicao? ");
				scanf("%d",  &posicao);
				while(vet[posicao] != 0){
					printf("Ja ha um elemento nessa posicao. Escolha outra vazia: ");
					scanf("%d",  &posicao);
				}
				vet[posicao] = num;
				break;
			case 3:
				printf("Em qual posicao? ");
				scanf("%d",  &posicao);	
				while(vet[posicao]  ==  0){
					printf("Nao  ha elementos nessa posicao. Escolha outra: ");
					scanf("%d",  &posicao);	
				}
				vet[posicao]  = 0;
				break;
			case 4:
				printf("Qual numero voce quer que seja removido do vetor? ");
				scanf("%d", &num);
				for(iCont = 0;  iCont <30; iCont++){
					if(vet[iCont] == num){
						vet[iCont] = 0;
					}
				}
				break;
			case 5:
				int jCont;
				
				for(iCont = 0;  iCont < 30;  iCont++){
					for(jCont =  iCont + 1; jCont < 29; jCont++){
						if(vet[iCont] == vet[jCont])
							vet[jCont] = 0;
					}
				}
				break;		
		}
		}
	}

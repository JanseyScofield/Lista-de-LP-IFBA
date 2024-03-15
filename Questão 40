/*Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o
numero por extenso.*/

#include <stdio.h>

main(){
	int num, uni, dez;
	scanf("%d", &num);
	
	dez = num%100/10;
	uni = num%10;
	if (num == 100){
		printf("Cem.");
	}
	else if(dez == 1){
		switch (uni){
			case 0:
				printf("Dez.");
				break;
			case 1:
				printf("Onze.");
				break;
			case 2:
				printf("Doze.");
				break;
			case 3:
				printf("Treze.");
				break;
			case 4:
				printf("Catorze.");
				break;
			case 5:
				printf("Quinze.");
				break;
			case 6:
				printf("Dezesseis.");
				break;
			case 7:
				printf("Dezessete.");
				break;  
			case 8:
				printf("Dezoito.");
				break;
			case 9:
				printf("Dezenove.");
		}
	}
	else  if (dez >= 2 && uni >= 0 ){
		switch(dez){
			case 2:
				printf("Vinte");
				break;
			case 3:
				printf("Trinta");
				break;
			case 4:
				printf("Quarenta");
				break;
			case 5:
				printf("Cinquenta");
				break;
			case 6:
				printf("Sessenta");
				break;
			case 7:
				printf("Setenta");
				break;
			case 8:
				printf("Oitenta");
				break;
			case 9:
				printf("Noventa");
		}
	}
	if (dez > 1 && uni > 0){
		printf(" e ");
	}
	if (dez != 1){
		switch(uni){
			case 1:
				printf("Um.");
				break;
			case 2:
				printf("Dois.");
				break;
			case 3:
				printf("Três.");
				break;
			case 4:
				printf("Quatro.");
				break;
			case 5:
				printf("Cinco.");
				break;
			case 6:
				printf("Seis.");
				break;
			case 7:
				printf("Sete.");
				break;
			case  8:
				printf("Oito.");
				break;
			case 9:
				printf("Nove.");
		}
	}
	
}

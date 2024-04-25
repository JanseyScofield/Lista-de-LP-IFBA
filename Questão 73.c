/*Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima: 
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média*/


#include <stdio.h>

main(){
	int vet[20],vetModa[20], moda, iCont, jCont;
	int aux,kCont;
	float media, mediana;
	
	media = 0;
	for(iCont  = 0; iCont < 20; iCont++){
		scanf("%d", &vet[iCont]);
		media+=vet[iCont];
	}
	media/=20.0;

	for(iCont =  0 ; iCont < 20; iCont++){	
		for(jCont = 1; jCont < 19; jCont++){
			if(vet[jCont] > vet[jCont + 1]){
				aux = vet[jCont];
				vet[jCont] =  vet[jCont + 1];
				vet[jCont + 1] = aux;
			}
		}
	}
	
	mediana = ((float)vet[9] + vet[10])/2.00;


	aux = 0;

	for(iCont = 0;  iCont < 20; iCont++){
		kCont  = 0;
		for(jCont = 0; jCont < 30; jCont++){
			if(vet[iCont] == vet[jCont]){
				kCont ++;
			}
		}
		if(kCont >  moda){
			moda = kCont;
			vetModa[0] = vet[iCont];
		}
		else if(kCont ==  moda){
			aux ++;
			vetModa[aux] = vet[iCont];
		}
	}
	printf("Media: %.2f, ", media);
	printf("mediana:  %.2f, ", mediana);
	printf("moda :");
	for(iCont = 0; iCont  <= aux; iCont++){
		if(vetModa[iCont] !=  vetModa[iCont+1])
			printf("%d", vetModa[iCont]);
	}
}

/*Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima: 
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média*/


#include <stdio.h>

main(){
	int vet[20],frquencia[20], moda, mediana, iCont;
	int aux;
	float media;
	
	media = 0;
	for(iCont  = 0; iCont < 20; iCont++){
		scanf("%d", &vet[iCont]);
		media+=vet[iCont];
	}
	media/=20.0;
	
	for(iCont =  0 ; iCont < 19; iCont){	
		if(vet[iCont] > ivet[iCont + 1]){
			aux = vet[iCont];
			vet[iCont] =  vet[iCont + 1];
			vet[iCont + 1] = aux;
		}
	}
	
	mediana = (vet[9] + vet[10])/2;
}

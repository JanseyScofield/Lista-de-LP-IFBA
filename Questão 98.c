/*Escrever um algoritmo e implementá-lo em linguagem C que dada uma matriz N X N, 
contendo, em cada linha, as idades do homem e da mulher no casamento, criar uma 
matriz de freqüência de idade de casamento, com as contagens para cada combinação de 
idades. As idades variam de 18 até 30. Os pares de idade devem ser lidos até que se 
informe um valor inválido para a idade de qualquer dos dois nubentes. Em seguida, o 
programa deverá informar:
(1) Qual a idade mais freqüente de casamento dos homens 
(2) Qual a idade mais freqüente de casamento das mulheres 
(3) Qual a combinação mais freqüente de idades de casamento*/
//Continuar
#include <stdio.h>
#define TAM 12

main(){
	int idadeCasais[TAM][TAM];
	int idadeMasculina, idadeFeminina;
	int frequencia, maiorFrequencia,idadeMaisFrequenteHomens;
	int idadeMaisFrequenteMulheres, idadeMaisFrequenteCasais[2];
	int iCont, jCont;
	
	for(iCont = 0; iCont < TAM; iCont++)
		for(jCont = 0; jCont < TAM; jCont++)
			idadeCasais[iCont][jCont] = 0;	
			
	do{
		scanf("%d %d",&idadeMasculina, &idadeFeminina);
		if((idadeMasculina < 18 || idadeMasculina > 30) || (idadeFeminina < 18 || idadeFeminina > 30))
			break;
		idadeCasais[idadeMasculina - 18][idadeFeminina - 18]++;
	}while(1);
    
	maiorFrequencia = 0;		
	for(iCont = 0; iCont < TAM; iCont++){
		frequencia = 0;
		for(jCont = 0; jCont < TAM; jCont++)
			frequencia += idadeCasais[jCont][iCont];		
		if(frequencia > maiorFrequencia){
			maiorFrequencia = frequencia;
			idadeMaisFrequenteHomens = iCont + 18;
		}
	}
	
	maiorFrequencia = 0;		
	for(iCont = 0; iCont < TAM; iCont++){
		frequencia = 0;
		for(jCont = 0; jCont < TAM; jCont++)
			frequencia += idadeCasais[iCont][jCont];		
		if(frequencia > maiorFrequencia){
			maiorFrequencia = frequencia;
			idadeMaisFrequenteMulheres = iCont + 18;
		}
	}
	
	maiorFrequencia = 0;
	for(iCont = 0; iCont < TAM; iCont++){
		for(jCont = 0; jCont < TAM; jCont++)
			frequencia = idadeCasais[jCont][iCont];		
			if(frequencia > maiorFrequencia){
				maiorFrequencia = frequencia;
				idadeMaisFrequenteCasais[0] = iCont + 18;
				idadeMaisFrequenteCasais[1] =  jCont + 18;
			}
	}
	
	printf("%d %d \n",idadeMaisFrequenteHomens,  idadeMaisFrequenteMulheres);
	printf("%d %d",idadeMaisFrequenteCasais[0],  idadeMaisFrequenteCasais[1]);
}
		

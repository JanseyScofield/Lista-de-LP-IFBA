/*Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de 
cada uma das duas quinzenas.*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	float dias[29], maiorI, menorI,somaQ1, somaQ2;
	int iCont, maiorDia,  menorDia;
	
	maiorDia  =  menorDia = 1;
	printf("Digite o índice pluviométrico do dia 1: ");
	scanf("%f", &dias[0]);
	maiorI = dias[0];
	menorI = dias[0];
	
	for(iCont = 1; iCont <= 29; iCont++){
		printf("Digite o índice pluviométrico do dia %d: ", iCont + 1);
		scanf("%f", &dias[iCont]);
		fflush(stdin);
		if(dias[iCont] > maiorI)
			maiorDia = iCont + 1;
		if(dias[iCont] < menorI)
			menorDia =iCont + 1;
		printf("%d %d\n", maiorDia, menorDia);
	}
	
	somaQ1 = 0;

	for(iCont = 0; iCont < 15; iCont++)
		somaQ1 += dias[iCont];
	
	somaQ2 = 0;
	for(iCont = 15; iCont <= 29; iCont++)
		somaQ2 += dias[iCont];
	
	printf("O dia que menos choveu foi dia %d.\n", menorDia);
	printf("O dia que mais choveu foi dia %d.\n", maiorDia);
	printf("A média da primeira quinzena do mês de junho foi de  %.2f.\n", somaQ1/15);
	printf("A média da segunda quinzena do mês junho foi de  %.2f.\n", somaQ2/15);
}

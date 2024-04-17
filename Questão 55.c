/*Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores próprios do outro. Os divisores próprios de um número positivo N são todos os divisores 
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e 220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. 
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142, 
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 
18416 são amigos, por exemplo).*/

#include <stdio.h>
main(){
	int num1,num2,somaDiv1,somaDiv2,iCont;
	
	scanf("%d %d", &num1, &num2);
	
	somaDiv1 = 0;
	for(iCont = 1; iCont < num1; iCont++){
		if(num1 % iCont == 0){
			somaDiv1 += iCont;
		}
	}
	
	somaDiv2 = 0;
	for(iCont = 1; iCont < num2; iCont++){
		if(num2 % iCont == 0){
			somaDiv2 += iCont;
		}
	}
	
	if((somaDiv1 == num2) && (somaDiv2 == num1)){
		printf("Os valores %d e %d sao amigos.", num1, num2);
	}
	else{
		printf("Nao sao amigos.");
	}
}

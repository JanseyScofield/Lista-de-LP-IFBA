/*Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o 
próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 
4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28)*/

#include <stdio.h>
main(){
	int num, somaDiv, iCont;
	
	scanf("%d", &num);
	somaDiv = 0;
	for(iCont = 1; iCont < num; iCont ++){
		if(num%iCont == 0){
			somaDiv+=iCont;
		}
	}
	
	if(somaDiv == num){
		printf("%d eh um numero perfeito.",  num);
	}
	else{
		printf("%d nao eh um numero perfeito.",  num);
	}
}

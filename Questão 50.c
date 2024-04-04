/*Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o lançamento de um par de dados tenha como resultado da soma dos valores dos 
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve imprimir as seguintes combinações: 
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1
*/

#include <stdio.h>

main(){
	int num,d1,d2;
	scanf("%d",&num);
	d1=1;	
	while(d1<=6 ){
		d2=1;
		while(d2<=6){
			if(d1+d2==num){
				printf("%d %d\n", d1,d2);
			}
			d2++;
		}
		d1++;
	}
}

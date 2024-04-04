/* Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado.*/

#include <stdio.h>

main(){
	int A,B, quociente;
	scanf("%d %d",  &A, &B);
	quociente = 0;
	while(A>=B){
		A-=B;
		quociente++;
	}
	printf("%d", quociente);
}

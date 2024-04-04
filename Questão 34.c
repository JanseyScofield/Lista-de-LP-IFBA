/*Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido*/

#include <stdio.h>

main (){
	float sal,  empresLim, empresSoli, valorParc, parc, limParc;
	scanf("%f", &sal);
	scanf("%f", &empresSoli);
	scanf("%f", &parc);
	
	empresLim = sal*10;
	if (empresSoli > empresLim){
		printf("O emprestimo solicitado e incompativel com  sua renda.");
	}
	else{
		valorParc = empresSoli/parc;
		limParc = sal*30/100;
		if (valorParc > limParc){
			printf("O valor da parcela esta incompativel com sua renda.");
		}
		else{
			printf("O emprestimo pode ser solicitado.");
		}
	}
}

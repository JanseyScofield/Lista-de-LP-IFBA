/*Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.*/

#include <stdio.h>

main(){
	float valorF, acre, descM750;
	int tipo;
	scanf("%d", &tipo);
	scanf("%f", &acre);
	switch(tipo){
		case 1:
			valorF = acre*50;
			if(acre>1000){
				valorF-= (valorF*5/100);
			}
			if(valorF>750){
				descM750 = (valorF-750)*10/100;
				valorF-=descM750;
			}
			break;
		case 2: 
			valorF = acre*100;
			if(acre>1000){
				valorF-= (valorF*5/100);
			}
			if(valorF>750){
				descM750 = (valorF-750)*10/100;
				valorF-=descM750;
			}
			break;
		case 3: 
			valorF = acre*150;
			if(acre>1000){
				valorF-= (valorF*5/100);
			}
			if(valorF>750){
				descM750 = (valorF-750)*10/100;
				valorF-=descM750;
			}
			break;
		case 4: 
			valorF = acre*250;
			if(acre>1000){
				valorF-= (valorF*5/100);
			}
			if(valorF>750){
				descM750 = (valorF-750)*10/100;
				valorF-=descM750;
			}
			break;
	}
	printf("%.2f",  valorF);
}

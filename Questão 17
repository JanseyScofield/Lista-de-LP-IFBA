/*. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).*/

#include <stdio.h>
#include <locale.h>

 main(){
	setlocale(LC_ALL,"");
	int valorT, cd100, cd50, cd20, cd10, cd5, cd2, cd1, resto;
	
	printf("Digite o valor em reais que você deseja sacar:\n");
	scanf("%d", &valorT);
	
	cd100 = valorT/100;
	resto = valorT%100;
	cd50 = resto/50;
	resto %= 50;
	cd20 = resto/20;
	resto %= 20;
	cd10 = resto/10;
	resto %= 10;
	cd5 = resto/5;
	resto %= 5;
	cd2  = resto/2;
	resto %= 2;
	cd1 = resto/1;
	
	printf("O saque, em quantidade de cédulas, será com:\n");
	printf("%d de R$ 100;\n", cd100);
	printf("%d de R$ 50;\n", cd50);
	printf("%d de R$ 20;\n", cd20);
	printf("%d de R$ 10;\n", cd10);
	printf("%d de R$ 5;\n", cd5);
	printf("%d de R$ 2;\n", cd2);
	printf("%d de R$ 1.\n", cd1);
}

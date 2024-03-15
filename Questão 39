/*Em diversas situações, é útil o uso de dígitos verificadores. Dígito
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do
número, começando da direita para a esquerda (do dígito menos significativo para o
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o
valor do dígito verificador quando este é 10. Escreva um programa que receba um
número com os 4 primeiros dígitos de uma agência e imprima o número da agência
completo (numero – dv).*/

#include <stdio.h>

main(){
	int num, alg1, alg2, alg3, alg4, somaMul, dv;
	scanf("%d", &num);
	
	alg1 = num/1000;
	alg2 = num%1000/100;
	alg3 = num%100/10;
	alg4 = num%10;
	
	somaMul = (alg1*5) + (alg2*4) + (alg3*3) + (alg4*2);
	dv = 11 - (somaMul%11);
	if (dv == 10){
		printf("%d-X", num);
	}
	else{
		printf("%d-%d", num,  dv);
	}
}

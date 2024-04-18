#include <stdio.h>

main(){
	float e, termo, constante;
	int nTermos, iCont, jCont;
	
	scanf("%d", &nTermos);
	
	e = 1;
	for(iCont = 1; iCont <= nTermos; iCont++){
		termo = iCont;
		constante = termo;
		for(jCont = 1; jCont < constante; jCont ++){
			termo*=jCont;
		}
		e +=  1/termo;
	}
	printf("e = %f", e);
}

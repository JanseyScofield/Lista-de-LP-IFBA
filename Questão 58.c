#include <stdio.h>

main(){
	int jCont, posTermo, constante, N;
	double termo, S;
	
	scanf("%d", &N);
	
	S = 1;
	for(posTermo = 2; posTermo <= N; posTermo++){
		termo = 3;
		termo*=termo*termo;
		S+= posTermo%2 == 1 ? 1/termo : -1/termo;
		printf("%f\n",  S);
		termo+=2;
	}
}

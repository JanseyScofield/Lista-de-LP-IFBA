#include <stdio.h>

main(){
	long unsigned int vetConceitos[5], qtdVezes[5];
	int iCont,jCont, conceito;
	long unsigned int base;
	
	for(iCont = 0; iCont <5; iCont++){
		qtdVezes[iCont] = 1;
		vetConceitos[iCont] = 0;
	}
		
	for(iCont = 1; iCont <= 20; iCont++){
		scanf("%d", &conceito);
		base = 1;
		switch(conceito){
			case 1:
				if(qtdVezes[0] > 1){
					for(jCont = 2;  jCont <= qtdVezes[0];jCont++)
						base*=10;
				}
				vetConceitos[0] += 1*base;
				qtdVezes[0] ++;
				break;
			case 2:
				if(qtdVezes[1] > 1){
					for(jCont = 2;  jCont <= qtdVezes[1];jCont++)
						base*=10;
				}
				vetConceitos[1] += 2*base;
				qtdVezes[1] ++;
				break;
			case 3:
				if(qtdVezes[2] > 1){
					for(jCont = 2;  jCont <= qtdVezes[2];jCont++)
						base*=10;
				}
				vetConceitos[2] += 3*base;
				qtdVezes[2] ++;
				break;
			case 4:
				if(qtdVezes[3] > 1){
					for(jCont = 2;  jCont <= qtdVezes[3];jCont++)
						base*=10;		
				}
				vetConceitos[3] += 4*base;
				qtdVezes[3] ++;
				break;
			case 5:
				if(qtdVezes[4] > 1){
					for(jCont = 2;  jCont <= qtdVezes[4];jCont++)
						base*=10;
						
				}
				vetConceitos[4] += 5*base;
				qtdVezes[4] ++;
				break;
		}
	}
	for(iCont = 0; iCont < 5; iCont ++)
		printf("%d\n", vetConceitos[iCont]);
}

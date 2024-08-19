// Elabore um programa em C, para ler valores e armazená-los em uma matriz 5 x 5. Após o 
// programa  deverá  responder  se  a  matriz  é  ou  não  uma  matriz  simétrica.  Uma  matriz 
// simétrica possui a mesma composição de valores abaixo e acima da diagonal principal.

#include <stdio.h>

void main(){
    int matriz[5][5] = {{1,2,3,4,5},
                        {2,6,7,8,9},
                        {3,7,10,11,12},
                        {4,8,11,13,14},
                        {5,9,12,14,15}};
    int iCont, jCont;
    int simetrica = 1;

    for(iCont = 0; iCont < 5; iCont++)
        for(jCont = 0; jCont <5; jCont++){
            if(iCont == jCont)
                continue;
            else if(matriz[iCont][jCont] != matriz[jCont][iCont])
                simetrica = 0;
        }
    if(simetrica)
        printf("Simetrica");
    else
        printf("Nao eh simetrica");
}

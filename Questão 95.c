// Escrever  um  algoritmo  e  implementá-lo  em  linguagem  C  que  linearize  uma  matriz  de  6  por  6,  colocando  os  valores  contidos  nela  em  um  vetor  de  
// 36  elementos  e  mostrar  o  conteúdo do vetor. 

#include <stdio.h>
#define QTD_LINHA 6
#define QTD_COLUNA 6

void main(){
    int matriz[QTD_LINHA][QTD_COLUNA];
    int vetor[QTD_LINHA * QTD_COLUNA];
    int iCont, jCont, kCont;

    for(iCont = 0; iCont < QTD_LINHA; iCont++)
        for(jCont = 0; jCont < QTD_COLUNA; jCont++)
            scanf("%d", &matriz[iCont][jCont]);

    kCont = 0;
    for(iCont = 0; iCont < QTD_LINHA; iCont++)
        for(jCont = 0; jCont < QTD_COLUNA; jCont++){
            vetor[kCont] = matriz[iCont][jCont];
            kCont++;
        }

    for(iCont = 0; iCont < kCont; iCont++)
        printf("%d ", vetor[iCont]);
}

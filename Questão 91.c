//   Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5. 
// Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e 
// somaColunas.  Em  cada  posição  do  vetor  somaLinhas  deverá  ser  armazenada  a  soma  da 
// linha correspondente na matriz A. Da mesma forma, em cada posição do vetor 
// somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.

#include <stdio.h>

void main(){
    int matriz[5][5];
    int somaLinhas[5], somaColunas[5];
    int iCont, jCont, kCont;

    for(iCont = 0; iCont < 5; iCont++)
        for(jCont = 0; jCont < 5; jCont++)
            scanf("%d", &matriz[iCont][jCont]);

    for(iCont = 0; iCont < 5; iCont++)
        somaLinhas[iCont] = somaColunas[iCont] = 0;
    
    for(jCont = 0; jCont <  5; jCont++)
        for(kCont = 0; kCont < 5; kCont++)
            somaLinhas[jCont] += matriz[jCont][kCont];
    
    for(jCont = 0; jCont <  5; jCont++)
        for(kCont = 0; kCont < 5; kCont++)
            somaColunas[jCont] += matriz[kCont][jCont];
    
    for(iCont = 0; iCont < 5; iCont++)
        printf("Soma linha %d: %d \n", iCont, somaLinhas[iCont]);
    
    for(iCont = 0; iCont < 5; iCont++)
        printf("Soma coluna %d: %d \n", iCont, somaColunas[iCont]);
}


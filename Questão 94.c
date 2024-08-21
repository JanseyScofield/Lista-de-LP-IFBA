// Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores 
// inteiros  6  por  6  e  um  valor  inteiro    qualquer,  posteriormente  multiplicar  a  matriz  pelo valor lido e colocar o resultado na própria matriz.  

#include <stdio.h>
#define TAM_MATRIZ 6

void main(){
    int matriz[TAM_MATRIZ][TAM_MATRIZ];
    int num;
    int iCont, jCont;

    for(iCont =  0; iCont < TAM_MATRIZ; iCont++)
        for(jCont = 0; jCont < TAM_MATRIZ; jCont++)
            scanf("%d", &matriz[iCont][jCont]);

    printf("Digite um valor para multiplicar:");
    scanf("%d", &num);

    for(iCont =  0; iCont < TAM_MATRIZ; iCont++)
        for(jCont = 0; jCont < TAM_MATRIZ; jCont++)
            matriz[iCont][jCont] *= num;

    for(iCont =  0; iCont < TAM_MATRIZ; iCont++){
        for(jCont = 0; jCont < TAM_MATRIZ; jCont++)
            printf("%d ", matriz[iCont][jCont]);
            printf("\n");
    }
}

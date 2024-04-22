/*Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em um segundo vetor e imprima este último*/


#include <stdio.h>

int main()
{
    int vet1[10], vet2[10], iCont;
    
    for(iCont = 0; iCont < 10; iCont++){
        scanf("%d", &vet1[iCont]);
        vet2[iCont] = vet1[iCont];
    }
    
    for(iCont = 0;iCont < 10; iCont++)
        printf("%d\n", vet2[iCont]);
    return 0;
}

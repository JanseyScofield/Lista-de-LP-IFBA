// Escreva  um  número  que  leia  um  número  em  Romano  e  imprima  o  equivalente  em  
// decimal (base 10)

#include <stdio.h>
#define TAM_STR 50

void main(){
    char numRomanos[7] =  {'I', 'V','X', 'L', 'C', 'D', 'M'};
    int numDecimais[7] =  {1, 5, 10, 50, 100, 500, 1000};
    char entrada[TAM_STR];
    int decimal = 0,valorAtual, valorAnterior;
    int iCont, posicao;

    fgets(entrada,TAM_STR, stdin);

    for(iCont = 0; entrada[iCont] != '\n'; iCont++){
        for(posicao = 0; posicao < 7; posicao++)
            if(entrada[iCont] == numRomanos[posicao])
                break;
            valorAtual = numDecimais[posicao];
        decimal += valorAtual <= valorAnterior ? valorAtual : -(2*valorAnterior) + valorAtual;
        valorAnterior = valorAtual;
    }

    printf("%d", decimal);
}

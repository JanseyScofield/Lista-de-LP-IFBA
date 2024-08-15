// Escreva um programa em C, que gere a substring de uma string original, dado a posição inicial e a final da substring

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string1[TAM_STR], string2[TAM_STR];
    int posInicial, posFinal, iCont;

    fgets(string1, TAM_STR, stdin);
    scanf("%d %d", &posInicial, &posFinal);

    for(iCont = 0; posInicial <= posFinal; iCont++, posInicial++)
        string2[iCont] = string1[posInicial];
    string2[iCont] = '\0';
    printf("%s", string2);
}

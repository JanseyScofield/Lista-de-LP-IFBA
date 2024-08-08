// Escreva  um  programa  em  C,  que  leia  uma  string  e  um  caracter  e  conte  o  número  de 
// ocorrências do caracter lido na string.

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string[TAM_STR];
    char caracter;
    int iCont, jCont;

    fgets(string, TAM_STR, stdin);
    scanf("%c", &caracter);

    for(iCont = 0, jCont = 0; string[iCont]; iCont++)
        if(string[iCont] == caracter)
            jCont++;

    printf("%d",jCont);
}

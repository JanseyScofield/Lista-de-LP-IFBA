// Escreva  um  programa  em  C,  que  dado  uma  string,  crie  uma  nova  string  contendo  na 
// ordem em que aparecem no string dado, as vogais no começo e as consoantes no final

#include <stdio.h>
#define TAM_STR 50

void main(){
    char vogais[10] = {'A', 'a','E','e','I','i', 'O', 'o', 'U', 'u'};
    int vogal;
    char string[TAM_STR],stringOrdenadaConsoantes[TAM_STR]; 
    char stringOrdenada[TAM_STR],  stringOrdenadaVogais[TAM_STR];
    int iCont, jCont, kCont, lCont;

    fgets(string, TAM_STR, stdin);

    for(iCont = 0, jCont = 0, lCont = 0; string[iCont] != '\n'; iCont++){
        vogal = 0;
        for(kCont = 0; kCont < 10; kCont++)
            if(string[iCont] == vogais[kCont]){
                vogal = 1;
                break;
            }
        if(vogal){
            stringOrdenadaVogais[jCont] = string[iCont];
            jCont++;
        }
        else{
            stringOrdenadaConsoantes[lCont] = string[iCont];
            lCont++;
        }
    }
    stringOrdenadaVogais[jCont] = '\0';
    stringOrdenadaConsoantes[lCont] = '\0';
    
    for(iCont = 0; stringOrdenadaVogais[iCont]; iCont++)
        stringOrdenada[iCont] = stringOrdenadaVogais[iCont];

    for(jCont = 0; stringOrdenadaConsoantes[jCont]; iCont++, jCont++)
         stringOrdenada[iCont] = stringOrdenadaConsoantes[jCont];

    stringOrdenada[iCont]  = '\0';

    printf("%s", stringOrdenada);
}

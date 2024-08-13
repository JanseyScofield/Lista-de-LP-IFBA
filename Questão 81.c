// Escreva  um  programa  em  C  que  normalize  uma  string  lida,  em  uma  nova  string. 
// Normalizar  uma  string  é  o  processo  de  remover  os  espaços  excedentes  que  separam  as 
// palavras.

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string[TAM_STR], stringNormalizada[TAM_STR];
    int iCont, jCont;

    fgets(string,TAM_STR, stdin);

    for(iCont = 0, jCont = 0; iCont <= TAM_STR; iCont++){
        if((string[iCont] == ' ' && string[iCont + 1] != ' ') || string[iCont] != ' '){
            stringNormalizada[jCont] = string[iCont];
            jCont++;
        }
    }

    stringNormalizada[jCont] = '\0';

    printf("%s", stringNormalizada);
}

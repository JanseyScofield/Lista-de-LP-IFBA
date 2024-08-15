// Escreva um programa em C, que dada uma string (normalizada), imprima a maior palavra dela. 

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string[TAM_STR], maiorPalavra[TAM_STR];
    int iCont, jCont, kCont, lCont, tamanhoMaiorPalavra = 0;

    fgets(string, TAM_STR, stdin);

    for(iCont = 0, jCont = 0; string[iCont] != '\0'; iCont++){
        if(string[iCont] !=  ' ' && string[iCont] !=  '\n')
            jCont++;
        else if(jCont > tamanhoMaiorPalavra){
            tamanhoMaiorPalavra = jCont;          
            for(kCont = 0, lCont = iCont - jCont; kCont < jCont; kCont++, lCont ++)
                maiorPalavra[kCont] = string[lCont];
            maiorPalavra[kCont] = '\0';
            jCont = 0;
        }
        else
            jCont = 0;
    }

    printf("%s", maiorPalavra);
}

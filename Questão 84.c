// Escreva um programa em C que verifique se uma string normalizada é palíndrome (os mesmos caracteres quando lida da direita para a esquerda). 

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string[TAM_STR], string2[TAM_STR];
    int palindrome = 1;
    int tamanhdoString;
    int iCont, jCont;

    fgets(string, TAM_STR,stdin);

    for(tamanhdoString = 0; string[tamanhdoString]; tamanhdoString++){

    }
    
    for(iCont = tamanhdoString - 2, jCont = 0 ; jCont < tamanhdoString; iCont--,jCont++)
        string2[jCont] = string[iCont];
    
    for(iCont = 0; string[iCont + 1]; iCont++){
        palindrome = string[iCont] == string2[iCont] ? 1 : 0;
        if(!palindrome)
            break;
    }

    if(palindrome)
        printf("Eh palindromo");
    else
        printf("Nao eh palindromo");
}

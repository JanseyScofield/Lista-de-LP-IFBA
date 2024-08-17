//Escreva um programa em C, que coloque a string lida toda em caixa alta

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string[TAM_STR], STRING[TAM_STR];
    int iCont;

    fgets(string, TAM_STR, stdin);

    for(iCont = 0; string[iCont] != '\n'; iCont++){
        if(string[iCont] >= 'a' && string[iCont] <= 'z')
            STRING[iCont] = string[iCont] - 32;
        else
            STRING[iCont] = string[iCont];
    }
        STRING[iCont] = '\0';
        printf("%s", STRING);
}

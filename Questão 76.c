/*Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais
existem nesta string.*/

#include <stdio.h>
#define TAM_STR 50
int main()
{
    char string[TAM_STR];
    int iCont, jCont;
    
    fgets(string, TAM_STR, stdin);
    
    for(iCont = 0; string[iCont]; iCont++){
        if(string[iCont] == 'a' || string[iCont] == 'e' || string[iCont] == 'i' || string[iCont] == 'o' || string[iCont] == 'u')
            jCont++;
            if(string[iCont] == 'A' || string[iCont] == 'E' || string[iCont] == 'I' || string[iCont] == 'O' || string[iCont] == 'U')
            jCont++;
    }
    
    printf("%d", jCont);
    return 0;
}

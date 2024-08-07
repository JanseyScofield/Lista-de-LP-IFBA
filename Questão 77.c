/*Escreva um programa em C, que leia uma string, gere uma nova string com o texto
invertido e imprima esta nova string.*/

#include <stdio.h>
#define TAM_STR 50

int main()
{
    char string[TAM_STR], gnirts[TAM_STR];
    int iCont, jCont, tamanhoInputString = 0;
    
    fgets(string, TAM_STR, stdin);
    
    while(string[tamanhoInputString])
        tamanhoInputString++;
    
    tamanhoInputString--;
    
    for(iCont = 0, jCont = tamanhoInputString - 1; jCont >= 0; iCont++, jCont--)
        gnirts[iCont] = string[jCont];
        
    gnirts[iCont + 1] = '\0';
    
    printf("%s", gnirts);
    return 0;
}

// Escreva um programa em C, que gere a substring de uma string original, dado a posição 
// inicial e a final da substring. 

#include <stdio.h>
#define TAM_STR 50

void main(){
    char string1[TAM_STR], string2[TAM_STR];
    int iCont, jCont,posPrimeiroCaractere , posUltimoCaractere;

    fgets(string1, TAM_STR, stdin);
    scanf("%d", &posPrimeiroCaractere);
    scanf("%d", &posUltimoCaractere);

    for(iCont = posPrimeiroCaractere, jCont = 0; iCont <= posUltimoCaractere; iCont++, jCont++)
        string2[jCont] = string1[iCont];
    string2[posUltimoCaractere + 1] = '\0';
  
    printf("%s", string2);
}

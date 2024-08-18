// Escreva um programa em C, que gere uma string composta pelo último nome, seguido de virgula e as iniciais dos demais nomes (em ordem), seguida de ponto. Por exemplo, se a 
// string entrada for “Gabriel Garcia Marquez”, a string gerada deve ser “Marquez, G. G.”.

#include <stdio.h>
#define TAM_STR 100

void main(){
    char nome[TAM_STR];
    char referencia[TAM_STR];
    int iCont, jCont = 0, tamanhoNome;

    fgets(nome, TAM_STR, stdin);
    tamanhoNome = 0;
    while(nome[tamanhoNome] != '\n')
        tamanhoNome++;

    iCont = tamanhoNome - 1;
    while(nome[iCont] != ' ')
        iCont--;

    while(nome[iCont + 1] != '\n'){
        referencia[jCont] = nome[iCont + 1];
        jCont++;
        iCont++;
    }     
    referencia[jCont] = ',';
    jCont++;
    referencia[jCont] = nome[0];
    jCont++;
    referencia[jCont] = '.';
    jCont++;

    for(iCont = 1; nome[iCont - 1] != ' '; iCont++){
    }
        
    referencia[jCont] = nome[iCont];
    jCont++;
    referencia[jCont] = '.';
    jCont++;
    referencia[jCont] = '\0';

    printf("%s",  referencia);
}

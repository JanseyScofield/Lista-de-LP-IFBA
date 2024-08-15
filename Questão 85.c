//  Escreva um programa que leia uma string representando um número hexadecimal (base 
// 16) e imprima sua representação em decimal (base 10)

#include <stdio.h>
#define TAM_STR 50

int main()
{
    char numHex[TAM_STR], hexInvertido[TAM_STR];
    int iCont, jCont, tam_hex = 0;
    int peso, numDec = 0;
    
    fgets(numHex, TAM_STR, stdin);
    
    while(numHex[tam_hex + 1])
        tam_hex++;
        
    for(iCont = 0, jCont = tam_hex - 1; jCont >= 0 ; iCont ++, jCont --)
        hexInvertido[iCont] = numHex[jCont];
    hexInvertido[iCont] = '\0';
    
    for(iCont = 0; hexInvertido[iCont]; iCont++){
        peso = 1;
        for(jCont = 1; jCont <= iCont; jCont++)
            peso *= 16;
        if(hexInvertido[iCont] >= 'a' && hexInvertido[iCont] <= 'f')
            hexInvertido[iCont] -= 87;
        else if(hexInvertido[iCont] >= 'A' && hexInvertido[iCont] <= 'F')
            hexInvertido[iCont] -= 55;
        else
            hexInvertido[iCont] -= 48;
        numDec +=  hexInvertido[iCont] * peso;
    }
    
    printf("%d", numDec);
    return 0;
}

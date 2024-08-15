//  Escreva um número que leia um número em Romano e imprima o equivalente em 
// decimal (base 10)

#include <stdio.h>
#define TAM_STR 50

int main()
{
    char numRomano[TAM_STR];
    int iCont;
    int decimal = 0;
    
    fgets(numRomano,TAM_STR, stdin);
    
    for(iCont = 0; numRomano[iCont + 1]; iCont++){
        switch(numRomano[iCont]){
            case 'I':
               numRomano[iCont] = 1;
               break;
            case 'V':
               numRomano[iCont] = 5;
               break;
            case 'X':
               numRomano[iCont] = 10;
        }
        decimal += numRomano[iCont - 1] != 1? numRomano[iCont] : -2 + numRomano[iCont];
    }
    
    printf("%d", decimal);
    return 0;
}

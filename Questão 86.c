//  Escreva um número que leia um número em Romano e imprima o equivalente em 
// decimal (base 10)

#include <stdio.h>
#define TAM_STR 50

int main()
{
    char numRomano[TAM_STR];
    int iCont, valor, valorAnt = 0;
    int decimal = 0;
    
    fgets(numRomano,TAM_STR, stdin);
    
    for(iCont = 0; numRomano[iCont + 1]; iCont++){
        switch(numRomano[iCont]){
            case 'I':
               valor= 1;
               break;
            case 'V':
               valor = 5;
               break;
            case 'X':
               valor = 10;
            	break;
        	case 'L':
               valor= 50;
            	break;
            case 'C':
               valor = 100;
            	break;
            case 'D':
               valor = 500;
            	break;
            case 'M':
               valor = 1000;
        }
        decimal += valor <= valorAnt? valor : -(valorAnt * 2) + valor;
        valorAnt = valor;
    }
    
    printf("%d", decimal);
    return 0;
}

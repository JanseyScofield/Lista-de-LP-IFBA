//  Escreva um programa em C, que verifique se duas strings são iguais, independente da 
// caixa das letras. Por exemplo, este programa deve dizer que “Teste”é igual a “TeStE”.

#include <stdio.h>
#define TAM_STR 50

int main()
{
    char string1[TAM_STR], string2[TAM_STR];
    int iCont, tamStr1 = 0, tamStr2 = 0;
    int igual = 1;
    
    fgets(string1, TAM_STR, stdin);
    fgets(string2, TAM_STR, stdin);
    
    while(string1[tamStr1])
        tamStr1++;
        
    while(string2[tamStr2])
        tamStr2++;
    
    if(tamStr1 == tamStr2)
        for(iCont = 0; string1[iCont]; iCont++){
            if(string1[iCont] >= 'A' && string1[iCont] <= 'Z')
                string1[iCont] += 32;
            if(string2[iCont] >= 'A' && string2[iCont] <= 'Z')
                string2[iCont] += 32;
            if(string1[iCont] != string2[iCont]){
                igual = 0;
                break;
            }
        }
    else
       igual = 0; 
    
    if(igual)
        printf("Sao iguais!");
    else
        printf("Nao sao iguais!");
        
    return 0;
}

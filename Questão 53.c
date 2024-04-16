/* Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, eum país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escrevaum programa, que imprima o tempo necessário para que a população do país A ultrapasse 
a população do país B.*/
#include <stdio.h>

int main()
{
    int paisA, paisB, anos;
    
    paisA = 5000000;
    paisB = 7000000;
    anos = 0;
    
    while(paisA<=paisB){
        paisA+=paisA*3/100;
        paisB+=paisB*2/100;
        anos++;
    }
    printf("%d", anos);
    return 0;
}

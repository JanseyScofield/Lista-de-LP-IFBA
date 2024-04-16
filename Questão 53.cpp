
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

/*Escreva um programa que ordene um array de inteiros de 15 posições utilizando o método da bolha (booble
sort).*/

#include <stdio.h>

int main()
{
   int array[] = {233, 23,45,566,124, 128,2, 45, 12, 37};
   int aux;
   
   for(int iCont = 9; iCont > 0; iCont--){
       for(int jCont = iCont - 1; jCont >= 0; jCont--){
           if(array[iCont] < array[jCont]){
               aux = array[iCont];
               array[iCont] = array[jCont];
               array[jCont] = aux;
           }
           for(int kCont = 0; kCont < 10; kCont ++)
                printf("%d ", array[kCont]);
            printf("\n");
       }
   }
    return 0;
}

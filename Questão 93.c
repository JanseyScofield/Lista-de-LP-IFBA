// Faça um programa em C para ler valores e armazená-los em uma matriz D 5 x 5. A seguir 
// o  programa  deverá  calcular  a  soma  dos  valores  que  compõem  a  diagonal  principal  e  a 
// diagonal secundária da matriz

#include <stdio.h>

void main(){
        int matriz[5][5] = {{1,2,3,4,5},
                            {2,6,7,8,9},
                            {3,7,10,11,12},
                            {4,8,11,13,14},
                            {5,9,12,14,15}};
        
        int diagonalPrincipal = 0, diagonalSecundaria = 0, somaDiagonais;
        int iCont, jCont;

        for(iCont = 0; iCont < 5; iCont++)
            diagonalPrincipal += matriz[iCont][iCont];
        
        for(iCont = 0, jCont = 4; iCont < 5; iCont++, jCont--)
            diagonalSecundaria += matriz[jCont][iCont];

        somaDiagonais = diagonalPrincipal + diagonalSecundaria;
        printf("%d", somaDiagonais);
}

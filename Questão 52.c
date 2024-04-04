/*A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos
dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par
Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos. */

#include <stdio.h>

int main(){
    int n1, n2, n3, c, termo;
    scanf("%d %d", &n1, &n2);
    scanf("%d", &termo);
    c=1;
    while(c<=termo-2){
        if(c%2==0){
            n3=n1+n2;
        }
        else{
            n3=n1-n2;
        }
        n2=n1;
        n1=n3;
        printf("%d ", n3);
        c++;
    }
}

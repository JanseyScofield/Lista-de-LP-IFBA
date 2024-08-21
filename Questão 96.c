// Escrever  um  algoritmo  e  implementá-lo  em  linguagem  C  que  leia  duas  matrizes  de 
// valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e 
// uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e 
// calculadas. 

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4

void main(){
    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS];
    int soma[LINHAS][COLUNAS], subtracao[LINHAS][COLUNAS];
    int iCont, jCont;

    for(iCont  = 0; iCont < LINHAS; iCont++)
        for(jCont = 0; jCont < COLUNAS; jCont++)
            scanf("%d", &matriz1[iCont][jCont]);

    for(iCont  = 0; iCont < LINHAS; iCont++)
        for(jCont = 0; jCont < COLUNAS; jCont++)
            scanf("%d", &matriz2[iCont][jCont]);
    
    for(iCont  = 0; iCont < LINHAS; iCont++)
        for(jCont = 0; jCont < COLUNAS; jCont++)
            soma[iCont][jCont] = matriz1[iCont][jCont] + matriz2[iCont][jCont];

    for(iCont  = 0; iCont < LINHAS; iCont++)
        for(jCont = 0; jCont < COLUNAS; jCont++)
            subtracao[iCont][jCont] = matriz1[iCont][jCont] - matriz2[iCont][jCont];

    for(iCont  = 0; iCont < LINHAS; iCont++){
        for(jCont = 0; jCont < COLUNAS; jCont++)
            printf("%d", matriz1[iCont][jCont]);
        printf("\n");
    }
    printf("\n");
    for(iCont  = 0; iCont < LINHAS; iCont++){
        for(jCont = 0; jCont < COLUNAS; jCont++)
            printf("%d", matriz2[iCont][jCont]);
        printf("\n");
    }
    printf("\n");
    printf("Soma:\n");
     for(iCont  = 0; iCont < LINHAS; iCont++){
        for(jCont = 0; jCont < COLUNAS; jCont++)
            printf("%d", soma[iCont][jCont]);
        printf("\n");
    } 
    printf("\n");
    printf("Subtracao:\n");
     for(iCont  = 0; iCont < LINHAS; iCont++){
        for(jCont = 0; jCont < COLUNAS; jCont++)
            printf("%d", subtracao[iCont][jCont]);
        printf("\n");
    }                  
}

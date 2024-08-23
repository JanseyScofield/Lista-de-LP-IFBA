#include <stdio.h>
#define N 2

int main()
{
    int matriz[N][N] = {{3,1},
                        {1,3}};
    int iCont, jCont, kCont;
    int isQuadradoLatino = 1;
    
    
    for(iCont = 0; iCont < N && isQuadradoLatino; iCont++)
        for(jCont = 0; jCont < N; jCont++)
            for(kCont = iCont + 1; kCont < N; kCont++){
                if(matriz[iCont][jCont] > N)
                    isQuadradoLatino = 0;
                if(matriz[iCont][jCont] == matriz[kCont][jCont])
                    isQuadradoLatino = 0;
            }
                    
    for(iCont = 0; iCont < N && isQuadradoLatino; iCont++)
        for(jCont = 0; jCont < N; jCont++)
            for(kCont = iCont + 1; kCont < N; kCont++)
                if(matriz[jCont][iCont] == matriz[jCont][kCont])
                    isQuadradoLatino = 0;
    
    printf("%d", isQuadradoLatino);
    return 0;
}

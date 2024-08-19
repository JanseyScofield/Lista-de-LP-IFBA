/*Escrever um algoritmo e implementá-lo em linguagem C que dada uma matriz N X N, 
contendo, em cada linha, as idades do homem e da mulher no casamento, criar uma 
matriz de freqüência de idade de casamento, com as contagens para cada combinação de 
idades. As idades variam de 18 até 30. Os pares de idade devem ser lidos até que se 
informe um valor inválido para a idade de qualquer dos dois nubentes. Em seguida, o 
programa deverá informar:
(1) Qual a idade mais freqüente de casamento dos homens 
(2) Qual a idade mais freqüente de casamento das mulheres 
(3) Qual a combinação mais freqüente de idades de casamento*/
//Continuar
#include <stdio.h>
#define COLUNAS 2
#define QTD_CASAIS 100

int main()
{
    int quantidadeCasais;
    int iCont, jCont, kCont, lCont;
    int frequencia;
    int maiorFrequenciaHomem = 0, numMaisFrequenteHomem;
    int maiorFrequenciaMulher = 0, numMaisFrequenteMulher;
    int idadesCasais[QTD_CASAIS][COLUNAS];
    
    for(iCont = 0, jCont = 0; iCont < QTD_CASAIS; iCont ++, jCont += 2){
            scanf("%d %d", &idadesCasais[iCont][jCont], &idadesCasais[iCont][jCont + 1]);
            if((idadesCasais[iCont][jCont] < 18 || idadesCasais[iCont][jCont] > 30) || (idadesCasais[iCont][jCont + 1] < 18 || idadesCasais[iCont][jCont + 1] > 30))
                break;
    }
    
    kCont = iCont - 1;
    for(iCont = 0, jCont = 0; iCont <= kCont; iCont++){
        frequencia = 0;
        for(lCont = iCont + 1; lCont <= kCont; lCont++)
            if(idadesCasais[iCont][jCont] == idadesCasais[lCont][jCont])
                frequencia++;
        if(frequencia > maiorFrequenciaHomem){
            maiorFrequenciaHomem = frequencia;
            numMaisFrequenteHomem = idadesCasais[iCont][jCont];
        }
    }
    
    printf("%d", numMaisFrequenteHomem );
    return 0;
}

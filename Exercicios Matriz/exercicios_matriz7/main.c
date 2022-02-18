#include <stdio.h>
#include <stdlib.h>
#define TAM 3
int main()
{
    int array[TAM][TAM] = {{1,2,3},{4,5,6},{7,8,9}};
    int Sup, Sdw, cont;

    Sup = Sdw = cont = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            for(cont = 1; cont < TAM; cont++){
                if(i == j && (i-cont >= 0)){
                    Sup += array[i-cont][j];
                }
                if(i == j  && (i+cont < TAM)){
                    Sdw += array[i+cont][j];
                }
            }
        }
    }

    printf("Acima da diagonal: %d -- Abaixo da diagonal: ",Sup);
    printf("%d",Sdw);
    return 0;
}

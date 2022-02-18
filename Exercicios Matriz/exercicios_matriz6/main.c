#include <stdio.h>
#include <stdlib.h>

int main()  //diagonal principal com 1 e o resto da matriz com 0
{
    int array[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0;j < 5; j++){
            if(i == j){
                array[i][j] = 1;
            }else{
                array[i][j] = 0;
            }
        }
    }


    for(int j = 0; j < 5; j++){
        for(int i = 0;i < 5; i++){
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

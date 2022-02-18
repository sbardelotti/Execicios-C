#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d",&array[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(array[i][j] > 10){
                printf("%d\n",array[i][j]);
            }
        }
    }
    return 0;
}

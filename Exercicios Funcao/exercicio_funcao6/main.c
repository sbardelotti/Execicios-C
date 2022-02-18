#include <stdio.h>
#include <stdlib.h>
int sP(int a[][3]){
    int s = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                s += a[i][j];
            }
        }
    }
    return s;
}
int main()
{
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("%d", sP(array));
    return 0;
}


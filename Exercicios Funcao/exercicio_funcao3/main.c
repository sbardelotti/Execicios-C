#include <stdio.h>
#include <stdlib.h>
void desenhaLinha(int n){
    for(int i = 0; i < n; i++){
        printf("=");
    }
}

void exc(int n){
    int aux;
    for(int i = 1; i <= n; i++){
        aux = i;
            while(aux > 0){
                printf("!");
                aux--;
            }
        printf("\n");
    }
}

int main()
{
    desenhaLinha(33);
    printf("\n");
    exc(33);
    desenhaLinha(33);
    return 0;
}

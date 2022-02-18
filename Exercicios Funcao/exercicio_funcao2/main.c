#include <stdio.h>
#include <stdlib.h>

void quad(int n){
    if(sqrt(n)*sqrt(n) == n){
        printf("%d e um quadrado perfeito", n);
    }else{
        printf("%d nao e um quadrado perfeito", n);
    }
}

int main()
{
    quad(169);
    return 0;
}

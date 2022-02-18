#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    a = 2;
    b = 1;

    if(&a > &b){
        printf("A tem o maior endereco");
        printf("\nEndereco A: %d\nEndereco B: %d", &a, &b);
    }else{
        printf("B tem o maior endereco");
    }
    return 0;
}

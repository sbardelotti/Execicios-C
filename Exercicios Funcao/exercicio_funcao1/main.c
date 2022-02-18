#include <stdio.h>
#include <stdlib.h>
int dobro(int n);

int main()
{
    int a = 2;
    printf("%d", dobro(a));
    return 0;
}

int dobro(int n){
    return n *= 2;
}

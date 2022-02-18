#include <stdio.h>
#include <stdlib.h>
int soma(int n){
    if(n == 1){
        return 1;
    }
    return n + soma(n-1);
}

int main()
{
    int a = 5;
    printf("%d", soma(a));
    return 0;
}

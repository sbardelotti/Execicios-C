#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
    if(n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main()
{
    printf("%d", fatorial(4));
    return 0;
}

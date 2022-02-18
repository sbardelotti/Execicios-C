#include <stdio.h>
#include <stdlib.h>
void soma(int *a, int *b){
    *a = *a + *b;
}
int main()
{
    int a, b;
    a = 2;
    b = 3;
    soma(&a,&b);
    printf("A: %d\nB: %d",a,b);
    return 0;
}

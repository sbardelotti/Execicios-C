#include <stdio.h>
#include <stdlib.h>

void troque(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int n1, n2;
    n1 = 5;
    n2 = 3;

    troque(&n1,&n2);

    printf("n1: %d -- n2: %d", n1, n2);
    return 0;
}

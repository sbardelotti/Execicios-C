#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10], q[10];
    for(int i = 0; i < 10; i++){
        scanf("%d",&n[i]);
        q[i] = n[i] * n[i];
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n",n[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n",q[i]);
    }


    return 0;
}

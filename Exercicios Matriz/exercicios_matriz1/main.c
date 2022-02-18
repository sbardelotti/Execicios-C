#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[6] = {1,0,5,-2,-5,7};
    int s = v[0] + v[1] + v[5];
    v[4] = 100;

    int size = sizeof(v)/sizeof(v[0]);
    for(int i = 0; i < size; i++){
        printf("%d\n",v[i]);
    }

    return 0;
}

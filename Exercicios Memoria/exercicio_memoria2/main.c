#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    p = (int *) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",p+i);
    }
    for(int i = 0; i < n ; i++){
        printf("\n%d",*(p+i));
    }
    return 0;
}

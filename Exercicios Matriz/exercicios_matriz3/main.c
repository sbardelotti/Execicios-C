#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10], M, m, Mi, mi, i;
    M, m, i = 0;
    for(i; i < 10; i++){
        scanf("%d",&n[i]);
        if(n[i] > M){
            M = n[i];
            Mi = i;
        }
        if(n[i]< m){
            m = n[i];
            mi = i;
        }
    }

    printf("\nMaior: %d Posicao: %d",M,Mi);
    printf("\nMenor: %d Posicao: %d",m,mi);

    return 0;
}

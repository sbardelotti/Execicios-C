#include <stdio.h>
#include <stdlib.h>
#define TAM 10
void fil (int array[], int n){
    for(int i = 0; i < TAM; i++){
        *(array + i) = n;
    }

}

int main()
{
    int a[TAM];
    int b = 9;
    fil(a,b);
    for(int i = 0; i < TAM; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000] = "5801989995616609823257530420752963450";
    int m, a;
    m = a = 0;

    for(int i = 0; i < strlen(str)-4; i++){
        a += str[i] -48 + str[i+1] -48 + str[i+2] -48 + str[i+3] -48 + str[i+4] -48;
        if(a > m){
            m = a;
        }
        a = 0;
    }

    printf("\n%d", m);
    return 0;
}

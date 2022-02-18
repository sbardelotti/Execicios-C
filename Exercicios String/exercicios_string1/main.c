#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];

    gets(str);
    int i = strlen(str);
    for(i; i>0; i--){
        printf("%c", str[i-1]);
    }
    return 0;
}

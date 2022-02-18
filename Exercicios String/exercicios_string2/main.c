#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10];
    gets(str);
    for(int i = 0; i < strlen(str); i++){
        str[i] -= 32;   // -32 -> maiscula  // +32 -> minusculo
    }
    printf("%s", str);

    return 0;
}

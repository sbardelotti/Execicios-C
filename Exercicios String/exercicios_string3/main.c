#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    setbuf(stdin, NULL);
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' '){
            for(int j = 0; j < strlen(str)-i; j++){
                str[i+j] = str[i+j+1];
            }
        }
    }
    printf("%s", str);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10], str2[10];
    gets(str1);
    gets(str2);

    for(int i = 0; i < strlen(str1); i++){
        if(str1[i]!=str2[i]){
            if(str1[i]<str2[i]){
                printf("A primeira string vem primeiro");
                break;
            }else{
                printf("A segunda string vem primeiro");
                break;
            }
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *f;
    f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    scanf("%c",&c);
    while(c != '0'){
        fputc(c, f);
        scanf("%c",&c);
    }
    fclose(f);
    return 0;
}

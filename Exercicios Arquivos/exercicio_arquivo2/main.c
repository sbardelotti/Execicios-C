#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char c;
    int cont = 0;
    f = fopen("arq.txt","r");
    if(f == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    while(1){
        c = getc(f);
        if(feof(f))
            break;
        if(c == '\n')
            cont++;
    }

    printf("%d", cont);

    fclose(f);
    return 0;
}

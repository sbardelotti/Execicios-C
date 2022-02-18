#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char c;
    char vogais[6] = {"aeiou"};
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
        for(int i = 0; i < 6; i++){
            if(c == vogais[i])
                cont++;
        }
    }

    printf("%d", cont);

    fclose(f);
    return 0;
}
